#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int liczba,licznik=0;int MAKS=999;
    float suma=0;
    int liczby[MAKS];

    for (int i=0; i<MAKS;i++)
    {
        liczby[i]=0;
    }
    char znak;
    cout<<"Zliczanie znakow. Wpisuj znaki a zeby zakonczyc wcisnij esc\n";
    while (true)
    {
        cout<<"Wpisz znak: ";znak=getch();
        if (znak==27)
            break;
        else if (znak>='0'&&znak<='9')
        {
            cout<<znak;
            liczba=znak-'0'; cout<<endl; suma=suma+liczba;
            liczby[licznik]=liczba; licznik++;
            cout<<liczba<<endl;
        }
        else
        {
            cout<<"Nie poprawny znak !\n";
        }
    }

    cout<<"Wpisano ESC\n Wprowadzono "<<licznik<<" liczb\n";
    cout<<"Zapisane liczby:\n";
    for (int i=0; i<licznik;i++)
        {
            cout<<i+1<<" liczba to "; cout<<liczby[i]<<endl;
        }
    cout<<"suma podanych liczb wynosi "<<suma<<endl;
    int maks,mini=liczby[0];
    for (int i=0; i<licznik; i++)
    {
        if (liczby[i]<liczby[i+1])
        {
            maks=liczby[i+1];
            mini=liczby[i];
        }
    }
    cout<<"najwieksza z podanych liczb to "<<maks<<endl;
    cout<<"najmniejsza z podanych liczb to "<<mini<<endl;
    float srednia=0;
    srednia=suma/licznik;
    cout<<"srednia podanych liczb to "<<srednia<<endl;


return(0);
}
