#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

const string BrojNaIndeks = "INKI978";
const string ImePrezime = "Matej.Topaloski";

int main()
{
    string adresa;
    cout << "Vnesete ja validnata adresa na studentot: ";
    getline(cin, adresa);
    cout << "Vnesenata adresa e: " << adresa << endl;

    string spoeni = BrojNaIndeks + " " + ImePrezime + " " + adresa;
    cout << "Spoenite vrednosti se: " << spoeni << endl;
    cout << endl;

    vector<int> asciiKodovi;
    for (int i = 0; i < spoeni.length(); i++)
    {
        asciiKodovi.push_back(spoeni[i]);
    }
    cout << "Vektor so ASCII kodovi: ";
    for (auto it = asciiKodovi.begin(); it != asciiKodovi.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    sort(asciiKodovi.begin(), asciiKodovi.end());
    cout << "Sortiran vektor so ASCII kodovi: ";
    for (auto it = asciiKodovi.begin(); it != asciiKodovi.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    int den = 17, mesec = 7, godina = 03;
    vector<int> datum;
    datum.push_back(den);
    while (mesec > 0)
    {
        datum.push_back(mesec % 10);
        mesec /= 10;
    }
    while (godina > 0)
    {
        datum.push_back(godina % 10);
        godina /= 10;
    }

    for (auto it = datum.begin(); it != datum.end(); it++)
    {
        asciiKodovi.push_back(*it);
    }

    cout << "Sortiran vektor so ASCII kodovi i datumot na ragjanje: ";
    for (auto it = asciiKodovi.begin(); it != asciiKodovi.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;

    string filename = BrojNaIndeks + ".Proekt3" + ".txt";
    ifstream input_file(filename);
    if (!input_file.is_open()) {
        ofstream output_file(filename);
        for (auto it = asciiKodovi.begin(); it != asciiKodovi.end(); it++)
        {
            output_file << *it << " ";
        }
        output_file.close();
    } else {
        input_file.close();
        ofstream output_file(filename, ios::app);
        for (auto it = datum.begin(); it != datum.end(); it++)
        {
            asciiKodovi.push_back(*it);
            output_file << *it << " ";
        }
        output_file.close();
    }
    return 0;
}
