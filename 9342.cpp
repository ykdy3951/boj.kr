#include <bits/stdc++.h>

using namespace std;

#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long
#define INF 987654321
#define sc1(a) scanf("%c", &a)
#define ss1(a) scanf("%s", s)
#define sd1(a) scanf("%d", &a)
#define sd2(a, b) scanf("%d %d", &a, &b)
#define sld1(a) scanf("%ld", &a)
#define sld2(a, b) scanf("%ld %ld", &a, &b)
#define slld1(a) scanf("%lld", &a)
#define slld2(a, b) scanf("%lld %lld", &a, &b)
#define pd1(a) printf("%d", a)
#define pnd1(a) printf("%d\n", a)
#define pd2(a, b) printf("%d %d", a, b)
#define pnd2(a, b) printf("%d %d\n", a, b)
#define st(v) sort(v.begin(), v.end())
#define pr pair
#define pb push_back
#define f(i, a, b) for (i = a; i < b; i++)

vector<string> v;
int n;

void init()
{
    cin >> n;
    int i;
    f(i, 0, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
}

void solve()
{
    regex re(R"([A-F]?A+F+C+[A-F]?)");

    int i;
    for (string s : v)
    {
        cout << (regex_match(s, re) ? "Infected!" : "Good") << endl;
    }
}

int main(void)
{
    fio;
    init();
    solve();
    return 0;
}