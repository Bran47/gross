#include<iostream>
using namespace std;
int main()
{
	char employeename;
	cout<<"enter employee name";
	cin>> employeename;
	
	float salary;
	cout<<"enter employee salary";
	cin>>salary;
	
	float tax;
	tax = 25/salary*(100);
	cout<<"calculate employee tax"<<tax;
	
	float grosssalary;
	cout<<"calculate gross of employee"<<grosssalary;
	cin>>grosssalary;
	
	
	return 0;
	
}
