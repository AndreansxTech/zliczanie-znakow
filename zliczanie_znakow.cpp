#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char znak=0;
    while(znak!=27)
        {
            cout<<"Podaj liczbe: ";
            znak=getch();
            if(znak==27)
                cout<<"Wcisnieto ESC\n";
            else
                cout<<znak<<"\n";
        }
    return 0;
}
