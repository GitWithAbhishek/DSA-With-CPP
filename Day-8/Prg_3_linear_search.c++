#include<iostream>
using namespace std;
int main(){
    int arr[10],val,flag=-1;
    cout<<"Enter The Elements "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Element To Found ";
    cin>>val;
    for (int i=0;i<10;i++)
    {
     if(arr[i]==val){
        cout<<"Found At index "<<i;
        flag=1;
        break;
     }
    }
    if(flag==-1){
        cout<<"Not Found";
    }
    
}