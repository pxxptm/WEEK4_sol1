#include<iostream>
#include<math.h>
using namespace std;

int fac(int n)
{
    if (n==0||n==1) return 1;
    else return n*fac(n-1);
}

main()
{
    double n;
    cout << "Input number : ";
    cin >> n;

    if(ceil(n)==abs(n)) cout << n << "! = " << fac(n);
    else cout << "cannot find factorial";

    return 0;
}
