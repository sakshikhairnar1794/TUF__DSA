#include<bits/stdc++.h>
using namespace std;

vector<int> RotateMatrix(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;


    // Right
while(top <= bottom && left<=right){
    for(int i = left; i<=right; i++){
        ans.push_back(arr[top][i]);
    }
    top++;

    for(int i = top; i<=bottom; i++){
        ans.push_back(arr[i][right]);
    }
    right--;

    for(int i=right; i>=left; i--){
        ans.push_back(arr[bottom][i]);
    }
    bottom--;

    for(int i=bottom; i>= top; i--){
        ans.push_back(arr[i][left]);
    }
    left++;
}
return ans;

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

    RotateMatrix(arr);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}