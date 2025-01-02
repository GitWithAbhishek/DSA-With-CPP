#include<iostream>
using namespace std;
int main(){
    cout<<"Creation Of 2D Array"<<endl;
    int arr[3][3];
    cout<<"Enter the elements in the array ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Displaying The Elements Of The 2D Array Row wise "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Displaying The Elements Of The 2D Array Column wise "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}