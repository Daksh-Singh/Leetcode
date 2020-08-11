class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int last=-1;
        int temp=0;
        for(int i=arr.size()-1;i>=0;i--)
        {
            temp=arr[i];
            arr[i]=last;
            if(last<temp)
                last=temp;
        }
        return arr;
    }
};