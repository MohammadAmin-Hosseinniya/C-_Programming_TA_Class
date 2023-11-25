#include <iostream>

using namespace std;

int main()
{
    string password;
    cout << "Enter the password: ";
    cin >> password;

    bool upper = false;     //To examine whether password contains an uppercase letter or not.
    bool lower = false;     //To examine whether password contains a lowercase letter or not.
    bool symbol = false;    //To examine whether password contains a symbol or not.


    for(int i=0; i< password.length(); i++) //This loop checks first condition (uppercase)
    {
        if(isupper(password[i]))
        {
            upper = true;
            cout << "First and enough uppercase letter is: " << password[i] << "\n";
            break;
        }
    }


    for(int i=0; i< password.length(); i++) //This loop checks second condition (lowercase)
    {
        if(islower(password[i]))
        {
            lower = true;
            cout << "First and enough lowercase letter is: " << password[i] << "\n";
            break;
        }
    }



    //This loop checks third condition (symbols)
    char star_mark = '*';
    char dollar = '$';
    char atsign = '@';
    char hashtag = '#';

    for(int i=0; i< password.length(); i++)
    {
        if((password.find(star_mark) != std::string::npos) || (password.find(dollar) != std::string::npos ) || (password.find(atsign) != std::string::npos ) || (password.find(hashtag) != std::string::npos ))
        {
            symbol = true;
            //cout << "First and enough symbol letter is: " << password[i];
            break;
        }
    }



    if(!upper || !lower || !symbol) //This condition announces validation of password.
    {
        cout << "Password is invalid.";
    }
    else
    {
        cout << "Password is valid.";
    }
}
