class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int ite=0;
        int k=arr2.size();
        for(int i=0;i<k;i++){
            for (int j=ite;j<n;j++){
                if (arr1[j]==arr2[i]){
                   int temp =arr1[ite];
                   arr1[ite]=arr1[j];
                   arr1[j]=temp;
                    ite++;
                }
            }
        }
        
       for (int i = ite; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr1[j] < arr1[i]) {
				int temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}}
        return(arr1);
    }
};

//better with space complexity
