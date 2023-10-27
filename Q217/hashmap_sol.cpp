
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, bool> numbers;
        for(int& num : nums){
            if (numbers[num] == true){
               return true;
            }
            numbers[num] = true;
        }
        return false;
    }
};