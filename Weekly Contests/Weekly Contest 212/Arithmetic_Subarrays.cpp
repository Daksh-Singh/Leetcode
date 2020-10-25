class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
       int x, y;
       vector<bool> res;
       for(int i = 0; i < l.size(); i++)
       {
          x = l[i];
          y = r[i];
          auto start = nums.begin() + x; 
          auto end = nums.begin() + y + 1;
          vector<int> result(y - x + 1); 
          copy(start, end, result.begin());
          sort(result.begin(), result.end());
          if(result.size() > 1)
          {
              int max = result[1] - result[0];
              int flag = 0;
              for(int i = 2; i < result.size(); i++)
              {
                  if((result[i] - result [i-1]) == max)
                      flag++;
              }
              if(flag == (result.size()-2))
                  res.push_back(true);
              else
                  res.push_back(false);
           }
           else
           {
               res.push_back(true);
           }
       }    
    return res;
    }
};