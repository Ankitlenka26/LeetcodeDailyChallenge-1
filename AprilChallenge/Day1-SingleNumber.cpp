/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
*/

#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        This solution is predefined on the fact that 
        every element which is equal to each other will have an XOR = 0 
        so if we take the XOR of all the elements all the elements will pair up and 
        the Xor value will be the single integer value which is remaining. 
        */
        int x =0 ;                       
        for(int i=0 ;i<nums.size(); i++){
            x ^= nums[i]; 
        }
        
        return x;
    }
};