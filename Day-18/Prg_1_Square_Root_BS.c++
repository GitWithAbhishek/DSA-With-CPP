#include<iostream>
using namespace std;
int sqrt_fun(int n){
    int start=0,end=n,mid,ans;
    mid=start+(end-start)/2;
    while(start<=end){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    
        return ans;
}
int main(){
    cout<<"Enter A Number - ";
    int n;
    cin>>n;
    int result;
    result = sqrt_fun(n);
    long double pre_ans = result;
    int precision;
    cout<<"Enter The Precision ";
    cin>>precision;
    long double step=0.1;
    for(int i=1;i<=precision;i++){
        for(long double j=pre_ans;j*j<=n;j=j+step){
            pre_ans=j;

        }
        step=step/10;
    }
    cout<<"The Square Root Is "<<pre_ans;
    }