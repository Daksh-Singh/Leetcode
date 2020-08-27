class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        list<int> l;
        for(int i=0;i<min(k,n);i++){
            l.push_back(arr[i]);
        }
        
        for(int i=k;i<n;i++){
            if(abs(x-arr[i])<abs(x-l.front())){
                l.pop_front();
                l.push_back(arr[i]);
            }
        
        }
        vector<int> res(l.begin(),l.end());
        return res;
        
    }
};