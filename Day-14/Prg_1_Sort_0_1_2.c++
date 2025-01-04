#include<iostream>
#include<vector>
using namespace std;

void sort_fun(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1, temp;
    
    // Dutch National Flag Algorithm
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr{0, 1, 0, 2, 0, 1, 1, 2, 0, 2, 1};
    
    sort_fun(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
