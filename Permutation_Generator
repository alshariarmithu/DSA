#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define lb "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

/* ALSHARIAR HOSSAIN MITHU */

/*This code can not eliminate the duplicate permutation*/

vector<vector<int>>ans;
void permute(vector<int>&a,int index)
{
    //vector<vector<int>>res;
    if(index==a.size())ans.push_back(a);
    for(int i = index;i < a.size();i++)
    {
        if(i!= index and a[i]==a[index])continue;
        swap(a[i],a[index]);
        permute(a,index+1);
        swap(a[i],a[index]);
    }
    //return res;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    permute(a,0);
    for(auto v:ans)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<lb;
    }
    return 0;
}
