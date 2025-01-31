#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;

float fun(float x)
{
    return x*x*x + x*x;
}
float fun_Derivative(float x)
{
    return 3*x*x + 2*x;
}
int main()
{
    float x;

    int i = 0, n;

    cin>>x>>n;

    while (i <= n)
    {
        if (fun_Derivative(x) == 0)
        {
        cout<<"No possible outcome"<<endl;

        break;
        }
        else
        {
        x = x - fun(x) / fun_Derivative(x);

        i++;
        }
    }
    cout<<"Root is = "<<setprecision(4)<<fixed<<x<<endl;

    return 0;
}
 /*
  -50 50
  Root is = -1.0000

  Process returned 0 (0x0)   execution time : 6.773 s
  Press any key to continue.

  */

