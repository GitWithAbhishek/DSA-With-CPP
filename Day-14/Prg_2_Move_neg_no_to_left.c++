#include<iostream>
#include<vector>
using namespace std;
void neg_sort(vector<int> arr){
    int p=0,q=1;
    while(q<arr.size()){
        if(arr[q]<0){
            swap(arr[p],arr[q]);
            q++;
            p++;
        }
        else{
            q++;
                    }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr{-1,-3,-2,7,4,9,11,-12};
    neg_sort(arr);
}