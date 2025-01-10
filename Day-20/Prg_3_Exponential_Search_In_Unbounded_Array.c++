#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Exponential Searching In  Unbounded Array -"<<endl;
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    cout << "Enter The Element You want To Search - ";
    int key, flag = -1, i = 1;
    cin >> key;
    if (arr[0] == key)
    {
        flag = 1;
        cout << "Found At Zero Index ";
    }
    else
    {
        while (i < arr.size() && arr[i] < key)
        {

            i = i * 2;
        }
    }
    if (flag == -1)
    {
        int start = i / 2, end = i;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] == key)
            {
                cout << "Found At " << mid << " Index Value";
                break;
            }
            else if (arr[mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;

            }
        }
    }
}