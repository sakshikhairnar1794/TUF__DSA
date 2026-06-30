#include<bits/stdc++.h>
using namespace std;

int sumByD(vector<int> &arr, int div){
    int sum = 0;

    for(int i = 0; i < arr.size(); i++){
        sum += ceil((double)arr[i] / div);
    }

    return sum;
}

int smallestDivisor(vector<int> &arr, int limit){

    if(arr.size() > limit){
        return -1;
    }

    int maxi = *max_element(arr.begin(), arr.end());

    for(int div = 1; div <= maxi; div++){
        if(sumByD(arr, div) <= limit){
            return div;
        }
    }--------------------------------------------------

    return -1;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int limit;
    cin >> limit;

    cout << smallestDivisor(arr, limit);

    return 0;
}