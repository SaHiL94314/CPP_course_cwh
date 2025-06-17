#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int ascendingBubble(int arr[], int n) {

  int swap1=0;
  for(int k=0;k<n;k++){
    for(int j=0;j<n-k;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        swap1++;
      }
    }
  }
    return swap1;
  }
  int descendingBubble(int arr2[], int n) {

  int swap2=0;
  for(int k=0;k<n;k++){
    for(int j=0;j<n-k;j++){
      if(arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        swap2++;
      }
    }
  }
    return swap2;
  }

int main(){
  
  cout<<"enter value of n"<<endl;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter value of "<<i<<" element"<<endl;
    cin>>arr[i];
  }
  int arr2[n];
  for(int i=0;i<n;i++){
    arr2[i]=arr[i];
  }
  int swap1=ascendingBubble(arr,n);
  int swap2=descendingBubble(arr2,n);
  
  cout<< min(swap1,swap2);
  return 0;
}