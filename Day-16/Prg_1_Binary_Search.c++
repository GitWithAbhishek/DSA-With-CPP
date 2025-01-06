#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Implementing Binary Serach :)"<<endl;
    //Pre Requesite - Array Must Be Sorted
    vector<int> Vec{7,5,87,56,37,27,49,1,4,2,88,56,34};
    int key;
    cout<<"Enter The Key Value To Be Searched - ";
    cin>>key;
    // Sorting The Array
    sort(Vec.begin(),Vec.end());

    //Binary Search Start
    int start=0,end=Vec.size()-1,mid,flag=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(Vec[mid]==key){
            cout<<"Found At Index Value "<<mid;
            flag=1;
        }
        else if(Vec[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(flag==-1){
        cout<<"The Value Doesn't Exist :(";
    }

}