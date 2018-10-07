#include <iostream>
#include <string>
using namespace std;
int TotSalCalc(int,int);
struct Employee
{
	string Name;
	int YrOfJoin;
	int Salary;
	int hrsperday;
	string address;
};
typedef struct Employee Emp;
int main()
{
	Emp e[3];
	int c[3];
	for (int i=0;i<3;i++)
	{
		cout<<"Please Enter the Name Of Employee "<<i+1<<endl;
		cin>>e[i].Name;
		cout<<"Please Enter the Year Of Joining Of Employee "<<i+1<<endl;
		cin>>e[i].YrOfJoin;
		cout<<"Please Enter the Salary Of Employee "<<i+1<<endl;
		cin>>e[i].Salary;
		cout<<"Please Enter the Hours of Work Per day Of Employee "<<i+1<<endl;
		cin>>e[i].hrsperday;
		cout<<"Please Enter the Address Of Employee "<<i+1<<endl;
		cin>>e[i].address;
	}
	cout<<"Details Of Employee's : \nName\tYear Of Joining\tSalary(Rs.)\tHrspreDay\tAddress\n";
		
			for(int j=0;j<3;j++)
			{
			cout<<e[j].Name<<"\t"<<e[j].YrOfJoin<<"\t"<<"\t"<<e[j].Salary<<"\t"<<"\t"<<e[j].hrsperday<<"\t"<<"\t"<<e[j].address<<endl;
			}
		
		cout<<"Total Salary Of Employees : \nName\tTotal Salary\n";
		for(int k=0;k<3;k++)
		{
			cout<<e[k].Name<<"\t"<<TotSalCalc(e[k].Salary,e[k].hrsperday)<<endl;
		}
	return 0;
}
int TotSalCalc(int Salary,int hrsperday)
{
	int totsal=0;
	if(hrsperday>8 && hrsperday<12)
	{
		totsal=Salary+500;
	}
	else if(hrsperday>9 && hrsperday<12)
	{
		totsal=Salary+1000;
	}
	else if(hrsperday>=12)
	{
		totsal=Salary+1500;
	
	}
	else
	cout<<"Error. Please Try Again.";
	return totsal;
}
