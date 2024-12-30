#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int rev_arr[5],j=0;
    for(int i=4;i>=0;i--){
        rev_arr[j]=arr[i];
        j++;
    }
    cout<<"Reverse of the array "<<endl;
    for(int i=0;i<5;i++){
        cout<<rev_arr[i]<<" ";
    }
}