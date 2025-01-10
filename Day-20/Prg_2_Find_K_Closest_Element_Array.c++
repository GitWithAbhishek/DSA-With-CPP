#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;
int main(){
vector<int> nums{1,1,2,3,4,5};
cout<<"Enter The Number Of Elements You Want - ";
int k;
cin>>k;
cout<<"Enter The Value Of X Whose Closset You Want To Find - ";
int x;
cin>>x;
int low=0,high=nums.size()-1;
while(high-low>=k){
    int diffl=nums[low]-x;
    int diffh=nums[high]-x;
    int ab1=abs(diffl);
    int ab2=abs(diffh);
    if(ab1>ab2){
        low++;
    }
    else{
        high--;
    }
}
vector<int> arr{nums.begin()+low,nums.begin()+high+1};
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}