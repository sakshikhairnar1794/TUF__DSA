#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> RotateMatrix(vector<vector<int>> &arr){
    int n = arr.size();

    vector<vector<int>> ans(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[j][n - 1 - i] = arr[i][j];
        }
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    arr = RotateMatrix(arr);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}