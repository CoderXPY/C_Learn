#define   _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
long long o = 1, minn = 10000000, m;
struct pa {
    long long s;
    long long j;
    string n;
    long long cost;
};
pa	p[10005];
int main()
{
    while (cin >> p[o].s >> p[o].j >> p[o].n)
        o++;
    for (int i = 1; i < o; i++)
    {
        for (int g = 1; g < o; g++)
            p[i].cost += abs(p[i].j - p[g].j) * p[g].s;
        if (p[i].cost <= minn)
        {
            minn = p[i].cost;
            m = i;
        }
    }
    cout << p[m].n << " " << p[m].cost << endl;
    return 0;
}