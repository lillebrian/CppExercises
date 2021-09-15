#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   
   int n;
   cin >> n;
   
   float result = 0;
   for (int i = 0; i < n; i++) {
      float in;
      cin >> in;
      result = result + in; 
   }
   cout << result << endl;
   
    return 0;
}