#include <iostream>
#include <conio.h>
using namespace std;
char znak=0;
int main()
{
    while(znak!=27)
    {
        cout<<"Podaj liczbe: ";
        znak=getch();
        cout<<znak<<endl;
    }
    
    return 0;
}
