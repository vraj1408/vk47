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
        int n,ans1=0,ans2=0,ans3=0;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j) ans1+=a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            int v[n]={};
            for(int j=0;j<n;j++)
            {
                if(v[a[i][j]-1]==1) {ans2++;break;}
                else v[a[i][j]-1]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            int v[n]={};
            for(int j=0;j<n;j++)
            {
                if(v[a[j][i]-1]==1) {ans3++;break;}
                else v[a[j][i]-1]=1;
            }
        }
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }

    return 0;
}
