#include<iostream>
#include<string>
using namespace std;
void input(int a[],int s){
	for(int i=0;i<s;i++){
		cout<<"el0ment "<<i+1<<endl;
		cin>>a[i];
	}
}
int maxe(int a[],int s){
	int max=a[0];
	for(int i=1;i<s;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int mine(int a[],int s){
	int min=a[0];
		for(int i=1;i<s;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
int main(){
	int a[10],s;
	cout<<"ENTER THE NO OF ELEMENTS : "<<endl;
	cin>>s;
	input(a,s);
	int max,mn;
	max=maxe(a,s);
	cout<<"THE MAXIMUM ELEMENT IS : "<<endl;
	cout<<max<<endl;
	mn=mine(a,s);
	cout<<"THE MiniMUM ELEMENT IS : "<<endl;
	cout<<mn;
	return 0;
}
