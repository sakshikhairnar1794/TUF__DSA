#include <iostream>
#include <vector>
using namespace std;

int singleNumberOptimal(vector<int>& nums) {

    int ans = 0;

    for (int bit = 0; bit < 32; bit++) {

        int count = 0;

        for (int num : nums) {

            if (num & (1 << bit))
                count++;
        }

        if (count % 3 != 0)
            ans |= (1 << bit);
    }

    return ans;
}

int main() {

    vector<int> nums = {2,2,3,2};

    cout << "Single Number = "
         << singleNumberOptimal(nums);

    return 0;
}