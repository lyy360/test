class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX; //设置的为最大值
        int sum = 0;           //子序列的和
        int sublength = 0;    //子序列的长度
        for (int i = 0; i < nums.size(); i++) {//begin
            sum = 0;
            for (int j = i; j < nums.size(); j++) {//end
                sum += nums[j];
                if(sum >= target) {
                    sublength = j - i + 1;//找到的子序列的长度
                    if(result < sublength) {//比较子序列的长度sublength与result的值的大小
                        result = result;
                    }else{
                        result = sublength;
                    }
                    break;//找到一个就需要跳出循环。
                }
            }
        }
        if(result == INT32_MAX) return 0;
        else return result;
    }
};
