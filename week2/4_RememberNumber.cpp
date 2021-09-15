#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;


int main(int argc, char const *argv[])
{
   int numbers [1000] = {0};
   int spec = 1;
   

   while(true) {
      
      int result = 0;
   
      cin >> spec;
      if(spec == 0) {
         break;
      }
      
      for (int i = 0; i < sizeof(numbers); i++) {
         if(numbers[i] == spec) {
            result++;
         }
         if(numbers[i] == 0) {
            numbers[i] = spec;
            break;
         }
      }
      
      cout << result << endl;

   }
   
   return 0;
}




