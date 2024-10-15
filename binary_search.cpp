#include <bits/stdc++.h>

using namespace std;

int get_lower_bound(vector<int> &vc, int x)
{
    int L = 0, R = vc.size();
    while (L < R)
    {
        int M = (L + R) / 2;
        if (vc[M] < x)
        {
            L = M + 1;
        }
        else
        {
            R = M;
        }
    }
    return L;
}
int get_upper_bound(vector<int> &vc, int x)
{
    int L = 0, R = vc.size();
    while (L < R)
    {
        int M = (L + R) / 2;
        if (vc[M] <= x)
        {
            L = M + 1;
        }
        else
        {
            R = M;
        }
    }
    return L;
}

/*int get_upper_bound(vector<int> &vc , int x)
{
    return get_lower-bound(vc, x+1);
}
*/
int main()
{
    vector<int> vc = {-5, 0, 0, 7, 8, 8, 8, 9, 9, 15};
    for (int i = -10; i <= 20; i++)
    {
        cout << i << " : " << get_lower_bound(vc, i) << endl;
    }
    cout << endl;
    for (int i = -10; i <= 20; i++)
    {
        cout << i << " : " << get_upper_bound(vc, i) << endl;
    }

    return 0;
}