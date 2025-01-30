#include<iostream>

using namespace std;

#define Epsilon 0.01

double fun(double x)
{
    return x*x*x - x*x +2;
}
void Bisection(double a, double b)
{
    double mid = a;

    while(b-a >= Epsilon)
    {
     mid =(a+b)/2;

     if(fun(mid)*fun(a) <0) b =mid;

     else a = mid;
    }
    cout<<"The value of root is : "<<mid<<" "<<fun(mid)<<endl;
}
signed main()
{
    double a = -40 , b = 30;

    Bisection(a,b);

    return 0;
}
