class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n =arr.size();
        int ret=0;
        bool k = true;
        for(int i=0;i<n;i++){
            int counter=0;
            for (int j=i;j<n;j++){
                if(arr[i] != arr[j]){
                    float val1=counter;
                    float val2=n;
                    float percent=(val1/val2)*100;
                    if (percent>25){ 
                        k=false;}
                    break; }
                else{
                 counter++ ;}
            }
            if (k==false){
                ret=arr[i];
                break;
            }
            else{
            ret=arr[i];
            }
        }
       
     
        return(ret);
    }
};
