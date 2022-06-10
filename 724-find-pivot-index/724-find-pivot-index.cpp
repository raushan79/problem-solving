class Solution {
public:
    int pivotIndex(vector<int>& nums) {
           int sums = 0, left = 0, i= 0,n = nums.size();
        for(auto it:nums) sums+=it;
        for(auto it:nums) {
            if(left == sums-left-it) break;
            left+=it;
            ++i;
        }
        return (i==n?-1:i);
        return -1;
    }
};