#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void find_mis(vector<int> vec){
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i]!=i+1){
            cout<<i+1<<" ";
            break;
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Finding One Missing Element From The Array 1 to n";
    vector<int> vec{1,8,5,10,7,6,9,9,2,4};
    find_mis(vec);
}