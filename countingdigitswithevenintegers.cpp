class Solution {
public:
    int countEven(int num) {
        int x=num;
        int sum=0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        if(num%2==0 && sum%2==0)return num/2;
        return (num-1)/2;
    }
    
};
