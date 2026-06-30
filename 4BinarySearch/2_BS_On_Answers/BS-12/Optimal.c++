// Koko eating  bananas

#include<bits/stdc++.h>
using namespace std;

int findmax(vector<int> &arr){
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i]> maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int calculateTotalHours(vector<int> &arr, int hourly){
    int totalH = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        totalH = totalH + ceil((double)arr[i]/ (double) hourly);
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> arr, int h){
    int low = 1; 
    int high = findmax(arr);
    while(low <= high){
        int mid = (low+high)/2;
        int totalH = calculateTotalHours(arr, mid);
        if(totalH <= h){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << minimumRateToEatBananas(arr, m);

    return 0;
}