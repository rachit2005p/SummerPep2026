#include<iostream>
using namespace std;
void calculate(int arr[][4],int row){
    
 for(int i =0;i<row;i++){ 
    int sum=0;   
    for(int j =0;j<3;j++){
       sum+=arr[i][j];
 }cout<<sum<<endl;
}
}
void maxcalculate(int arr[][4],int row){
    int maxsum =0;
    int r=0;
 for(int i =0;i<row;i++){ 
    int sum=0;   
    for(int j =0;j<4;j++){
       sum+=arr[i][j];
 }
if(sum>maxsum){
    maxsum=sum;
    r=i;
} else if(sum == maxsum)
        {
            r = i - 1;   // previous row of the current row
        }
}cout<<" Max SUM is "<<maxsum<<" of row "<<r<<endl;
}

int main(){

    int arr[4][4]={6,7,472d,1
                   ,6,7,47,1,
                   6,7,4,1,
                   6,7,47,1};

                   //calculate(arr,3);
maxcalculate(arr,4);

    // print value of max sum also its index
    // if sum== max sum retunrn previous index 








    return 0;
}