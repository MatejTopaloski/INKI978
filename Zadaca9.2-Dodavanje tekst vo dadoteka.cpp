#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string tekst;
    cout << "Vnesi tekst: ";
    getline(cin, tekst);

    ofstream datoteka("tekst.txt", ios::app);

    if (datoteka.is_open()) {
        datoteka<<tekst<<endl;
        datoteka.close();
        cout << "Tekstot e zapisan vo dadotekata." << endl;
    }
    else {
        cout << "Dadotekata ne moze da se otvori." << endl;
    }

    return 0;
}
