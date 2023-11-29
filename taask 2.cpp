#include<iostream>
using namespace std;

int main(){ 
 int arr[5]; 
 int temp, i,j; 
 for(i=0; i<5; i++){ 
 cout<<"Enter a Value: "; 
 cin>>arr[i]; 
 } 
 for(i=0; i<5; i++){ 
 for(j=0; j<5; j++){ 
 if(arr[j]>arr[j+1]){ 
 temp=arr[j+1]; 
 arr[j+1]=arr[j]; 
 arr[j]=temp; 
 } 
 } 
 } 
 for(i=0; i<4; i++){ 
 cout<<arr[i]<<", "; 
 } 
 cout<<arr[4]; 

return 0;	
}
