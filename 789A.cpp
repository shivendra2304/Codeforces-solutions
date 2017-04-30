#include<bits/stdc++.h>
using namespace std;
#define llg long long int
int main()
{
	llg n,k;
	cin >> n >> k;
	vector<llg> v;
	llg sum=0;
	for(llg i=0;i<n;i++)
	{
		llg p;
		cin >> p;
		v.push_back(p);
		if(p%k==0)
		{
			sum += p/k;
		}
		else
			sum += p/k +1;
	}
	//cout <<sum <<endl;
	if(sum%2==0)
	{
		cout << sum/2 <<endl;
	}
	else
		cout << sum/2 +1 <<endl;
	return 0;
}