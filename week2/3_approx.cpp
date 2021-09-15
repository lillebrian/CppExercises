#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

double pi(int n) {
   
   double result = 0;
   
   for (int i = 0; i < n; i++) {
      result += (pow(-1,i) / ((2*i)+1));      
   }
   
   return result*4;
}

int main(int argc, char const *argv[])
{
   int n = 0;
   cin >> n;
   cout << pi(n) << endl;
   
   
   return 0;
}


