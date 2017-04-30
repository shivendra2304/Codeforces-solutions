#include<bits/stdc++.h>
using namespace std;
#define llg long long int
int main()
{
	
	llg n,m;
	cin >> n >> m;
	cin >> n;
	llg min = INT_MAX;
	vector<pair<llg,llg> > v1,v2;
	for(llg i=0;i<n;i++)
	{
		llg p,q;
		cin >> p >> q;
		v1.push_back({p,q});
		if(min > q)
		{
			min = q;
		}
	}
	cout << min <<endl;
	llg max = 0;
	for(llg i=0;i<m;i++)
	{
		llg p,q;
		cin >> p >> q;
		llg c = min-p;
		if(c > max)
		{
			max = c;
		}
		v2.push_back({p,q});
	}
	cout << max <<endl;
	return 0;
}
