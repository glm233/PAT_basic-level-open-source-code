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
ll a,b;
int main()
{
    cin>>a>>b;
    double m=round((double)((b-a)*1.0/100));
    ll k=m;
    ll c=k/3600,d=(k%3600)/60,e=(k%3600-60*d)%60;
    cout<<setw(2)<<setfill('0')<<c<<":"<<setw(2)<<setfill('0')<<d<<":"<<setw(2)<<setfill('0')<<e<<endl;
   	return 0;
}
