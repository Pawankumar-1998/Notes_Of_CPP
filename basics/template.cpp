#include <iostream>
#include <string>

using namespace std;

template< class T >
class Employee{
private:
	T EmployeeID , EmployeeSalary;
public:
	T Employee( T theID , T theSalary ){
		EmployeeID = theID;
		EmployeeSalary = theSalary;
	}
};

template< class T >
class Student{
private:

public:
	T Student(){}

};

int main(){

	Employee <> theEmployee( 2 , 3000 );
	Student <> theStudent ();

	system( "pause" );
	return 0;
}