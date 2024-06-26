

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

/* Solution of Clumsy Factorial Leetcode (1006) */

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    stack<int> temp, ans;
    temp.push(n);
    n--;

    // Multiplication and division

    int i =0;
    while(n){
        if(i==0)
        {
            int num = temp.top();
            temp.pop();
            temp.push(num*n);
        }
        else if (i==1)
        {
            int num = temp.top();
            temp.pop();
            temp.push(num/n);
        }
        else{
            temp.push(n);
        }
        i = (i+1)%4;
        n--;
        
    }

    while(!temp.empty())
    {
        //cout<<temp.top()<<lb;
        ans.push(temp.top());
        temp.pop();
    }

    //Handling Addition and Subtraction 
    ll sum = ans.top();
    ans.pop();
    bool flag = 0;
    while(!ans.empty())
    {
        if(!flag)
        {
            sum+=ans.top();
        }
        else
        {
            sum-=ans.top();
        }
        flag = !flag;
        ans.pop();
    }
    cout<<sum<<lb;


    return 0;
}
