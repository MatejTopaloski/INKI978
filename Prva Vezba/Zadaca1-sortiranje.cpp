// A C++ Program to implement Odd-Even / Brick Sort
//Ovoj princip na sortiranje e povrzan so bubble nacinot na sortiranje
//Toj funkcionira taka sto gi sporeduva parnite so neparnite indeksi od nizata
//dokolku brojot sto e na neparen indeks e pogolem od brojot sto e na paren indeks se vrsi nivna zamena na mestata
//prvata faza zapocnuva so parovi na indeksi kako 1 i 2, 3 i 4, 5 i 6.
//vtorata faza gi zema indeksite na nizata vo parovi kako: 2 i 3, 4 i 5.
//ovie dve fazi se povtoruvaat se do togas koga brojot koj se naogja na prviot zemen indeks e pogolem od brojot na vtoriot zemen indeks
//vo momentot koga nema da e pogolem, nizata veke se klasificira kako sortirana
#include<bits/stdc++.h>
using namespace std;

// A function to sort the algorithm using Odd Even sort
void oddEvenSort(int arr[], int n)
{
    bool isSorted = false; // Initially array is unsorted

    while (!isSorted)
    {
        isSorted = true;

        // Perform Bubble sort on odd indexed element
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                isSorted = false;
              }
        }

        // Perform Bubble sort on even indexed element
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                isSorted = false;
            }
        }
    }

    return;
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
   for (int i=0; i < n; i++)
       cout << arr[i] << " ";
   cout << "\n";
}

// Driver program to test above functions.
int main()
{
    int arr[23] = {(int)'M', (int)'a', (int)'t', (int)'e', (int)'j', (int)' ', (int)'T', (int)'o', (int)'p', (int)'a', (int)'l', (int)'o',  (int)'s', (int)'k', (int)'i',  (int)' ', (int)'I', (int)'N', (int)'K', (int)'I', (int)'9', (int)'7', (int)'8',};
    int n = sizeof(arr)/sizeof(arr[0]);

    oddEvenSort(arr, n);
    printArray(arr, n);

    return (0);
}
