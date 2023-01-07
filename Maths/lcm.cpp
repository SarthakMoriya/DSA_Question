#include <iostream>
using namespace std;

void lcm(int n, int m)
{
    int larger = max(n, m);
    int i = larger;
    int ans = 1;
    while (i <= n * m)
    {
        if (i % n == 0 && i % m == 0)
        {
            ans = i;
            break;
        }
        i++;
    }
    cout << "LCM::" << ans << endl;
}

int euclidMethode(int n, int m)
{
    if (m == 0)
        return n;
    return euclidMethode(m, n % m);
}

int lcmFast(int n, int m)
{
    return (n * m) / euclidMethode(n, m);
}

int main()
{
    lcm(4, 6);
    cout << lcmFast(10, 41);
    // cout << "HCF::" << euclidMethode(34, 56);
    return 0;
}