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
        string s;
        cin>>s;
        int a[s.length()];
        for(int i=0;i<s.length();i++)
        {
            a[i]=s[i]-'0';
        }
        int temp=0;
        for(int i=0;i<s.length();i++)
        {
            int v=abs(a[i]-temp);
            if(a[i]>temp)
            {
                while(v--) cout<<'(';
            }
            if(a[i]<temp)
            {
                while(v--) cout<<')';
            }
            temp=a[i];
            cout<<temp;
        }
        while(temp--)
        {
            cout<<')';
        }
        cout<<endl;
    }

    return 0;
}
