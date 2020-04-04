#include<bits/stdc++.h>
#define int long long int
#define fori for(int i=0;i<n;i++)
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

signed main()
{
    jaldi
    int t,n;
    cin>>t>>n;
    for(int k=1;k<=t;k++)
    {
        int a[n];
        char character;
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<endl;
            cin>>a[i];
        }
        fori cout<<a[i];cout<<endl;
        cin>>character;
        if(character=='N') break;
    }

    return 0;
}

