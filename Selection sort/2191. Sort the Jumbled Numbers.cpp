since selection sort is worst with time complexity and i am not using mapping or any other type casting techniques as they donot fall into this topic yet this exceeds
the time limit on large input but it works fine.

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n);
	for (int i = 0; i < n; i++) {
		int no = 0;
		bool f=false;
		int a = 1;
		int store = 0;
		int store2 = 0;
		int k = nums[i];
		while (k > 0) {
			f=true;
			int m = k % 10;
			k = k / 10;
			no = mapping[m] * a;
			a = a * 10;
			store = store2 + no;
			store2 = store;//1
			store = 0;
			}
			if (f != true){
				res[i]=mapping[k];
			}
			else{
			res[i]=store2; 
		     	}}

        for (int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if (res[j]<res[i]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    int kk = res[i];
                    res[i] = res[j];
                    res[j] = kk;

                }
            }
        }
        return(nums);
    }
};
