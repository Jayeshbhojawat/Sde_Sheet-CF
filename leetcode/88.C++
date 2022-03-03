class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  
        vector< int >nums(m+n);
        int i=0;
        int j=0;
        while(i==m)
        {
            if(nums1[i]<nums2[j]){
             i++;
            nums.push_back(nums1[i]);}
            else{
                j++;
            nums.push_back(nums2[j]);}
        }
        if(n-m>0) 
        {
            for(int i=m;i<n-m;i++)
                nums.push_back(nums2[i]);
        }
        for(int i=0;i<m+n;i++)
        {
        nums1[i].push_back(nums[i]);
        }
 
    }
};