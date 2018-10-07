#include<iostream>
using namespace std;
//int sum=0;
int r(int a){
static int sum=0;
int b=0; 
if(a!=0){

	b=a%10;
	sum=sum*10+b;
	a=a/10;
	
    r(a);
}
else{
	return sum;
}
}
int main(){ int n;
	cout<<"enetr a no : "<<endl;
	cin>>n;
	int b;
	b=r(n);
	cout<<b;
return 0;
}

