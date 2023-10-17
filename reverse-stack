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
#define LB cout<<lb
#define all(v) v.begin(), v.end()

/* ALSHARIAR HOSSAIN MITHU */

/* Reversing a Stack */

void insert_at_bottom(stack<int>&st, int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }
    int top = st.top();
    st.pop();
    insert_at_bottom(st,x);

    st.push(top);
}

void ReverseStack(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }
    int TE  = st.top();
    st.pop();
    ReverseStack(st);
    insert_at_bottom(st,TE);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    ReverseStack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
