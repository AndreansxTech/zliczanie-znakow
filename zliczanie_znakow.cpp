#include <iostream>
#include <conio.h>
using namespace std;
char znak;
int main()
{
    while(znak!=27)
        {
            cout<<"Podaj znak: ";
            znak=getch();
            if (znak!=27)
                cout<<znak<<endl;
            else
                cout<<"podano esc\n";
        }
    return 0;
}
