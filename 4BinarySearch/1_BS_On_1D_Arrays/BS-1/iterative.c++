#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr, int target){
    int low = 0, high = arr.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(auto &x : arr){
        cin >> x;
    }

    int target;
    cin >> target;

    cout << BinarySearch(arr, target);

    return 0;
}