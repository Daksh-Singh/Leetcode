class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size()==0)
		    return -1;
        int l = 0;
	    int h = nums.size() - 1;
        int mid;

	    while (l + 1 < h) 
        {
		    mid = l + (h - l) / 2;
		    if (nums[mid - 1] > nums[mid + 1]) 
			    h = mid;
		    else    
    			l = mid;
	    }

	    if (nums[l] > nums[h])
		    return l;

	return h;
    }
};