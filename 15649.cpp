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
#define pd1(a) printf("%d ", a)
#define pnd1(a) printf("%d\n", a)
#define pd2(a, b) printf("%d %d", a, b)
#define pnd2(a, b) printf("%d %d\n", a, b)
#define st(v) sort(v.begin(), v.end())
#define pr pair
#define pb push_back
#define f(i, a, b) for (i = a; i < b; i++)

#define MAX 8

int n, m;
bool arr[MAX + 1];

void init()
{
    sd2(n, m);
}

void solve(int size, vector<int> &v)
{
    if (size == m)
    {
        for (int n : v)
        {
            pd1(n);
        }
        printf("\n");
        return;
    }

    int i;
    f(i, 1, n + 1)
    {
        if (arr[i])
            continue;
        arr[i] = true;
        v.push_back(i);
        solve(size + 1, v);
        v.pop_back();
        arr[i] = false;
    }
}

int main(void)
{
    init();
    vector<int> v;
    solve(0, v);
    return 0;
}