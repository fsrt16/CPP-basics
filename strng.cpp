#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
char s1[100],a[30];
cout<<"ENTER A STRING :   "<<endl;
cin.getline(s1,100);
int m,y=0;
m=strlen(s1);
char x,w;
cout<<m<<endl;
for(int i=97;i<122;i++){
int a1=0;

x=(char)i;
for(int j=0;j<m;j++)
{
   	if(s1[j]==x){
   		a1++;
}
if(a1>y){
	y=a1;
	w=x;
}


}if(a1!=0)
cout<<"THE FREQUENCY OF "<<x<<" is : "<<a1<<endl;	}

	cout<<"THE MAximum no of freqquency is : "<<w<<"  "<<y<<endl;
	
	return 0;
}
