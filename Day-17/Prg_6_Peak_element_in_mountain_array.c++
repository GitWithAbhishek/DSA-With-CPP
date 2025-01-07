#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> Vec{1,3,5,7,99,68,8,6,4,2};
    //Binary Search Start
    int start=0,end=Vec.size()-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(Vec[mid]>Vec[mid+1] && Vec[mid]>Vec[mid-1]){
            cout<<"The Peak Element Is "<<Vec[mid];
            break;
        }
        else if(Vec[mid]<Vec[mid+1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}