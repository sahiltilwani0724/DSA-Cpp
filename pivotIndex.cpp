--leetCode 724--

  class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        
        int pivot=0;
        while(pivot<n){
             int left=pivot-1;
             int right=pivot+1;
             int sum1=0;
             int sum2=0;
            for(int i=0;i<=left;i++){
                sum1+=nums[i];
            }
            for(int i=right;i<n;i++){
                sum2+=nums[i];
            }

            if(sum1==sum2){
                return pivot;
            }

            pivot++;
            
        }

        return -1;
       
        
        
    }
};
