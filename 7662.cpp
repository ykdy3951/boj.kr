#include <bits/stdc++.h>

using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long
#define INF 987654321
#define sc1(a) scanf("%c", &a)
#define ss1(a) scanf("%s", s)
#define sd1(a) scanf("%d", &a)
#define sd2(a, b) scanf("%d %d", &a, &b)
#define sd3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sd4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sld1(a) scanf("%ld", &a)
#define sld2(a, b) scanf("%ld %ld", &a, &b)
#define slld1(a) scanf("%lld", &a)
#define slld2(a, b) scanf("%lld %lld", &a, &b)
#define pd1(a) printf("%d", a)
#define psd1(a) printf("%d ", a)
#define pnd1(a) printf("%d\n", a)
#define plld1(a) printf("%lld", a)
#define pslld1(a) printf("%lld ", a)
#define pnlld1(a) printf("%lld\n", a)
#define pd2(a, b) printf("%d %d", a, b)
#define pnd2(a, b) printf("%d %d\n", a, b)
#define st(v) sort(v.begin(), v.end())
#define vt vector
#define pr pair
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define fe(i, a, b) for (int i = a; i <= b; i++)

bool chk[1000001];

int t;

void solve()
{
    sd1(t);

    while (t--)
    {
        int k;
        sd1(k);
        priority_queue<pr<int, int>> maxHeap;
        priority_queue<pr<int, int>, vt<pr<int, int>>, greater<pr<int, int>>> minHeap;
        f(i, 0, k)
        {
            char c;
            int num;
            scanf(" %c %d", &c, &num);
            if (c == 'I')
            {
                maxHeap.push({num, i});
                minHeap.push({num, i});
                chk[i] = true;
            }
            else
            {
                if (num == -1)
                {
                    while (!minHeap.empty() && !chk[minHeap.top().second])
                    {
                        minHeap.pop();
                    }

                    if (!minHeap.empty())
                    {
                        chk[minHeap.top().second] = false;
                        minHeap.pop();
                    }
                }
                else
                {
                    while (!maxHeap.empty() && !chk[maxHeap.top().second])
                    {
                        maxHeap.pop();
                    }

                    if (!maxHeap.empty())
                    {
                        chk[maxHeap.top().second] = false;
                        maxHeap.pop();
                    }
                }
            }
        }
        while (!minHeap.empty() && !chk[minHeap.top().second])
        {
            minHeap.pop();
        }
        while (!maxHeap.empty() && !chk[maxHeap.top().second])
        {
            maxHeap.pop();
        }

        if (minHeap.empty() && maxHeap.empty())
        {
            printf("EMPTY\n");
        }
        else
        {
            pnd2(maxHeap.top().first, minHeap.top().first);
        }
    }
}

int main(void)
{
    fio;
    solve();
    return 0;
}