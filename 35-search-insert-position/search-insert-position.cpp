
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (target <= nums[i]) {
                return i; // Insert before or at nums[i]
            }
        }
        return nums.size(); // If target is greater than all elements
    }
};


// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
        
//         int index = -1;
        
//         if(nums.size() >=1){

//         for(int i = 0; i<= nums.size(); i++ ){

//             index++;
//             if(target <= nums[i]) return index;


//         }

//             index++;
//             return index;

//         }
// };