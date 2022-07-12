class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int res=start;
        for(int i=1;i<n;i++){
            start+=2;
            res=res^(start);            
        }
        return res;
    }
};