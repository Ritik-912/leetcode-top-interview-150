class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // no extra memory
        int i = 0, j = 0;
        for(; i < (m + n) && j < n; i++){
            if(nums1[i] > nums2[j]){
                // shift the elements in nums1 to make space at i
                for(int k = m + j; k > i; k--)
                    nums1[k] = nums1[k - 1];
                // insert the element from nums2 at index i
                nums1[i] = nums2[j];
                ++j; // increase nums2 index j
            }
        }
        // placing the remaining elements in nums2 as it nums1
        i = m + j;
        while(j<n){nums1[i] = nums2[j]; i++; j++;}
    }
};
