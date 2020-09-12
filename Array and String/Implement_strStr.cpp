class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_size = haystack.size(),needle_size = needle.size();
        if(needle_size == 0){
            return 0;
        }
        for(int i=0;i<haystack_size-needle_size+1;i++){
            if(haystack.compare(i,needle_size,needle) == 0){
                return i;
            }
        }
        return -1;
    }
};