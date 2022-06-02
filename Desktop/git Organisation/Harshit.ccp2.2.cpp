#include <iostream>

using namespace std;

class Employee{   //base class Student
	
	public:
	
	int EmployeeId;
	
	string Name;
	
	
};

class Harshit: public Employee{   //derived class Harshit
	
	public:
		
		float Salary;


};



class Rahul:public Harshit,public Employee{ //derived class Rahul
	
	
	public:
		
		string DateJoined; 
		
		
};


int main(){
	
     Rahul myobj;
	
	myobj.Salary=1458500;


    
    myobj.DateJoined="23/04/2021";
    
	
	myobj.EmployeeId=1235;
	
	cout<<myobj.Salary<<endl;
	
	cout<<myobj.DateJoined<<endl;
	

    cout<<myobj.EmployeeId<<endl;

}
	
	

