#include<iostream>
#include<vector>
using namespace std;
int main(){
    int par_sum_val;
    bool flag=false;
    vector<int> arr{1,3,5,7,2,4,6};
    cout<<"Enter The Triplet Sum ";
    cin>>par_sum_val;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
            if(par_sum_val==arr[i]+arr[j]+arr[k]){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                flag=true;
            }
        }
    }
}
if(flag==false){
    cout<<"Pairs Are Not Found";
}
}