class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int a=nums.size();
        int flag =0;
        for (int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(nums[j]-nums[i]==diff){
                    for(int k=j+1;k<a;k++){
                        if(nums[k]-nums[j]==diff){
                            flag++;
                        }
                    }
                }
            }
        }
        return flag;
    }
};
