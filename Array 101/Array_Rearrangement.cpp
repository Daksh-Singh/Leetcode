#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	vector<int> a, b;
	int t, n, x, y, flag;
	cin>>t;
	for(int i = 0;i < t;i++)
	{
		flag = 0;
		cin>>n>>x;
		for(int j = 0;j < n;j++)
		{
			cin>>y;
			a.push_back(y);	
		}	
		for(int j = 0;j < n;j++)
		{
			cin>>y;
			b.push_back(y);	
		}
		sort(b.begin(), b.end(), greater<int>()); 
		sort(a.begin(), a.end());
		for(int j = 0;j < n;j++)
		{
			if((a[j]+b[j])>x)
				flag++;
		}
		if(flag > 0)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}
