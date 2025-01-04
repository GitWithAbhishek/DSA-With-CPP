#include<iostream>
#include<vector>
using namespace std;
int find_dp(vector<int> arr){
    int sn_ap,sum=0;
    float n=arr.size();
    sn_ap=(n*(2+(n-1)))/2;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }
    return sn_ap-sum;
}
int main(){
    vector<int> arr{1,2,3,3,5};
    int result;
    result=find_dp(arr);
    cout<<"The Duplicate Elemnet Is "<<result;   
}