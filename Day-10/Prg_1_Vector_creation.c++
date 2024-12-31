#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr;
    vector <int> brr(10,-1);
    vector <int> crr{11,12,13,14,15};
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    cout<<"The Capacity of the arr = "<<arr.capacity()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The Values of brr vector"<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i];
    }
    cout<<endl<<"The Values of crr vector"<<endl;
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    
    arr.pop_back();
    arr.pop_back();
    
    cout<<endl<<"The Values of arr after the pop operation"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}