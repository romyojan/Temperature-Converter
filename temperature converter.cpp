// C++ Program to Converter
#include <iostream>
using namespace std;

int main() {
  float inputCelsius, inputFahrenheit, inputKelvin;
  int selectedConverter;
  //ask user to choose
  cout << "Available Converter:" << endl;
  cout << "\nEnter 1 to Select Celcius to Fahrenheit" << endl;
  cout << "\nEnter 2 to Select Celsius to Kelvin" << endl;
  cout << "\nEnter 3 to Select Fahrenheit to Kelvin" << endl;
  cout << "\nEnter 4 to Select Fahrenheit to Celsius" << endl;
  cout << "\nEnter 5 to Select Kelvin to Celsius" << endl;
  cout << "\nEnter 6 to Select Kelvin to Fahrenheit" << endl;
  cin >> selectedConverter;
  switch (selectedConverter) {
    
    //Celsius To Fahrenheit
    case 1:
    //ask user to input celsius
    cout << "Enter Celcius:" << endl;
    cin >> inputCelsius;
    //convert celsius to fahrenheit
    inputFahrenheit = (inputCelsius * 9 / 5) + 32;
    //display result
    cout << inputCelsius << "°C is equivalent to " << inputFahrenheit << "°F" << endl;
    break;
    
    //Celsius To Kelvin
    case 2:
    //ask user to input celsius
    cout << "Enter Celcius:" << endl;
    cin >> inputCelsius;
    //convert celsius to kelvin
    inputKelvin = inputCelsius + 273.15;
    //display result
    cout << inputCelsius << "°C is equivalent to " << inputKelvin << "K" << endl;
    break;
        
    //Fahrenheit To Kelvin
    case 3:
    //ask user to input fahrenheit
    cout << "Enter Fahrenheit:" << endl;
    cin >> inputFahrenheit;
    //convert fahrenheit to celsius
    inputKelvin = (inputFahrenheit - 32) * 5 / 9 + 273.15;
    //display result
    cout << inputFahrenheit << "°F is equivalent to " << inputKelvin << "K" << endl;
    break;
        
    //Fahrenheit To Celsius
    case 4:
    //ask user to input fahrenheit
    cout << "Enter Fahrenheit:" << endl;
    cin >> inputFahrenheit;
    //convert fahrenheit to celsius
    inputCelsius = (inputFahrenheit - 32) * 5 / 9;
    //display result
    cout << inputFahrenheit << "°F is equivalent to " << inputCelsius << "°C" << endl;
    break;
    
    //Kelvin To Celsius
    case 5:
    //ask user to input kelvin
    cout << "Enter Kelvin:" << endl;
    cin >> inputKelvin;
    //convert kelvin to celsius
    inputCelsius = inputKelvin - 273.15;
    //display result
    cout << inputKelvin << "K is equivalent to " << inputCelsius << "°C" << endl;
    break;
    
    //Kelvin To Fahrenheit
    case 6:
    //ask user to input kelvin
    cout << "Enter Kelvin:" << endl;
    cin >> inputKelvin;
    //convert kelvin to fahrenheit
    inputFahrenheit = (inputKelvin - 273.15) * 9 / 5 + 32;
    //display result
    cout << inputKelvin << "K is equivalent to " << inputFahrenheit << "°F" << endl;
    break;
    
    default:
    cout << "invalid input, please refer to the available converter";
  }
 return 0;
}