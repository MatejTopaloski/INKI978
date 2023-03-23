#include <iostream>
//Matej TOpaloski INKI978

using namespace std;

int main()
{
    char str[] = "Mockingbird - Eminem";
    char *ptr = str;

    cout << "Pesna: " << ptr << endl;
    cout << "Pocetna pozicija: " << *ptr << endl;
    cout << "Adresa na pocetok: " << (void *)ptr << endl;

    ptr = str + 14;
    cout <<endl;

    cout << "Sodrzina po premesten pocetok: " << ptr << endl;
    cout << "Pocetna pozicija: " << *ptr << endl;
    cout << "Adresa od koja pocnuva novata sodrzina: " << (void *)ptr << endl;

    return 0;
}
