#include<iostream>
#include<vector>
using namespace std;
int main(){
    int par_sum_val;
    bool flag=false;
    vector<int> arr{1,3,5,7,2,4,6};
    cout<<"Enter The Pair Sum ";
    cin>>par_sum_val;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(par_sum_val==arr[i]+arr[j]){
                cout<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;
                flag=true;
            }
        }
    }
    if(flag==false){
    cout<<"Pairs Are Not Found";
}
}