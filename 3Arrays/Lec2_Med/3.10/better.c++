#include<bits/stdc++.h>
using namespace std;

int longestSubsequence( vector<int> &arr){
    int n = arr.size();
    if(n==0){
        return 0;
    }
    sort(arr.begin(), arr.end());
    int longest = 1;
    int currcount = 0;
    int lastSmaller = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]-1 == lastSmaller){
            currcount++;
            lastSmaller = arr[i];
        }
        else if(lastSmaller != arr[i]){
            currcount = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, currcount);
    }
    return longest;
}
int main(){
    int n ;
    cin>>n;
    int ans;
    vector<int> arr(n);
    for(int i=0; i<n;  i++){
        cin>>arr[i];
    }
    ans = longestSubsequence(arr);
    cout<<ans<<endl;
}