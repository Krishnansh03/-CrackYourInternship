class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int t1 = m-1;
        int t2 = n-1;
        int c = m+n-1;

        while(t2>=0 && t1>=0){

            if(nums1[t1] > nums2[t2]){
                nums1[c] = nums1[t1];
                t1--;   c--;
            }
            else{
                nums1[c] = nums2[t2];
                t2--;   c--;
            }
            
        }

        while(t2>=0){
            nums1[c] = nums2[t2];
            c--;    t2--;
        }
        
    }
};