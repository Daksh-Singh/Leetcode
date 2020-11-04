class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size() + nums2.size());
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());  
        vector<int>::iterator it;
        it = std::set_intersection (nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), res.begin());
        res.resize(it-res.begin());
        return res;
    }
};