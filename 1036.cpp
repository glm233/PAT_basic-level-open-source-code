// luogu-judger-enable-o2
#include<bits/stdc++.h>
#include<unordered_set>
#define rg register ll
#define inf 2147483647
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define ll long long
#define maxn 300005
#define lb(x) (x&(-x))
const double eps = 1e-6;
using namespace std;
inline ll read()
{
	char ch = getchar(); ll s = 0, w = 1;
	while (ch < 48 || ch>57) { if (ch == '-')w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) { s = (s << 1) + (s << 3) + (ch ^ 48); ch = getchar(); }
	return s * w;
}
inline void write(ll x)
{
	if (x < 0)putchar('-'), x = -x;
	if (x > 9)write(x / 10);
	putchar(x % 10 + 48);
}
ll n;
char s;
char p[25][25];
int main()
{
    cin>>n>>s;
    rg tep;
    double k=round(n*1.0/2);
    tep=k;
    for(rg i=1;i<=tep;i++)
    {
        if(i==1||i==tep)
        {
            for(rg j=1;j<=n;j++)p[i][j]=s;
        }
        else
        {
            for(rg j=2;j<n;j++)p[i][j]=' ';
            p[i][1]=p[i][n]=s;
        }
    }
    for(rg i=1;i<=tep;i++)
    {
        for(rg j=1;j<=n;j++)
        {
            cout<<p[i][j];
        }
        cout<<endl;
    }
   	return 0;
}
