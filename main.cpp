/*Write a program in which the user enters a four digit PIN. If user types 1234, display
information that the PIN is correct. If not, user must re enters the PIN. The user has 5 tries.
Display on the screen how many attempts the user has left to enter the PIN code. */

#include <iostream>

using namespace std;
int i=0;

string PIN;

int main()
{
    cout<< "Wprowadz PIN. Masz 5 prob. Powodzenia! "<< endl;

    do
    {
        cout << "Podaj czterocyfrowy kod PIN: " << endl;
        cin >>PIN;
        i++;

        cout<< "To byla Twoja: "<< i << ". proba. "<< endl;
    }
    while ((PIN!="1234")&&(i<5));
    if (PIN=="1234")
    {
        cout<< "PIN jest poprawny";
    }
    else
    {
        cout<< "PIN nie jest poprawny"<<endl;
    }



    return 0;
}
