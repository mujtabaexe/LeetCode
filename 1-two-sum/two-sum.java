class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0 ; i<nums.length ; i++){
            int a = nums[i];
            for (int j = i+1 ; j< nums.length ; j++){
                int b = nums[j];
                int result = a + b;
                if(result==target){
                    return new int[]{i,j} ;
                }
            }

        }
    return new int[]{} ;

    }
}