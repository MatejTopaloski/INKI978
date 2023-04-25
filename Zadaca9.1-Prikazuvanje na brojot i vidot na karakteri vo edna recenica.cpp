#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    string recenica;
    int lowercase = 0, uppercase = 0, digits = 0, special_chars = 0, length = 0;

    cout<<"Vnesi recenica: ";
    getline(cin, recenica);

    length = recenica.length();

    for (int i = 0; i < length; i++) {
        if (islower(recenica[i])) {
            lowercase++;
        } else if (isupper(recenica[i])) {
            uppercase++;
        } else if (isdigit(recenica[i])) {
            digits++;
        } else {
            special_chars++;
        }
    }

    cout<<"Mali bukvi: "<<lowercase<<endl;
    cout<<"Golemi bukvi: "<<uppercase<<endl;
    cout<<"Broevi: "<<digits<<endl;
    cout<<"Specijalni karakteri(spagaat i prazni mesta): "<<special_chars<<endl;
    cout<<"Recenicata ima "<<length<<" karakteri."<<endl;

    return 0;
}
