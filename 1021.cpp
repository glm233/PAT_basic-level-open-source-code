<<<<<<< HEAD
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
string s;
ll a[10];
int main()
{
    cin>>s;
    for(rg i=0;s[i];i++)
    {
        a[s[i]-48]++;
    }
    for(rg i=0;i<10;i++)
    {
        if(a[i])
        {
            cout<<i<<":"<<a[i]<<endl;
        }
    }
    
   	return 0;
}
=======
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
string s;
ll a[10];
int main()
{
    cin>>s;
    for(rg i=0;s[i];i++)
    {
        a[s[i]-48]++;
    }
    for(rg i=0;i<10;i++)
    {
        if(a[i])
        {
            cout<<i<<":"<<a[i]<<endl;
        }
    }
    
   	return 0;
}
>>>>>>> a45269a6f9ce61abed19a3dbc4d5ff91c7b4ed44
