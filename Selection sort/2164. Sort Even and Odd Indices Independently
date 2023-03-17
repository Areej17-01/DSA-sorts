class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) {
                        if (nums[j] < nums[i]) {
                            int temp = nums[i];
                            nums[i] = nums[j];
                            nums[j] = temp;
                        }
                    }

                }
                if (i % 2 != 0) {
                    if (j % 2 != 0) {
                        if (nums[j] > nums[i]) {
                            int temp = nums[i];
                            nums[i] = nums[j];
                            nums[j] = temp;
                        }
                    }

                }

            }

        }
        return(nums);
    }
};
