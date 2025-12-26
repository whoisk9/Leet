#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> op;
        
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                if((nums[i]+nums[j])==target)
                   { op.push_back(i);
                    op.push_back(j);
                    return op;}
            }
        }
        return op;
    }   
   
};