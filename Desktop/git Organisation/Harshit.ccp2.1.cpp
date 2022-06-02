#include <iostream>

using namespace std;

//  Inheritance
 
 class Vehicle{     // base class vehicle  
 	
 	public:
 	
 	string model;
 	
 	int cost;
 	
 	
 };
 
 
 class car:public Vehicle{   // derived class car
 	
 	
 	public:
 		
 		string colour;
 		
 		
			
 };
 
 int main(){
 	
 	
 	car myobj1;
 	
 	myobj1.cost=700000;
 	
 	myobj1.model="Alpha";
 	
 	myobj1.colour="Red";
 	
 	
 	
 	
 	
 	cout<<myobj1.colour<<endl;
 	
 	cout<<myobj1.model<<endl;
 	
 	
 	
 	
 }
 
 