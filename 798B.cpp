#include<bits/stdc++.h>
using namespace std;
int func(string a,string b)
{
	string c=b;
	int ans=0;
	while(a!=c)
	{
		c= b.substr(1,b.length()-1);
		c = c + b[0];
		b=c;
		//cout << c <<endl;
		ans++;
		if(ans > a.length())
		{
			return -1;
		}
	}
	return ans;
}
bool isSubSequence(string str1, string str2, int m, int n)
{
    // Base Cases
    if (m == 0) return true;
    if (n == 0) return false;
 
    // If last characters of two strings are matching
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
 
    // If last characters are not matching
    return isSubSequence(str1, str2, m, n-1);
}
int main()
{
	int n;
	cin >> n;
	vector<string>v;
	for(int i=0;i<n;i++)
	{
		string a;
		cin >> a;
		v.push_back(a);
	}
	int ans = INT_MAX;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if(v[i].length()!=v[j].length())
			{
				cout << "-1" <<endl;
				return 0;
			}
			if(func(v[i],v[j])==-1)
			{
				cout << "-1" <<endl;
				return 0;
			}
			sum =sum+func(v[i],v[j]);
		}
		if(ans > sum)
		{
			ans =sum;
		}
	}
	cout <<ans <<endl;
	return 0;
}