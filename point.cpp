#pragma once
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class point{
	private:
		double x;double y;
	public:
		point(){
		}
		point(double x, double y){
			this->x=x;this->y=y;
		}
		double getX(){return x;
		}
		void setX(double x){
			this->x=x;
		}
		double getY(){return y;
		}
		void setY(double y){this->y=y;
		}
		void setXY(double x,double y){
			this->x=x;
			this->y=y;
		}
		double distance(double x,double y){
			return sqrt(pow(this->x-x,2)+pow(this->y-y,2));
		}
		double distance(point another)
		{
			return distance(another.getX(),another.getY());
		}
};

