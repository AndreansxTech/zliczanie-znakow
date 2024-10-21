#include <iostream>
#include <conio.h>
#include <windows.h>
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
void kolorki(int kolor)
{
    SetConsoleTextAttribute(color,kolor);
}

int main()
{
    int liczba,licznik=0;int MAKS=999;
    float suma=0;
    int liczby[MAKS];

    for (int i=0; i<MAKS;i++)
        liczby[i]=0;
    char znak;
    cout<<"Zliczanie znakow. Wpisuj znaki a aby zakonczyc wcisnij ESC\n";
    while (true)
    {
        cout<<"Podaj znak: ";znak=getch();
        if (znak==27)
            break;
        else if (znak>='0'&&znak<='9'){
            cout<<znak;
            liczba=znak-'0'; cout<<endl; suma=suma+liczba;
            liczby[licznik]=liczba; licznik++;
            cout<<liczba<<endl;}
        else
            cout<<"Nie poprawny znak !\n";
    }

    kolorki(12);cout<<"Wpisano ESC\n";kolorki(7);cout<<" Wprowadzono ";kolorki(9);cout<<licznik;kolorki(7);cout<<" liczb\n";
    cout<<"Zapisane liczby:\n";
    for (int i=0; i<licznik;i++) {
            kolorki(11);cout<<i+1<<".   ";kolorki(9); cout<<liczby[i]<<endl; }
    kolorki(7);
    cout<<"Suma podanych liczb wynosi "<<suma<<endl;
    int maks,mini=liczby[0];
    for (int i=0; i<licznik; i++)
    {
        if (liczby[i]<liczby[i+1]) {
            maks=liczby[i+1];
            mini=liczby[i]; }
    }
    cout<<"Najwieksza z podanych liczb to ";kolorki(9);cout<<maks<<endl;kolorki(7);
    cout<<"Najmniejsza z podanych liczb to ";kolorki(9);cout<<mini<<endl;kolorki(7);
    float srednia=0;
    srednia=suma/licznik;
    cout<<"Srednia podanych liczb to ";kolorki(9);cout<<srednia<<endl;kolorki(7);


return(0);
}
