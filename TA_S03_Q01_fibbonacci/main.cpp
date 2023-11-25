#include <iostream>

using namespace std;

void fibonacci()
    {
        int fib1 = 0;
        int fib2 = 1;
        int fib3 = fib1+fib2;
        int n;
        cout << "Mikhay jomleha ro ta che adadi edame bedam? " << endl;
        cin >> n;
        cout << "===============================" << endl;

        cout << fib1 << "\n";
        cout << fib2<< "\n";

        while ( fib3 < n )
        {

            fib3 = fib2 + fib1;

            if (fib3 < n)
            {
                cout << fib3 << "\n";
            }
            else
            {
                break;
            }

            fib1 = fib2;
            fib2 = fib3;
            //n = n-1;
        }
    }

int main()
{
    fibonacci();
}
