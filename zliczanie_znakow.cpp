#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int liczba,suma,licznik;int MAKS=999;
    int liczby[MAKS];
    char znak;
    cout<<"Zliczanie znakow. Wpisuj znaki a aby zakonczyc wcisnij ESC\n";
    while (true)
    {
        cout<<"Podaj znak: ";znak=getch();
        if (znak==27)
            break;
        else if (znak>='0'&&znak<='9')
        {
            cout<<znak;
            liczba=znak-'0'; cout<<endl; suma=suma+liczba; licznik++;
            cout<<liczba<<endl;
        }
        else
        {
            cout<<"Nie poprawny znak !\n";
        }
    }
    cout<<"Wpisano ESC\n Wprowadzono "<<licznik<<" liczb\n";
    cout<<"Suma podanych liczb wynosi "<<suma<<endl;
    return(0);
}
