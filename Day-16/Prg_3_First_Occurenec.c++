#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> Vec{1,2,3,3,3,3,3,4,4,4,4,5,6,7,9};
    int key=4;
    //Binary Search Start
    int start=0,end=Vec.size()-1,mid,first_occ;
    while(start<=end){
        mid=start+(end-start)/2;
        if(Vec[mid]==key){
            first_occ=mid;
            end=mid-1;
        }
        else if(Vec[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"The First Occurenece Is  :("<<first_occ;
}