#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int DECK_SIZE = 54; //Goleminata ne spilot se zgolemuva za 2 poradi dodadenite dzokeri
const int SUIT_SIZE = 13;

string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};//vidovite na karti
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};//site broevi na kartite

void shuffleDeck(string deck[], int size) {//funkcija za mesanje na spilot
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() {
    string deck[DECK_SIZE];
    int index = 0;

    for (int i = 0; i < 4; i++) {//for ciklus koj go podreduva spilot po red bez da bide izmesan i taka se zacuvuva vo toj moment
        for (int j = 0; j < SUIT_SIZE; j++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }

    deck[52] = "Red Joker";//se dodavaat dva dzokeri crven i crn vo spilot
    deck[53] = "Black Joker";

    srand(time(NULL)); //generator na broevi

    string originalDeck[DECK_SIZE];// se inicijalizira originalniot spil vo nova promenliva so cel da moze da bide ispecaten
    for (int i = 0; i < DECK_SIZE; i++) {
        originalDeck[i] = deck[i];
    }

    shuffleDeck(deck, DECK_SIZE);//se upotrebuva funkcijata za mesanje na spilot

    cout<<"Original deck:"<<endl;//se pecati originalniot spil
    cout<<endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout<<originalDeck[i]<<endl;
    }

    cout<<endl<<"Shuffled deck:"<<endl;//se pecati izmesaniot spil
    cout<<endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout<<deck[i]<<endl;
    }

    return 0;
}
