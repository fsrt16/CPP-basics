#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char s[100],t[26],r[100];
	int j=0;
	cout<<"enter a string :  "<<endl;
	cin.getline(s,100);
	char ch;
	cout<<"enter";
	cin>>ch;
int len;
len=strlen(s);
for(int i=0;i<25;i++){
	t[i]=0;
}
    for(int i=0; i<len; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            t[s[i] - 97]++;
        }
        else if(s[i]>=65 && s[i]<=91)
        {
            t[s[i] - 65]++;
        }
    }
    cout<<"\nFrequency of all characters in the given string:"<<endl;
	 for(int i=0;i<25;i++){
	if(t[i]!= 0){
		cout<<i+97<<" ="<<t[i];
	}
}   

	return 0;
}
