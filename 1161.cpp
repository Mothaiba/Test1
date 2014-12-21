//This is getting accepted!
#include<bits/stdc++.h>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FOR2(i,a,b) for(i=a;i<b;i++)
#define IFOR(i,a,b) for(i=a;i>=b;i--)
#define IFOR2(i,a,b) for(i=a;i>b;i--)
#define IND(a) scanf("%d",&a)
#define IND2(a,b) scanf("%d%d",&a,&b)
#define IND3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define IND4(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)
#define INF(a) scanf("%lf",&a)
#define INS(s) scanf("%s",&s)
#define OUTD(a) printf("%d ",a)
#define OUTD2(a,b) printf("%d %d ",a,b)
#define OUTD3(a,b,c) printf("%d %d %d",a,b,c)
#define OUTL(a) printf("%I64d ",a)
#define OUTF(a) printf("%.12lf ",a);
#define pb push_back
#define mp make_pair
#define mid ((l+r)>>1)
#define PI acos(-1)
#define ll long long
using namespace std;
const double eps=1e-8;
const int nm=10005;
int n,k,m,t;
ll res[nm];
int a[nm];
ll C[nm];
int sU[nm];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    #endif
    int i,j,x,y,z,w;
	FOR(i,4,10000){
		C[i]=1;
		FOR(j,i-3,i)
			C[i]*=j;
		C[i]/=24;
	}
	IND(t);
	FOR(w,1,t){
		IND(n);
		memset(a,0,sizeof(a));
		FOR(i,1,n) {
			IND(x);
			z=sqrt(x)+eps;
			FOR2(j,1,z){
				if(x%j==0) a[j]++,a[x/j]++;
			}
			if(x%z==0){
				a[z]++;
				if(z*z!=x) a[x/z]++;
			}
		}
		IFOR(i,10000,1){
			res[i]=C[a[i]];
			for(j=i<<1;j<=10000;j+=i)
				res[i]-=res[j];
		}
		printf("Case %d: %lld\n",w,res[1]);
	}

	return 0;
}


