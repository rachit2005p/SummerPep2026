#include<iostream>
#include<vector>
using namespace std;
int fact(int n ){
if(n<=1)return 1;
return n*fact(n-1);
}

int fib(int n ){
   if (n==0)return 0;
   if (n==1)return 1;
   
return fib(n-1)+fib(n-2);
}

int check(int &arr[i][j], int i, int j){
for(int i=0;i<4;i++){
   for(int j=0;j<3;j++){
     if(j%2==0){cout<<arr[j][i]<<" ";}
   }cout<<endl;
}
}
int main(){
// int key=53;
// int arr[7]={12,32,55,1,26,53,78};
// for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
// if(arr[i]==key){
//    if(key>20){
//     cout<<key*2;
//    }
//    else{
//     cout<<key/2;
//    }
// }
// }
// cout<<fact(5)<<endl;
// cout<<fib(7);
int arr[3][4];
for(int i=0;i<4;i++){
   for(int j=0;j<3;j++){
     cout<<" enter "<<j<<" " <<i<<" element ";
      cin>>arr[j][i];
   }
}
for(int i=0;i<4;i++){
   for(int j=0;j<3;j++){
     cout<<arr[j][i]<<" ";
   }cout<<endl;
}

cout<<endl;

check(int &arr[i][j]);

return 0;
}


// Pointer Type	Description
// Null Pointer	Points to nothing (nullptr)
// Void Pointer	Can point to any data type
// Wild Pointer	Uninitialized pointer
// Dangling Pointer	Points to deleted memory



// // int a=10;
// // int *ptr =&a;
// // int **pt = &ptr;
// // cout<<ptr;
// // cout<<endl;
// // cout<<pt;
// // cout<<endl;
// // cout<<*ptr + 1;

// vector<int> vec1={1,2,3,4,5,6};
// cout<<vec1[2];
