// Matej Topaloski INKI978
//Ovaa programa pretstavuva igra kade sto se frlaat dve kocki a potoa se zbira nivnata vrednost i se odlucuva koj e pobednik kompjuterot ili korisnikot
#include <iostream>
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;


void one();
void two();
void three();
void four();
void five();
void six();
//Declare Functions used
int main()
{
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;
//Declare Variables
srand(time(NULL));
while (letter != 'q')
{
cout << "Your Score: " << score << endl;
cout << "computer's Score: " << compScore << endl << endl;
cout << "Press r to roll or q to quit: ";
cin >> letter;
num = 1 + rand()%6;
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;
//sto se sluciva so redovite 32 do 36 i koi se vrednostite na promenlivite ?
//32 linija gi dava poenite na pobedeni rundi na korisnikot
//33 linija gi dava poenite na pobedeni rundi na kompjuterot
//34 linija korisnikot bira dali ke igra nova runda ili ke ja prestane da igra
//35 linija se vnesuva pogorniot izbor
//36 linija so pomos na rand()%6 se generiraat vrednosti od 0-5, a so dodavanjeto na 1 se pomestuva taa granica na 1-6
sum = num + num2;
compSum = compNum + compNum2;

//Calculate Sums

if (letter == 'q')
break;
if (letter != 'r')
{
system("cls");
continue;
}

switch (num)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default: //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ? Funkcijata im e da ne dojde do greska vo toj del od kodot i ne se neophodni
cout << "Error...";
break;
} //end switch

switch (num2)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default:// //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
cout << "Error...";
break;
} //end switch

cout << endl << "Yours: " << num << ", " << num2 << endl;
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";

//Display dice and numbers

if (sum > compSum)
{
cout << "You won!!" << endl << endl;
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;
}

//shto rabotat naredbite 119 i 120 ?

system("pause"); // Programata e pauzirana se dodeka korisnikot ne pritisne nesto
system("cls"); // Konzolata kade sto se izvrsuva programata se brisi


}
return 0;
}

void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
