#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,1,1,0,0,1,0,1,0,1,0,0};
    int start=0,end=arr.size()-1,temp;
    while(start<=end){
        if(arr[start]==1 && arr[end]==0){
            arr[start]=0;
            arr[end]=1;
            start++;
            end--;
        }
        else if(arr[start]==1 && arr[end]==1){
            end--;
        }
        else{
            start++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}