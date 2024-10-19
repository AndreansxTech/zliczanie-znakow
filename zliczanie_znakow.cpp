#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
const int ROZMIAR=999;
char znak;
int suma=0;
int wprowadzone;
int tablica[ROZMIAR];
void oblicz_maks()
{
    for (int i=0; i<wprowadzone; i++)
    {
        suma=tablica[i]+suma;
    }
}
int main()
{
    while(znak!=27)
    {
        if (znak==27)
        {
            cout<<"wprowadzono esc\n";

        }
        else
        {
            cout<<"podaj liczbe: ";
            tablica[wprowadzone]=getch(); znak=tablica[wprowadzone]; cout<<znak<<"\n"; wprowadzone++;
        }
    }
    cout<<"wprowadzono "<<wprowadzone-1<<" liczb\n";
    oblicz_maks();
    cout<<"suma wprowadzonych liczb to: "<<suma<<endl;
    return 0;
}
