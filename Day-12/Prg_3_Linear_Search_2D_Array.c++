#include<iostream>
using namespace std;
bool serch(int arr[][3],int i,int j,int key){
for(int u=0;u<i;u++){
    for(int v=0;v<j;v++){
        if(key==arr[u][v]){
            return true;
        }
    }
}
}
int main(){
    int key,i=3,j=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Enter The Key to Find ";
    cin>>key;
    cout<<"The Result is "<<serch(arr,i,j,key);
}