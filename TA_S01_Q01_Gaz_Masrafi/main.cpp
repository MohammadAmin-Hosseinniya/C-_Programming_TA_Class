#include <iostream>

using namespace std;

int main()
{
    float gaz_masrafi;
    float hazine;

    cout << "Gaze masrafi cheghadr ast: ";
    cin >> gaz_masrafi;

    if(gaz_masrafi < 600)
    {
        hazine = 1352*gaz_masrafi;
    }

    else if(600 < gaz_masrafi < 1000)
    {
        hazine = 600*1352 + (gaz_masrafi-600)*5195;
    }

    else(gaz_masrafi > 1000)
    {
        hazine = 600*1352 + 400*5195 + (gaz_masrafi-1000)*19959;
    }

    cout << "Hazineye gaze masrafi = " << hazine << " Rials";
}
