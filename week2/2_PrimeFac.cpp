#include <iostream>
#include <math.h>
#include <string>


using namespace std;

int main(int argc, char const *argv[])
{
   int prime;
   int i = 2;
   cin >> prime;   
   
   while (prime > 1) {
   
      if(prime%i == 0) {
         cout << i;
         prime = prime/i;
         if(prime != 1) {
            cout << " * ";
         }
         
      } else if (prime%i != 0) {
         i++;
      }
      
   }
   cout << endl;
   
   return 0;
}