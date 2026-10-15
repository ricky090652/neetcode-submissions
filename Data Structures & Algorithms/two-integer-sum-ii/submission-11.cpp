class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        while(numbers[right] + numbers[left] != target){
            // while(numbers[right] >= target){
            //     --right;
            // }
            if(numbers[right] + numbers[left] > target){
                --right;
            }
            else if(numbers[right] + numbers[left] < target){
                ++left;
            }  
        }
        left += 1;
        right += 1;
        return {min(left,right),max(left,right)};

    }
};
