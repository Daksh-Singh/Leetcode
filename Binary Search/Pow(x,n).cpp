class Solution {
public:
    double myPow(double x, int n) {
    double ans=1.0;
    long int num=n;
    if(n<0)
        num=num*-1;
    while(num>0)
    {
        if(num%2==1)
        {
            ans=ans*x;
            num--;
        }
        else
        {
            x=x*x;
            num=num/2;
        }
    }
    if(n<0)
        ans=1.0/ans;
    return ans;
}
};