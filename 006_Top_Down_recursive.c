// Solve the Rod cutting problem using Top Down recursive approach.

// Partha P Sarmah CSE 201902022093 CITK

#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

const int INF = 100000;
int r[5 + 1];

void init_r()
{
    int i;
    r[0] = 0;
    for (i = 1; i <= 5; i++)
    {
        r[i] = -1 * INF;
    }
}

int top_down_recursive_approach(int c[], int n)
{
    if (r[n] >= 0)
    {
        return r[n];
    }

    int maximum_revenue = -1 * INF;
    int i;

    for (i = 1; i <= n; i++)
    {
        maximum_revenue = MAX(maximum_revenue, c[i] + top_down_recursive_approach(c, n - i));
    }

    r[n] = maximum_revenue;
    return r[n];
}

int main()
{
    init_r();
    int c[] = {0, 20, 34, 40, 60, 75};
    printf("%d\n", top_down_recursive_approach(c, 5));
    return 0;
}
