#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int m=3,n=3;
for(int i=0;i<n;i++){
    if(i%2==0){
       for(int j=0;j<m;j++){
        cout<<arr[j][i]<<" ";
    }
    }
    else{
        for(int j=m-1;j>=0;j--){
        cout<<arr[j][i]<<" ";
       }
    }
  }
}