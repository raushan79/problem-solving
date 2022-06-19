class Solution {
    bool digitSum(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num=num/10;
        }
        return (sum%2==0);
    }
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(digitSum(i)){
                count++;
            }
        }
        return count;
        
    }
};