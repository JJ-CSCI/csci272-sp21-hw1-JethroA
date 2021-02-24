#ifndef BINOMIAL_H
#define BINOMIAL_H
#include <iostream>
using namespace std;
 
 
class Binomial{
 private:
 float Coefficients{1.0};
 int Power{1};
 
public: 
Binomial(float x, int a, float y, int b);
 
int GetPower(int p);
float GetCoefficient(int c);
int SetPower(int s, int);
int Add (const Binomial);
void Multiply(float x);
void Multiply(float x, int a);
};
 
#endif
