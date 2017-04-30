#include<bits/stdc++.h>
using namespace std;
#define llg long long int 
int main()
{
	llg n,m;
	//cin >> n >> m;
	cin >> n;
	llg min = INT_MAX;
	vector<pair<llg,llg> > v1,v2;
	for(llg i=0;i<n;i++)
	{
		llg p,q;
		cin >> p >> q;
		v1.push_back({p,q});
	//	cout <<p << q <<endl;
		if(min > q)
		{
			min = q;
		}
	}
	cin >> m;
//	cout << min <<endl;
	llg max = 0;
	for(llg i=0;i<m;i++)
	{
		llg p,q;
		cin >> p >> q;
		llg c = p-min;
		//	cout <<p << q <<endl;
		if(c > max)
		{
			max = c;
		}
		v2.push_back({p,q});
	}
	//cout << v2.size() <<endl;
//	cout << max <<endl;
	llg min1 = INT_MAX;
	for(llg i=0;i<m;i++)
	{
		
	//	v1.push_back({p,q});
	//	cout <<p << q <<endl;
		if(min > v2[i].second)
		{
			min1 = v2[i].second;
		}
	}
//	cin >> m;
//	cout << min <<endl;
	 llg  max1 = 0;
	for(llg i=0;i<n;i++)
	{
	//	llg p,q;
		
		llg c = v1[i].first-min1;
		//	cout <<p << q <<endl;
		if(c > max1)
		{
			max1 = c;
		}
		//v2.push_back({p,q});
	}
	if(max > max1)
	{
		cout << max <<endl;
	}
	else
	cout << max1 <<endl;
	return 0;
}