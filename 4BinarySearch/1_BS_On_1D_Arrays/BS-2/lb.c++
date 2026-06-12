#include<bits/stdc++.h>
using namespace std;

int LB(vector<int> &arr, int target){
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] >= target){
            ans = mid;
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

    cout << LB(arr, target);

    return 0;
}