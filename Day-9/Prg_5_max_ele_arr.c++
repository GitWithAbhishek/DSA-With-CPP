#include<iostream>
using namespace std;
int main(){
    int arr[10]={11,105,32,7,34,58,35,74,87,30};
    int max=arr[0];
    for (int i=0;i<10;i++)
    {
     if(max<arr[i]){
     max=arr[i];
     }
    }
    cout<<max<<" is the max element in the array";
}