#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector <int>> mul_vec;
    vector<int> a{1,2,3,4,5};
    vector<int> b{11,12,13,14,15};
    vector<int> c{21,22,23};
    mul_vec.push_back(a);
    mul_vec.push_back(b);
    mul_vec.push_back(c);
    for(int i=0;i<3;i++){
        for(int j=0;j<mul_vec[i].size();j++){
            cout<<mul_vec[i][j]<<" ";
        }
        cout<<endl;
    }
}