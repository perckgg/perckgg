#include<iostream>
#include<string.h>
using namespace std;
string tos(string s)
{ string p="";
	for(int i=0;i<s.length()-1;i++)
	{
		for(int j=i+1;j<s.length();j++) 
		{
			if(s[i]<s[j]){p=p+s[i];
			}
			else{ p=p+s[j];
			}
		}
	}
	return p;
}
int main()
{ string s;
getline(cin,s);
string d=tos(s);
cout<<"SX : "<<d;
	
}
