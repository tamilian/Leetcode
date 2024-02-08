class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> duplicates;

        // iterate through nums
        for (int num : nums){

            duplicates[num]++;

            if (duplicates[num] > 1){
                
                // therer are duplicates
                return true;
            }

        }

        // if no duplicates are found, return false
        return false;
        
    }
};