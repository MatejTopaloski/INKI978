#include <iostream>
#include <string>
#include <vector>
#include <random>
// Matej Topaloski INKI978

using namespace std;

const int NUM_SUITS = 4;
const int NUM_RANKS = 13;
const int NUM_JOKERS = 2;

struct Card {
    string suit;
    string rank;
};

// Se kreira spilot na karti
vector<Card> createDeck() {
    vector<Card> deck;
    string suits[NUM_SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[NUM_RANKS] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    for (int r = 0; r < NUM_RANKS; r++) {
        for (int s = 0; s < NUM_SUITS; s++) {
            Card c = {suits[s], ranks[r]};
            deck.push_back(c);
        }
    }

    Card blackJoker = {"Black", "Joker"};
    deck.push_back(blackJoker);
    Card redJoker = {"Red", "Joker"};
    deck.push_back(redJoker);

    return deck;
}


// Funkcija koja se koristi za pecatenje na spilot
void printDeck(const vector<Card>& deck) {
    for (const auto& card : deck) {
        cout << card.rank << " of " << card.suit << endl;
    }
}

// Funkcija koja se koristi za mesanje na spilot
void shuffleDeck(vector<Card>& deck) {
    random_device rd;
    mt19937 rng(rd());
    for (int i = 0; i < 100; i++) {
        int index1 = rng() % deck.size();
        int index2 = rng() % deck.size();
        swap(deck[index1], deck[index2]);
    }
}

// Funkcija koja se koristi za da se vrsi delenje na kartite na 4 igraci
void dealCards(const vector<Card>& deck) {
    const int NUM_CARDS_PER_PLAYER = deck.size() / 4;
    int cardIndex = 0;

    for (int p = 1; p <= 4; p++) {
        cout << "Igrac " << p << ":" << endl;
        for (int c = 0; c < NUM_CARDS_PER_PLAYER; c++) {
            cout << deck[cardIndex].rank << " of " << deck[cardIndex].suit << "\n";
            cardIndex++;
        }
        cout << endl;
    }
}

int main() {
    vector<Card> deck = createDeck();
    cout << "Sortiran spil:" << endl;
    printDeck(deck);
    shuffleDeck(deck);
    cout<<endl;
    cout << "\nIzmesan spil:" << endl;
    printDeck(deck);
    cout<<endl;
    cout << "\nDelenje na kartite na igracite:" << endl;
    dealCards(deck);
    cout<<endl;

    return 0;
}
