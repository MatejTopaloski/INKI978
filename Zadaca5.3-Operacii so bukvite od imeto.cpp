#include <iostream>
#include <cmath>
//Matej Topaloski INKI978
using namespace std;

int Odzemanje(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return *a - *b;
}

int Sobiranje(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return *a + *b;
}

float Delenje(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return static_cast<float>(*a) / static_cast<float>(*b);
}

double Stepen(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return pow(*a, *b);
}

void Presmetka(void *result, const void *num1, const void *num2, int (*func)(const void *, const void *))
{
    int *r = static_cast<int *>(result);
    *r = (*func)(num1, num2);
}

void Presmetka(void *result, const void *num1, const void *num2, float (*func)(const void *, const void *))
{
    float *r = static_cast<float *>(result);
    *r = (*func)(num1, num2);
}

void Presmetka(void *result, const void *num1, const void *num2, double (*func)(const void *, const void *))
{
    double *r = static_cast<double *>(result);
    *r = (*func)(num1, num2);
}

int main()
{
    int M = (int)'M', T = (int)'T';
    int result;
    float fresult;
    double dresult;

    Presmetka(&result, &M, &T, &Sobiranje);
    cout << M << " + " << T << " = " << result <<endl;

    Presmetka(&result, &M, &T, &Odzemanje);
    cout << M << " - " << T << " = " << result <<endl;

    Presmetka(&fresult, &M, &T, &Delenje);
    cout << M << " / " << T << " = " << fresult <<endl;

    Presmetka(&dresult, &M, &T, &Stepen);
    cout << M << " ^ " << T << " = " << dresult <<endl;
}
