#include<bits/stdc++.h>
using namespace std;
#define llg long long int
int main()
{
	string s;
	cin >> s;
	llg c=0;
	if(s.length()==0 || s.length() ==1)
	{
		cout << "YES" <<endl;
		return 0;
	}
	for(llg i=0;i<s.length()/2;i++)
	{
		if(s[i] != s[s.length()-1-i])
		{
			c++;
			if(c==2)
			{
				cout << "NO" <<endl;
				return 0;
			}
		}
	}
	if(c==0 && s.length()%2==0)
	{
		cout << "NO" <<endl;
		return 0;
	}
	cout << "YES" <<endl;
	return 0;
}