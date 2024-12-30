#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int j=4;
    for(int i=0;i<3;i++){
        cout<<arr[i];
        if(j==2){
            break;
        }
        else {
            cout<<arr[j];
            j--;
        }
    }

}