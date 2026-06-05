#include<bits/stdc++.h>
using namespace std;

vector<int> LeadersInArray(vector<int> &arr){
    vector<int> ans;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        bool leader = true;
        for(int j = i+1; j<n; j++){
            if(arr[i]<= arr[j]){
                leader = false;
                break;
            }
        }
        if(leader == true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    arr = LeadersInArray(arr);

    for(int x:arr){
        cout<<x<<" ";
    }
}