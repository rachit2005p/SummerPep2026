#include<iostream>
using namespace std;
int main(){



    int arr[5]={4,7,2,9,5};
    int max=arr[0];
    for(int i =0;i<5;i++){
        if(max>arr[i]){
            arr[i]=max;
        }
        else{max=arr[i];}
    }
    for(int i =0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}























// int first=0,last=0;
// int arr[]={};
// int count=0;
// int max = arr[0];
// if(arr==0){
// return 0;
// }
// for(int i =0;i<4;i++){
// if(max<arr[i]){
//     max=arr[i];
//     count=0;
// first=i;
// }
// if(max==arr[i]){
//     count++;
//     last =i;

// }
// }
// cout<<max<<"  max value"<<endl;
// cout<<count<<"  count value"<<endl;
// cout<<"first"<<first<<endl;
// cout<<"last"<<last<<endl;