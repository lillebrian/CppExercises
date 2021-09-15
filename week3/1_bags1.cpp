#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main(int argc, char const * argv[]) {
   string s;
   int n = 0;
   int bag[1000] = {0};


   while (cin >> s >> n) {

      if (s == "add") {
         if (n < 0 || n > 1000) {
            continue;
         } else {
            if (bag[n] == 0) {
               bag[n] = 1;
            }
         }
      }

      if (s == "del") {
         bag[n] = 0;
      }

      if (s == "qry") {
         if (bag[n] == 1) {
            cout << "T";
         } else {
            cout << "F";
         }
      }
   }
}