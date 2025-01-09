#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Finding Odd Occuring Elment From Paired Array "<<endl;
    vector<int> arr{1,1,2,2,3,3,4,4,3,3,666,666,4,5,5};
    int start=0,end=arr.size()-1;
    /*
    while(start<=end){
        int mid=(start+end)/2; 
        if(arr[mid ]==arr[start+1]){
            start+=2;
        }
        if(arr[end]==arr[end-1]){
            end-=2;
        }
        if(arr[start]!=arr[start+1]){
            cout<<"Found "<<arr[start];
            break;
        }
        if(arr[end]!=arr[end-1]){
            cout<<"Found "<<arr[end];
            break;
        }
        
    }
*/
int asp;
while(start<=end){
    int mid = (start+end)/2;
    if(mid%2!=0){
        if(arr[mid-1]==arr[mid]){
            start=mid+1;
        }
    }
    else if(mid%2==0){
        if(arr[mid+1]==arr[mid]){
            start=mid+1;
        }
    }
    else{
        end=mid-1;
    }
    asp=mid;
}
cout<<asp;

}