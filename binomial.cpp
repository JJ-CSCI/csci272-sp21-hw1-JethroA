#include "binomial.h"
using namespace std;
 
Binomial::Binomial(float x, int a, float y, int b){
 
if(a<1){
 Power = 1;
}
else
 Power= a;

if(y<1){
  Power = 1;
 }
 else
 Power = y;
 }

 
float Binomial::GetCoefficient(int c){

  if(Coefficients(int c)== Coefficients(1))
return Coefficients{1.0};

  
};
