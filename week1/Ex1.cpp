#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int number1;
    int number2;
    cin >> number1;
    cin >> number2;
    
    if (number1 > number2) {
        cout << number1 << " is bigger than " << number2 << endl;
    } else if (number1 < number2){
        cout << number1 <<  " is smaller than " << number2 << endl;
    } else if (number1 == number2) {
        cout << number1 <<  " is equal to " << number2 << endl;
    }
    
    return 0;
}