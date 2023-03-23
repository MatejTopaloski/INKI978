#include <iostream>
#include <cstring>
#Matej Topaloski INKI978

using namespace std;

void zamenaBukviIme(char *Ime)
{
    char symbols[] = "#/_*";
    for (int i = 0; i < 4; i++)
    {
        *(Ime + i) = symbols[i];
    }
}

void zamenaBukviPrezime(char *Prezime)
{
    char symbols[] = "}*!@";
    for (int i = 0; i < 4; i++)
    {
        *(Prezime + i) = symbols[i];
    }
}

int main()
{
    char Ime[] = "Matej";
    char Prezime[] = "Topaloski";

    cout << "Pecatenje pred zamena:" << endl;
    cout << Ime << " " << Prezime << endl;
    cout << endl;

    zamenaBukviIme(Ime);
    zamenaBukviPrezime(Prezime);

    cout << "Pecatenje posle zamena:" << endl;
    cout << Ime << " " << Prezime << endl;
    return 0;
}
