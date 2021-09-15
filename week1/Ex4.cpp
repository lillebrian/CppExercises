#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double x;
    double y;
    double z;
    cin >> x;
    cin >> y;
    cin >> z;
    
    double result = ((x+y) - z);
    cout << result << endl;
    return 0;
}