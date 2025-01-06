#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
 //Binary Serach Pre defined Function
 vector<int> v_name{1,2,3,4,5,6,7,8,9,10};
 if(binary_search(v_name.begin(),v_name.end(),5)){
    cout<<"Found";
 }   
 else{
    cout<<"Not Found";
 }
}