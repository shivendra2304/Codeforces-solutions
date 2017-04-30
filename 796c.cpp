#include<bits/stdc++.h>
using namespace std;
#define llg long long int
int main()
{
	llg n;
	cin >> n;
	vector<pair<llg,llg> > v;
	for(llg i=0;i<n;i++)
	{
		llg p;
		cin >> p;
		v.push_back(make_pair(p,i));
	}
	llg arr[n][n];
	for(llg i=0;i<n;i++)
	{
		for(llg j=0;j<n;j++)
		{
			arr[i][j] = 0;
		}
	}
	for(llg i=0;i<n-1;i++)
	{
		int a,b;
		cin >> a>>b;
		a--;
		b--;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	map<llg,bool> map;
	for(llg i=0;i<n;i++)
	{
		map[i] =false;
	}
	sort(v.begin(),v.end());
	llg k= v.size()-1;
	llg ans = -INT_MAX;
	while(k>=0)
	{
		if(map[k] ==1)
		{
			k--;
		}
		else{
			map[k] = 1;
			if(v[k].first>ans)
			{
				ans = v[k].first;
			}
			for(llg i=0;i<n;i++)
			{
				if(arr[v[k].second][i]==1)
				{
					for(int x=0;x<n;x++)
					{
						if(v[x].second == i)
						{
							v[x].first++;
						}
					}
				}
			}
		}
	}
	cout << ans <<endl;
}