#include <iostream>
using namespace std;

typedef double (*Calcfunc)(double, double);

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double, Calcfunc);

int main() {
    double (*calc)(double, double) = NULL;
    int n1 = 10, n2 = 5;
    char op = '-';

    switch (op)
    {
    case '+': 
        calc = Add;
        break;
    case '-': 
        calc = Sub;
        break;
    case '*': 
        calc = Mul;
        break;
    case '/': 
        calc = Div;
        break;
    }

    cout << Calculator(n1, n2, calc) << endl;
    return 0;
}

double Add(double n1, double n2) { return n1 + n2; }
double Sub(double n1, double n2) { return n1 - n2; }
double Mul(double n1, double n2) { return n1 * n2; }
double Div(double n1, double n2) { return n1 / n2; }
double Calculator(double n1, double n2, Calcfunc func1) { return func1(n1, n2); }

