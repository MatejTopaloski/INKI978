#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int num = rand() % 100 + 1;

    int guess, obidi = 0;
    do {
        cout << "Vnesi go tvojot obid: ";
        cin >> guess;
        obidi++;

        if (guess>num) {
            cout<<"Baraniot broj e pomal"<<endl;
            cout<<endl;
        } else if (guess<num) {
            cout<<"Baraniot broj e pogolem"<<endl;
            cout<<endl;
        } else {
            cout<<"Go pogodivte brojot. Potrebni vi bea "<<obidi<<" obidi."<<endl;
            cout<<endl;
        }
    } while (guess!=num);

    return 0;
}
