#include<bits/stdc++.h>
using namespace std;

int Floor(vector<int> &arr, int target){
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}

int Ceil(vector<int> &arr, int target){
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] >= target){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
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

    cout << "Floor = " << Floor(arr, target) << "\n";
    cout << "Ceil = " << Ceil(arr, target) << "\n";

    return 0;
}