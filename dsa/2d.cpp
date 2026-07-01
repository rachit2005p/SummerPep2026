#include<iostream>
using namespace std;
void calculate(int arr[][3],int row){
    
 for(int i =0;i<row;i++){ 
    int sum=0;   
    for(int j =0;j<3;j++){
       sum+=arr[i][j];
 }cout<<sum<<endl;
}
}
int main(){

    int arr[3][3]={1,3,4
                   ,6,7,4,
                   1,3,7};

                   calculate(arr,3);

    return 0;
}