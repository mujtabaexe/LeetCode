class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int divisions = 0;
        int evenNumbersCount = 0;
        
        for(int i = 0 ; i < size(nums) ; i++){

            int number = nums[i];
            
            while(number > 0){

                number = int(number/10);
                divisions++;

            }

            if(divisions % 2 == 0){
                evenNumbersCount++;
            }
                divisions = 0;

        }

        return evenNumbersCount;

    }
};