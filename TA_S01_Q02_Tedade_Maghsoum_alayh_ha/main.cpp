#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 1;
    int i;

    cout << "Enter the number: ";
    cin >> number;

    for(i=1; i<= (number/2+1); i++)
    {
        if (number%i == 0)
        {sum++;}
    }

    cout << "Tedade maghsoum alayh ha = " << sum;
}
