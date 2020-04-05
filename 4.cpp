#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define rep(i,f,t) for(i=f;i<(int)t;++i)
#define all(a) begin(a),end(a)
#define F first
#define S second
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int inf = 1e9 + 5, N = 2e5 + 5, d1[] = { 0,0,1,-1 }, d2[] = { 1,-1,0,0 };

void constant(string& str)
{
    for(char& ch:str)
    {
        if(ch=='1')ch='0';
        else if(ch=='0')ch='1';
    }
}

int main()
{

    int t,n;
    cin>>t>>n;

    while(t--)
    {
        int i,j,rr=-1,cc=-1;
        char l,done;
        string str1(n,'?');
        for(i=1,j=0;j<n/2;i+=2)
        {
            if(i>10 && i%10==1)
            {
                if(cc!=-1)
                {
                    cout << cc+1 << endl;
                    cin >> l;
                    if(str1[cc]!=l)constant(str1);
                }
                else
                {
                    cout << "1\n";cin>>l;
                }
                if(rr!=-1)
                {
                    cout << rr+1 << endl;
                    cin >> l;
                    if(str1[rr]!=l)reverse(all(str1));
                }
                else
                {
                    cout << "1\n";cin>>l;
                }
            }
            else
            {
                cout << j+1 << endl;
                cin >> str1[j];
                cout << n-j << endl;
                cin >> str1[n-1-j];
                if(str1[j]==str1[n-1-j])cc=j;
                else if(str1[j]!=str1[n-1-j])rr=j;
                ++j;
            }
        }
        cout << str1 << endl;
        cin>>done;
        if(done=='N')
        {
            return 0;
        }
    }
}
