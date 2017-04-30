#include<bits/stdc++.h>
using namespace std;
int main()
{
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int f1 = b;
		int f2 = d;
		bool flag=false;
		while(1)
		{
			if(f1==f2)
			{
				cout << f1 <<endl;
				return 0;
			}
			if(f1 > f2 && a > c)
			{
				cout << "-1" <<endl;
				return 0;
			}
			if(f2 > f1 && c > a)
			{
				cout << "-1" <<endl;
				return 0;
			}
			while(f1>f2)
			{
				f2 = f2 + c;
			}
			while(f2 > f1)
			{
				f1 = f1 + a;
			}
		}
		cout << f1 << endl;
		return 0;
}