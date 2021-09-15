class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1){
            return nums;
           }
        vector<int> v;
        deque<int> dq;
       
        int i=0,j=0;
        while(j<nums.size()){
            if(!dq.empty() && dq.back()<nums[j] ){
                while(!dq.empty() && dq.back()<nums[j] ){
                    dq.pop_back();
                }
                dq.push_back(nums[j]);
               }
            else {dq.push_back(nums[j]); }
            if(j-i+1==k){
                if(dq.front()==nums[i]){
                    v.push_back(dq.front());
                    dq.pop_front();
                    }
                else{ v.push_back(dq.front());}
                i++;
               
            }
            j++;
        }
        return v;
    }
};
