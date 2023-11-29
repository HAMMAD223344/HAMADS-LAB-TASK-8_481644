#include<iostream> 
using namespace std; 
 
int main(){ 
 int arr[5]; 
 int i,j, temp; 
 for(i=0; i<5; i++){ 
 cout<<"Enter a Value: "; 
 cin>>arr[i]; 
 } 
 for(i=0; i<5; i++){ 
 for(j=i; j<5; j++){ 
 if(arr[i]>arr[j]){ 
 temp=arr[i]; 
 arr[i]=arr[j]; 
 arr[j]=temp; 
 } 
 }
 for(i=0; i<4; i++){ 
 cout<<arr[i]<<", "; 
 } 
 cout<<arr[4]; 
} 
 return 0;
 }
