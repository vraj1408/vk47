#include<bits/stdc++.h>
#define int long long int
#define fori for(int i=0;i<n;i++)
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

signed main()
{
    jaldi
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        cout<<"Case #"<<k<<": ";
        int n;
        cin>>n;
        map<int,int> mp;
        map<pair<int,int>,queue<int>> mpp;
        vector<pair<int,int>> v;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int x;cin>>x;
            mpp[{a[i],x}].push(i);
            v.push_back({a[i],x});
        }
        sort(a,a+n);
        sort(v.begin(),v.end());
        int q=0,w=0;
        bool b=true;
        char ans[n];
        for(int i=0;i<n;i++)
        {
            if(q<=v[i].first)
            {
                q=v[i].second;
                ans[mpp[{v[i].first,v[i].second}].front()]='C';
                mpp[{v[i].first,v[i].second}].pop();
            }
            else if(w<=v[i].first)
            {
                w=v[i].second;
                ans[mpp[{v[i].first,v[i].second}].front()]='J';
                mpp[{v[i].first,v[i].second}].pop();
            }
            else
            {
                b=false;
                break;
            }
        }
        if(b)
        {
            for(int i=0;i<n;i++)
            {
                cout<<ans[i];
            }cout<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}

