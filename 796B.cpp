#include<bits/stdc++.h>
using namespace std;
#define llg long long int
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int n,m,k,i;
	cin>>n>>m>>k;
	bool holes[n+1];
	int list[n+1];
	for(i=0;i<n+1;i++){
		holes[i]=false;
		list[i]=0;
	}
	list[1]=1;
	for(i=0;i<m;i++){
		int p;cin>>p;
		holes[p]=true;
	}
	bool flag=false;
	int ans=1;
	if(holes[1])
	{
		cout << 1 << endl;
	}
	else
	{
	for(i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		if(holes[1])
		{
			ans=1;
			flag=true;
		}
		swap(&list[a],&list[b]);
		if(holes[b] && list[b]==1 && !flag){
				ans=b;
			flag=true;
		}
	}
	if(!flag){
		for(int i=1;i<n+1;i++){
			if(list[i]==1){
				cout<<i<<endl;
				break;
			}
		}
	}
	else{
		cout<<ans<<endl;
	}
}
	return 0;
}