#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to get the single 
    number in the given array */
    vector<int> singleNumber(vector<int>& nums){
        
        // Array to store the answer
        vector<int> ans;
        
        /* Map to store the elements 
        and their frequencies */
        unordered_map <int, int> mpp;
        
        // Iterate on the array
        for(int i=0; i < nums.size(); i++) {
            mpp[nums[i]]++; // Update the map
        }
        
        // Iterate on the map
        for(auto it : mpp) {
            // If frequency is 1
            if(it.second == 1) {
                /* Add the element to
                the result array */
                ans.push_back(it.first);
            }
        }   
        
        // Return the result after sorting
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 2};
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to get the single 
    number in the given array */
    vector<int> ans = sol.singleNumber(nums);
    
    cout << "The single numbers in given array are: " << ans[0] << " and " << ans[1];
    
    return 0;
}