#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
   int n;
   cin >> n;
   
   int result = 0;
   
   for (int i = 1; i <= n; i++)
   {
      result += i;
   }
   cout << result << endl;
   return 0;
}