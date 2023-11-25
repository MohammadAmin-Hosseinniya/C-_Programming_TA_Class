#include <iostream>

using namespace std;

int main()
{
    //This code displays a formation of stars
    int length;
    cout << "Give me the length of the middle line: ";
    cin >> length;
    cout << "\n";

    for(int i=0; i<=length; i++) //this loop sets the lines for ascending part (for example, first 5 lines for length=5)
    {
        for(int star=0; star<=i; star++) // this loop prints required number of stars!
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=length-1; i>=0; i--) //this loop sets the line for descending part (for example, last 4 lines for length=5)
    {
        for(int star=0; star<=i; star++) // this loop prints required number of stars!
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
