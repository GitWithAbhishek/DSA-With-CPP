#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,0,1,0,1,0,0,1,0};
    int count_z=0,count_o=0;
    for(int i=0;i<10;i++){
    if(arr[i]==0){
        count_z++;
    }
    else{
        count_o++;
    }
    }
    cout<<"Number of Zeros Are - "<<count_z<<endl;
    cout<<"Number of Ones Are - "<<count_o;
    
    
}