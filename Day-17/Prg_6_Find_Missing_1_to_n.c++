#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> Vec{1,2,3,5,6,7,8};
    //Binary Search Start
    int start=0,end=Vec.size()-1,mid,mis_ele;
    while(start<=end){
        mid=start+(end-start)/2;
        if(Vec[mid]==mid+1){
            start=mid+1;
        }
        else{
            mis_ele=mid+1;
            end=mid-1;
        }
    }
    cout<<"The Missing Element Is  :( "<<mis_ele;
}