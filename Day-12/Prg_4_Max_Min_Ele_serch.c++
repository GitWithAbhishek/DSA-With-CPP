#include<iostream>
using namespace std;
int max_ele(int arr[][3],int i,int j){
    int max=arr[0][0];
    for(int u=0;u<i;u++){
        for(int v=0;v<j;v++){
           if(max<arr[u][v]){
            max=arr[u][v];
           }
        }
    }
    return max;
}
int min_ele(int arr[][3],int i,int j){
    int min=arr[0][0];
    for(int u=0;u<i;u++){
        for(int v=0;v<j;v++){
           if(min>arr[u][v]){
            min=arr[u][v];
           }
        }
    }
    return min;
}
int main(){
    int row=3,col=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"The Max Element is "<<max_ele(arr,row,col);
    cout<<endl;
    cout<<"The Min Element is "<<min_ele(arr,row,col);
}