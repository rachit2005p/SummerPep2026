#include <iostream>
using namespace std;

int bin(int arr[] , int size ,int  key){
 int s = 0;
 int e =size-1;
 while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key)return mid;
    else if(arr[mid]<key){
        s=mid+1;
    }
    else{e=mid-1;}
 }
 return -1;
}


int main(){

int arr[]={1,2,3,4,5,26,47,88,99};
int size=9;
int key =88;
cout<<bin(arr,size,key);

    return 0;
}