#include<iostream>
using namespace std;
int main(){
	int size,sum=0,avg=0;
	cout<<"enter the size of array";
	cin>>size;
	int marks[size];
	for(int i=0;i<size;i++){
		cin>>marks[i];
		sum+=marks[i];
	}
	avg=sum/size;
	cout<<"THE AVG IS="<<avg;
return 0;	
}

