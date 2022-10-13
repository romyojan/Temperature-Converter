// C++ Program to Converter
#include <iostream>
using namespace std;

int main() {
  float inputCelsius, inputFahrenheit;
  int selectedConverter;
  //ask user to choose
  cout << "Available Converter:" << endl;
  cout << "\nEnter 1 to Select Celcius to Fahrenheit" << endl;
  cout << "\nEnter 2 to Select Fahrenheit to Celcius" << endl;
  cin >> selectedConverter;
  switch (selectedConverter) {
    case 1:
    //ask user to input celsius
    cout << "Enter Celcius:" << endl;
    cin >> inputCelsius;
    //convert celsius to fahrenheit
    inputFahrenheit = (inputCelsius * 9 / 5) + 32;
    //display result
    cout << inputCelsius << "°C is equivalent to " << inputFahrenheit << "°F" << endl;
    break;
    
    case 2:
    //ask user to input fahrenheit
    cout << "Enter Fahrenheit:" << endl;
    cin >> inputFahrenheit;
    //convert fahrenheit to celsius
    inputCelsius = (inputFahrenheit - 32) * 5 / 9;
    //display result
    cout << inputFahrenheit << "°F is equivalent to " << inputCelsius << "°C" << endl;
 
    default:
    cout << "invalid input, please refer to the available converter";
  }
 return 0;
}