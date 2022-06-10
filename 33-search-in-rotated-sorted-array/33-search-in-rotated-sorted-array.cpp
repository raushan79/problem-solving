class Solution {
public:
    int search(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=n-1;
        
        while(i<=j){
            int mid =(i+j)/2;
            if(nums[mid]==k)
                return mid;
            else if(nums[i]<=nums[mid]){
                if(k>= nums[i] && k<=nums[mid])
                    j=mid-1;
                else
                    i=mid+1;
            }
            else if(nums[mid]<=nums[j]){
                if(k>= nums[mid] && k<=nums[j])
                    i=mid+1;
                else
                    j=mid-1;
            }
        }
        return -1;
    }
       
        
       
           
         
};