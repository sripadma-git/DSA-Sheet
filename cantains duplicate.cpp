Problem Statement: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example:

Example 1:
Input: nums = [1, 2, 3, 1]
Output: true.
Explanation: 1 appeared two times in the input array.

Example 2: 
Input: nums = [1, 2, 3, 4]
Output: false
Explanation: input array does not contain any duplicate number. 
Solution:
Disclaimer: Don't jump directly to the solution, try it out yourself first.

Approach 1: we can easily find any duplicate in the array just by using two nested loops. The first loop will pick integers one by one from the array and the second nested loop will check if there exists any duplicate or not.

Code:

#include<bits/stdc++.h>
using namespace std;
    
bool containsDuplicate(vector<int> nums) {
 
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                return true;
            }
        }
    }

    return false;
}
    
int main () {
	    
    vector<int> nums {1, 2, 3, 1};
	    
    bool res = containsDuplicate(nums);
	    
    // printing the result
    if(res== 1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
