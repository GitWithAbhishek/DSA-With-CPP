#include<iostream>
using namespace std;
int main(){
    cout<<"Creation Of 2D Array"<<endl;
    int sum=0;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Displaying The Sum Of All Elements Of The 2D Array = ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum<<endl;
    sum=0;
    cout<<"Displaying The Sum Of Elements Of The 2D Array Column wise = ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
        sum=0;
    }
    sum=0;
    cout<<"Displaying The Sum Of Elements Of The 2D Array Row wise = ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
        sum=0;    
    }
    
}

