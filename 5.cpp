#include <bits/stdc++.h>
#define ll long long int


using namespace std;


int sq[60][60], nn, kk, t;
bool rows_safe[60][60], cols_safe[60][60], solvedyet;

    void solver_vp(int rows, int cols, int m) {
    if (rows == nn && cols == nn + 1 && m == kk && !solvedyet)
    {
        solvedyet = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i=1;i<nn+1; ++i)
        {
            for (int j = 1; j < nn+1; ++j)
            {
                cout<<sq[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }


    else if (rows-1 > nn-1)
    {
        return;
    }


    else if (cols > nn)
    {
        solver_vp(rows + 1, 1, m);
    }
        for (int i = 1; i <= nn && !solvedyet;i++)
        {
            if (!rows_safe[rows][i] && !cols_safe[cols][i])
            {
                rows_safe[rows][i] = cols_safe[cols][i] = true;
                
                
                 if (rows== cols) m += i;

                sq[rows][cols] = i;
                solver_vp(rows, cols + 1, m);

                rows_safe[rows][i] = cols_safe[cols][i] = false;
                if (rows+1 == cols+1) {
                    m= m-i;
                }
                sq[rows][cols] = 0;
            }
        }
}

signed main() {
    int tt;
    cin>>tt;
    for (t = 1; t <= tt; t++)
    {
        cin>>nn>>kk;
        solver_vp(1, 1, 0);
        for(int i=0;i<5;i++) {}
        if (!solvedyet)
        {
            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        }
        solvedyet = false;
    }
    return 0;
}
