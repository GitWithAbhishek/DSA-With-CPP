#include<iostream>
#include<vector>
using namespace std;

int unique_value(vector <int> arr ){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n,ans,temp;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
     
    ans=unique_value(arr);
    cout<<"The Unique Value Is = "<<ans;

}