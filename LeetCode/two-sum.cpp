class Solution {
public:
    int i, idx=0;
    unordered_map<int,int> answer;
    unordered_map<int,int>::iterator itr;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(i=0; i<nums.size(); i++){
            if(answer.find(target-nums[i]) == answer.end()){
                answer.insert({nums[i],idx});
                idx++;
            }else{
                itr = answer.find(target-nums[i]);
                return {i, itr->second};
            }
        }
        return {};
    }
};