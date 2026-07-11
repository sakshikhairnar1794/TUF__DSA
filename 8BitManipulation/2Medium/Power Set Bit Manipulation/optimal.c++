#include <iostream>
#include <vector>
using namespace std;

void powerSet(vector<int>& arr) {

    int n = arr.size();

    // Total subsets = 2^n
    int total = 1 << n;

    for (int i = 0; i < total; i++) {

        cout << "{ ";

        for (int j = 0; j < n; j++) {

            // Check if jth bit is set
            if (i & (1 << j))
                cout << arr[j] << " ";
        }

        cout << "}" << endl;
    }
}

int main() {

    vector<int> arr = {1,2,3};

    cout << "Power Set\n\n";

    powerSet(arr);

    return 0;
}