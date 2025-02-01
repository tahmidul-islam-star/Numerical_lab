#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

void traverse(double arra[10][10],int n)
{
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
        cout<<arra[i][j]<<" ";
        }
        cout<<endl;
    }
}
void GussianElimination(double arra[][10],int n)
{
    double temp ;

    for(int i =1 ; i <= n-1 ; i++)
    {
    for(int j = i +1 ; j <= n; j++)
    {
    temp = arra[j][i] /arra[i][i];

    for(int k=1 ; k <=n+1; k++)
    {
        arra[j][k] = arra[j][k] - temp*arra[i][k];
     }
    }
    }
     traverse(arra ,n);

    vector<double> solution(n + 1);

    for (int i = n; i >= 1; i--)
    {
        solution[i] = arra[i][n + 1];

        for (int j = i + 1; j <= n; j++)
        {
            solution[i] -= arra[i][j] * solution[j];
        }
        solution[i] /= arra[i][i];
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
    cout << " x"<< i<< " = "<< fixed << setprecision(2) << solution[i]<<endl;
    }
}
int main()
{
    int n;cin >> n;

    double arra[10][10];

    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n+1; j++)
        {
            cin>>arra[i][j];
        }
    }
    cout<<endl;

    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n+1; j++)
        {
            cout << arra[i][j] <<" ";
        }
        cout << endl;
    }
    GussianElimination(arra,n);

    return 0;
}
/*
3
 9 8 7 6
 3 4 6 7
 1 2 5 6

 9 8 7 6
 3 4 6 7
 1 2 5 6

 9 8 7
 0 1.33333 3.66667
 0 0 1.16667

  x1 = -1.00
  x2 = 1.00
  x3 = 1.00

Process returned 0 (0x0)   execution time : 3.671 s
Press any key to continue.
*/

