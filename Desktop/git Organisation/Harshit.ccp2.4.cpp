#include<iostream>

using namespace std;

// An example of Single Inheritance
class Vehicle{  //Base class Vehicle
	
	public:
		
		Vehicle()  //Creating a constructor named Vehicle
		
		{
			
			cout<<"This is Vehicle class"<<endl;
		}
};


class Car:public  Vehicle{   //Derived class Car
	
	
};