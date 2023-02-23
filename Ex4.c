#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
//create a linked list to store numbers
struct node{
   int data;
   struct node *next;
};
int main(int argc, char **argv){
	FILE* file;
	int num;
	struct node* head = NULL;
	struct node* current = NULL;
	struct node* new = NULL;
	int count2 = 0;
	int count3 = 0;
	file = fopen("numbers.txt","r");//open file in read mode
	if(file == NULL){
		printf("File Error!");
		exit(1);
	}
	// read non-negative numbers in file "numbers.txt" then store them into the linked list
	while(fscanf(file,"%d",&num) != EOF){
	new = (struct node*)malloc(sizeof(struct node));
 	new->data = num;
	new->next = NULL;
	if(head == NULL){
	   head = new;
	   current = new;
	}
    else{
	   current->next = new;
	   current = new;
	  }	 
	}
	fclose(file);
	current = head;
	pid_t pid = fork();
	if(pid < -1){ //Failure 
		printf("Error creating child process. ");
		exit(1);
	}
	else if(pid == 0){//Child process
		//Count the numbers divisible by 2
		while(current != NULL){
			if(current->data %3 == 0){
				count3 += 1;
			}
			current = current->next;
		}
		printf("Numbers divisible by 3: %d\n",count3);
	}
	else{ //Parent Process
		wait(NULL);//wait for the child process
		current = head;
		//Count the numbers divisible by 2
		while(current != NULL){
			if(current->data %2 == 0){
				count2 += 1;
			}
			current = current->next;
		}
		printf("Numbers divisible by 2: %d\n",count2);
	}
	return 0;
}
