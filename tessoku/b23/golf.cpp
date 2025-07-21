#include <bits/stdc++.h>
#define F(i,n) for(int i=0;i<n;i++)
using namespace std;double d[1<<16][16];int n,x[16],y[16];main(){cin>>n;F(i,n)cin>>x[i]>>y[i];fill(d[0],d[1<<16],1e9);d[0][0]=0;F(i,1<<n)F(j,n)if(d[i][j]!=1e9)F(k,n)if(!((i>>k)&1))d[i|(1<<k)][k]=min(d[i|(1<<k)][k],d[i][j]+sqrt(pow(x[j]-x[k],2)+pow(y[j]-y[k],2)));cout<<d[(1<<n)-1][0];}
