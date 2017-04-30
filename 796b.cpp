#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	bool hole[n+1] = {0};
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		hole[x]=true;
	}
	if(hole[1]){
		cout<<"1"<<endl;
	}
	else{
		bool flag=false,flag2=false;
		int axis[n+1];
		for(int i=0;i<n+1;i++){
			axis[i]=0;
		}
		axis[1]=1;
		int ans;
		for(int i=0;i<k;i++){
			int u,v;
			cin>>u>>v;
			swap(&axis[u],&axis[v]);
			if(axis[v]==1 && hole[v] && !flag2){
				//cout<<v<<endl;
				ans=v;
				flag=true;
				flag2=true;
				//break;
			}
		}
		if(!flag){
			for(int i=1;i<n+1;i++){
				if(axis[i]==1){
					cout<<i<<endl;
				}
			}
		}
		else{
			cout<<ans<<endl;
		}
	}
	return 0;
}