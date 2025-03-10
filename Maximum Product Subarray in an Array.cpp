Approach:
We can optimize the brute force by making 3 nested iterations to 2 nested iterations.

Following are the steps for the approach:
Run a loop to find the start of the subarrays.
Run another nested loop
Multiply each element and store the maximum value of all the subarray.

// code

#include<bits/stdc++.h>
using namespace std;
int maxProductSubArray(vector<int>& nums) {
    int result = nums[0];
    for(int i=0;i<nums.size()-1;i++) {
        int p = nums[i];
        for(int j=i+1;j<nums.size();j++) {
           result = max(result,p);
           p *= nums[j];
        }
        result = max(result,p);//manages (n-1)th term 
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}
 
