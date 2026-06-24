#include<iostream>
#include<vector>
using namespace std;

int main(){
int key=53;
int arr[7]={12,32,55,1,26,53,78};
for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
if(arr[i]==key){
   if(key>20){
    cout<<key*2;
   }
   else{
    cout<<key/2;
   }
}
}


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
