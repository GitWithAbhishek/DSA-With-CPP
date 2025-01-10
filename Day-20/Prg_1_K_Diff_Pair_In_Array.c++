#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Finding The K Diiference Pair From An Array "<<endl;
    vector<int> arr{3,1,4,1,5};
    sort(arr.begin(),arr.end());
    cout<<"Enter The Difference - ";
    int diff;
    cin>>diff;
  /*Metthod -1*/
    int start=0,end=1;
    while(start<=end){
        if(arr[end]-arr[start]==diff){
            cout<<"("<<arr[start]<<" , "<<arr[end]<<")"<<endl;
            start++;
            end++;
        }
        else if(arr[end]-arr[start]>diff){
            start++;
        }
        else{
            end++;
        }

    }

/*Method -2
int start=0,end=1;
while(start<arr.size()+1){
    if(arr[start]+diff==arr[end]){
        cout<<"("<<arr[start]<<" , "<<arr[end]<<")"<<endl;
        start++;
        end++;
    }
    else if(arr[start]+diff<arr[end]){
        start++;
    }
    else{
        end++;
    }
}
*/
}