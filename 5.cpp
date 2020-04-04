#include<bits/stdc++.h>
//#define int long long int
#define fori for(int i=0;i<n;i++)
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int kk=1;kk<=t;kk++)
    {
        int n,k;
        cin>>n>>k;
        cout<<"Case #"<<kk<<": ";
        if(n==2)
        {
            if(k==2) cout<<"POSSIBLE"<<endl,cout<<"1 2"<<endl<<"2 1"<<endl;
            else if(k==3) cout<<"IMPOSSIBLE"<<endl;
            else if(k==4) cout<<"POSSIBLE"<<endl,cout<<"2 1"<<endl<<"1 2"<<endl;
            else cout<<"IMPOSSIBLE"<<endl;
        }
        if(n==3)
        {
            if(k==3) cout<<"POSSIBLE"<<endl,cout<<"1 2 3\n3 1 2\n2 3 1"<<endl;
            else if(k==4) cout<<"IMPOSSIBLE"<<endl;
            else if(k==5) cout<<"IMPOSSIBLE"<<endl;
            else if(k==6) cout<<"POSSIBLE"<<endl,cout<<"1 2 3\n2 3 1\n3 1 2"<<endl;
            else if(k==7) cout<<"IMPOSSIBLE"<<endl;
            else if(k==8) cout<<"IMPOSSIBLE"<<endl;
            else if(k==9) cout<<"POSSIBLE"<<endl,cout<<"3 1 2\n2 3 1\n1 2 3"<<endl;
            else cout<<"IMPOSSIBLE"<<endl;
        }
        if(n==4)
        {
            if(k==4) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n2 1 4 3\n3 4 1 2\n4 3 2 1"<<endl;
            else if(k==5) cout<<"IMPOSSIBLE"<<endl;
            else if(k==6) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2"<<endl;
            else if(k==7) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n3 1 4 2\n4 3 2 1\n2 4 1 3"<<endl;
            else if(k==8) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3"<<endl;
            else if(k==9) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n2 4 1 3\n4 3 2 1\n3 1 4 2"<<endl;
            else if(k==10) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n2 4 1 3\n3 1 4 2\n4 3 2 1"<<endl;
            else if(k==11) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n3 4 2 1\n2 1 4 3\n4 3 1 2"<<endl;
            else if(k==12) cout<<"POSSIBLE"<<endl,cout<<"1 2 3 4\n3 4 1 2\n2 3 4 1\n4 1 2 3"<<endl;
            else if(k==13) cout<<"POSSIBLE"<<endl,cout<<"2 1 3 4\n3 4 2 1\n1 3 4 2\n4 2 1 3"<<endl;
            else if(k==14) cout<<"POSSIBLE"<<endl,cout<<"3 1 2 4\n1 4 3 2\n2 3 4 1\n4 2 1 3"<<endl;
            else if(k==15) cout<<"IMPOSSIBLE"<<endl;
            else if(k==16) cout<<"POSSIBLE"<<endl,cout<<"4 1 2 3\n1 4 3 2\n2 3 4 1\n3 2 1 4"<<endl;
            else cout<<"IMPOSSIBLE"<<endl;
        }
        if(n==5)
        {

            if(k==5) cout<<"POSSIBLE\n1 2 3 4 5\n2 1 4 5 3\n3 5 1 2 4\n4 3 5 1 2\n5 4 2 3 1";
            else if(k==6) cout<<"IMPOSSIBLE";
            else if(k==7) cout<<"POSSIBLE\n1 2 3 4 5\n3 1 4 5 2\n4 5 2 1 3\n5 3 1 2 4\n2 4 5 3 1";
            else if(k==8) cout<<"POSSIBLE\n1 2 3 4 5\n2 1 4 5 3\n3 5 1 2 4\n5 4 2 3 1\n4 3 5 1 2";
            else if(k==9) cout<<"POSSIBLE\n1 2 3 4 5\n2 1 4 5 3\n4 5 1 3 2\n3 4 5 2 1\n5 3 2 1 4";
            else if(k==10) cout<<"POSSIBLE\n1 2 3 4 5\n2 1 4 5 3\n3 4 5 1 2\n5 3 1 2 4\n4 5 2 3 1";
            else if(k==11) cout<<"POSSIBLE\n1 2 3 4 5\n2 3 1 5 4\n3 5 4 1 2\n4 1 5 2 3\n5 4 2 3 1";
            else if(k==12) cout<<"POSSIBLE\n1 2 3 4 5\n2 3 1 5 4\n3 4 5 1 2\n5 1 4 2 3\n4 5 2 3 1";
            else if(k==13) cout<<"POSSIBLE\n1 2 3 4 5 \n2 3 1 5 4\n5 1 4 2 3\n4 5 2 3 1\n3 4 5 1 2";
            else if(k==14) cout<<"POSSIBLE\n1 2 3 4 5\n2 1 4 5 3\n3 4 5 1 2\n4 5 2 3 1 \n5 3 1 2 4";
            else if(k==15) cout<<"POSSIBLE\n1 2 3 4 5 \n2 3 1 5 4\n3 4 5 1 2\n4 5 2 3 1\n5 1 4 2 3";
            else if(k==16) cout<<"POSSIBLE\n1 2 3 4 5\n2 3 4 5 1\n4 1 5 2 3\n5 4 1 3 2\n3 5 2 1 4";
            else if(k==17) cout<<"POSSIBLE\n1 2 3 4 5\n2 4 1 5 3\n4 3 5 2 1\n5 1 4 3 2\n3 5 2 1 4";
            else if(k==18) cout<<"POSSIBLE\n1 2 3 4 5\n2 4 5 1 3\n3 5 4 2 1\n4 3 1 5 2\n5 1 2 3 4";
            else if(k==19) cout<<"POSSIBLE\n1 2 3 4 5\n2 5 1 3 4\n3 4 5 1 2 \n4 3 2 5 1\n5 1 4 2 3";
            else if(k==20) cout<<"POSSIBLE\n1 2 3 4 5\n2 5 4 1 3\n3 4 5 2 1\n4 3 1 5 2 \n5 1 2 3 4";
            else if(k==21) cout<<"POSSIBLE\n2 1 3 4 5\n1 5 4 2 3\n3 4 5 1 2 \n4 3 2 5 1\n5 2 1 3 4";
            else if(k==22) cout<<"POSSIBLE\n3 1 2 4 5\n1 5 4 2 3\n2 4 5 3 1\n4 3 1 5 2\n5 2 3 1 4";
            else if(k==23) cout<<"POSSIBLE\n4 1 2 3 5\n1 5 3 4 2\n2 4 5 1 3\n3 2 4 5 1 \n5 3 1 2 4";
            else if(k==24) cout<<"IMPOSSIBLE";
            else if(k==25) cout<<"POSSIBLE\n5 1 2 3 4\n1 5 3 4 2\n2 4 5 1 3\n3 2 4 5 1\n4 3 1 2 5";
            else cout<<"IMPOSSIBLE";
            cout<<endl;
        }
    }
    return 0;
}


