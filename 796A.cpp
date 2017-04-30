#include <bits/stdc++.h>
using namespace std;
#define llg long long int
int main()
{
	llg n,m,p;
	cin >> n >> m >>p;
	vector<llg > v;
	for(int i=0;i<n;i++)
	{
		llg x;
		cin >> x;
		v.push_back(x);
	}
	llg a,b;
	m--;
	a = m-1;
	b= m+1;
	llg ans=INT_MAX,ans1=INT_MAX;
	while(b < n)
	{
		if(v[b] <= p && v[b] !=0 )
		{
			ans = (b-m)*10;
			break;
		}
		b++;
	}
	while(a>=0)
	{
		if(v[a] <= p && v[a]!=0)
		{
			ans1 = (m-a)*10;
			break;
		}
		a--;
	}
	if(ans1 > ans)
	{
		cout <<ans <<endl;
	}
	else
		cout << ans1 <<endl;
	return 0;
}