// https://leetcode.com/problems/merge-sorted-array

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

        int mergedarray[m+n];
        int i=0,j=0,k=0;

        while(i<m && j<n){
            if(nums1[i]<nums2[j] ) {
                mergedarray[k++]=nums1[i++];
            }
            else {
                mergedarray[k++]=nums2[j++];

            }
        }

        while(i<m) {
            mergedarray[k++] = nums1[i++];
        }
        while(j<n) {
            mergedarray[k++] = nums2[j++];

        }

         for (i = 0; i < m + n; i++) {
        nums1[i] = mergedarray[i];
    }
}
