#include<bits/stdc++.h>
using namespace std;

void RortateMatrix(vector<vector<int>> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
    
}

int main(){
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    RortateMatrix(arr);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}