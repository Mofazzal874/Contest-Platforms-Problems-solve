#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int a, b, cost;
};

int n, m;
vector<Edge> edges;
const int INF = 1000000000;

void Bellman(int s)
{
    vector<int> d(n, INF);
    d[s] = 0;
    vector<int> p(n, -1);
    int x;

    for (int i = 0; i < n; ++i)
    {
        x = -1;
        for (Edge e : edges)
        {
            if (d[e.a] < INF && d[e.b] > d[e.a] + e.cost)
            {
                d[e.b] = max(-INF, d[e.a] + e.cost);
                p[e.b] = e.a;
                x = e.b;
            }
        }
    }

    if (x == -1)
    {
        cout << "No negative cycle" << endl;
    }
    else
    {
        cout << "Negative cycle found" << endl;

        int y = x;
        for (int i = 0; i < n; ++i)
            y = p[y];

        vector<int> negativePath;
        for (int i = y;; i = p[i])
        {
            negativePath.push_back(i);
            if (i == y && negativePath.size() > 1)
                break;
        }
        reverse(negativePath.begin(), negativePath.end());

        cout << "Negative cycle path: ";
        for (int i = 0; i < negativePath.size(); i++)
            cout << negativePath[i] << ' ';
        cout << endl;
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        Edge e;
        cin >> e.a >> e.b >> e.cost;
        edges.push_back(e);
    }

    int s;
    cin >> s;
    //Negative Cycle path
    Bellman(s);

    // Change edge weights to negative values
    for (int i = 0; i < m; i++)
    {
        edges[i].cost = -edges[i].cost;
    }

    //Positive Cycle Path
    Bellman(s);

    return 0;
}
