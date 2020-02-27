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
ll n,k,a[maxn];
queue<ll>q;
int main()
{
    cin>>n>>k;
    for(rg i=1;i<=n;i++)
    {
        ll x=read();
        a[i]=x;
        q.push(x);
    }
    k=k%n;

    k=n-k;
    for(rg i=1;i<=k;i++)
    {
        ll k=q.front();
        q.pop();
        q.push(k);
    }
    while(!q.empty())
    {
        if(q.size()!=1)
        cout<<q.front()<<" ";
        else cout<<q.front();
        q.pop();
    }
    return 0;
}
