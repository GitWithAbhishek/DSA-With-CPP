#include<iostream>
#include<vector>
using namespace std;
void Merge_Array(vector <int> arr,vector <int> brr){
    vector <int> ans(arr.size()+brr.size());
    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
    
        ans.push_back(brr[i]);
    }
    for(auto value:ans){
        cout<<value<<" ";
    }
}
int main(){
    int n,m;
    cout<<"Enter the size of the first array = ";
    cin>>n;
    cout<<"Enter the size of the second array = ";
    cin>>m;
    vector <int> arr(n);
    vector <int> brr(m);
    cout<<"Enter The Elements In First Array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Elements In Second Array "<<endl;
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    Merge_Array(arr,brr);
    
}