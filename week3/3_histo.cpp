#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
   int l = 0;
   int n = 0;
   int in = 0;
   int max = 0;
   
   cin >> l;
   cin >> n;
   
   // int *arr = new int[n];
   int arrr[n] = {0};
   int histo[l] = {0};
   
   int counter = 0;
   while(cin >> in) {
      
      arrr[counter] = in;
      // cout << arrr[counter];
      if (in > max)
         max = in;

      // cout << max << endl;
      counter++;
      
      // if(cin.get() == '\n')
      //    break;
      if ((sizeof(arrr)/sizeof(arrr[0])) == counter)
         break;
   }
   
   double scale,k;
   // cout << "max : " << max << " & interval l: " << l << endl;
   scale = ceil((double)max/l);
   // cout << "scale : " << scale << endl;
   for (int i = 0; i < n; i++) {
      k = scale;
      for (int j = 0; j < l; j++) {
         // cout << "k: " << k << endl;
         // cout << "prøver at fitte: " << arrr[i] << endl;
         if (arrr[i] < k) {
            histo[j]++;
            break;
         } else{
            k += scale;
         }
      }
      if(i == n-1 && max%l==0) {
            // cout << "IN HERE";
            histo[l-1]++;
      }
      
   }
   
   k = scale;
   for (int i = 0; i < l; i++) {
      if (i == 0) {
         cout << "0: " << histo[i] << endl;
      } else {
         cout << scale << ": " << histo[i] << endl;
         scale += k;
      }
   }
   
   return 0;
}
