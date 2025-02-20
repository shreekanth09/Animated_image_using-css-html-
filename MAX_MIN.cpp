#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxValue(int arr[],int sz){
    int Max=INT_MIN;
    for(int i=0; i<sz; i++){
        // if(arr[i]>Max){
        //     Max=arr[i];
        Max=max(Max,arr[i]);           //here max is a inbuilt funciton
       // }//
    }
    
    return Max;
}
int minValue(int arr[],int sz){
    int min=INT_MAX;
    for(int i=0; i<sz; i++){
        if(arr[i]<min){
            min=arr[i];
        // Max=max(Max,arr[i]);
        }
    }
    
    return min;
}

int main(){
   int arr[4]={300,20,4,5};
   int sz=4;
   int res=maxValue(arr,sz);
   int resu=minValue(arr,sz);
   cout << "max value is : "<<res<<endl;
   cout << "min value is : "<<resu<<endl;
   return 0;

             //OT WORKING OF TAKING ARRAY'S INPUT
// int sz;
// cin>>sz;
// int arr[100];
// for(int i=0; i<sz; i++){
//     cin>>arr[i];
// }
// cout<<"max value is : "<<maxValue(arr,sz)<<endl;
// return 0;
}