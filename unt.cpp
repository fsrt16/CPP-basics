#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){ int b[10],u=0,k1=0;
char c[26];
char s1[100],a[30];
cout<<"ENTER A STRING :   "<<endl;
cin.getline(s1,100);
int m,y=0;
m=strlen(s1);
char x,w,v;
cout<<m<<endl;
for(int i=0;i<m;i++){
	for(int j=97;j<122;j++){
		v=(char)j;
		if(v==s1[i]){
			u++;
		}
	}
}

for(int i=97;i<122;i++){
int a1=0;
x=(char)i;
for(int j=0;j<m;j++)
{
   	if(s1[j]==x){
   		a1++;
   		w=x;
}
}
if(a1!=0){
u=u-a1+1;
}
}

for(int i=97;i<122;i++){
int a1=0;
x=(char)i;
for(int j=0;j<m;j++)
{
   	if(s1[j]==x){
   		a1++;
   		w=x;
}
}

if(a1!=0){
	while(k1!=u){
		b[k1]=a1;
		c[k1]=w;
		k1++;
		break ;
		
		
	}
	

}
}
cout<<u<<endl;
cout<<" [ ";
	for(int k=0;k<u;k++){
		cout<<b[k]<<"  ";
	}
	cout<<" ] "<<endl;
	
	cout<<" [ ";
	for(int k=0;k<u;k++){
		cout<<c[k]<<"  ";
	}
	cout<<" ] "<<endl;
	
	int u1;
	char ch1;
	cout<<"ENTER A CHARACTER WHOSE FIRST OCCURENCE IS TO BE DELETED :  "<<endl;
	cin>>ch1;
		for(int k=0;k<u;k++){
		if(c[k]==ch1){


for(int j=0;j<m;j++)
{
   	if(s1[j]==ch1){
   		s1[j]='\0';
   		break;
}
}

}	
		}
		for(int i=0;i<m;i++)
	cout<<s1[i];
	int a2=0;
	cout<<"ENTER A CHARACTER WHOSE last OCCURENCE IS TO BE DELETED :  "<<endl;
	cin>>ch1;
		for(int k=0;k<u;k++){
		if(c[k]==ch1){


for(int j=0;j<m;j++)
{
   	if(s1[j]==ch1){
   		a2++;
   		if(a2==b[k]){
		   
   		s1[j]='\0';
   		break;}
}
}

}	
		}
		for(int i=0;i<m;i++)
	cout<<s1[i];
	
	return 0;
}
