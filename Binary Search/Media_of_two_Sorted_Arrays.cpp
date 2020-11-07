class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> res; 
        int n1 = nums1.size(), n2 = nums2.size();
        while (i < n1 && j < n2) 
        { 
            if (nums1[i] <= nums2[j])  
            { 
                res.push_back(nums1[i]); 
                i++; 
            } 
            else 
            { 
                res.push_back(nums2[j]); 
                j++; 
            } 
        } 
        while (i < n1)  
        { 
            res.push_back(nums1[i]); 
            i++; 
        }   
        while (j < n2) 
        { 
            res.push_back(nums2[j]); 
            j++; 
        }
        if(res.size() % 2 != 0)
            return res[res.size()/2];
        else
            return double((res[res.size()/2 - 1] + res[res.size()/2]) / 2.00000);
    }
};