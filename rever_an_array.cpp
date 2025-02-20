#include<iostream>
using namespace std;
void revers(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
}
int printfun(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,3,2,1};
    int ar[]={10,2,3,50,6,10};
    int size=5;
    int sz=6;
    // cout << revers(arr,size)>>endl;
    revers(arr,size);
    revers(ar,sz);
    printfun(arr,size);
    printfun(ar,sz);
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;
    // for(int i=0; i<sz; i++){
    //     cout<<ar[i]<<" ";
    // }
    return 0;
}
//it is used to revers an number array also a string array.