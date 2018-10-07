#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char s1[120],s2[120],s3[120];
	cout<<"enter a string :  "<<endl;
	cin.getline(s1,100);
	int m,n,p;
	m=strlen(s1);
		cout<<"enter a string :  "<<endl;
	cin.getline(s2,100);
	n=strlen(s2);
	strcat(s3,s1);
	strcat(s3,s2);
	cout<<"the concatinated string is :  "<<s3<<endl;
	
	return 0;
	
}
