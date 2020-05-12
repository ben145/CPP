#include <iostream>

double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main()
{
	
	double x = 0;
	std::cout << "Enter a possible temperature: ";
	std::cin >> x;
	std::cout << "\n";
	std::cout << "Assuming " << x << " is Celsius...\n";
	std::cout << "Fahrenheit: " << celsiusToFahrenheit(x) << "\t" << "Kelvin: " << celsiusToKelvin(x) << "\n\n";
	std::cout << "Assuming " << x << " is Fahrenheit...\n";
	std::cout << "Celsius: " << fahrenheitToCelsius(x) << "\t" << "Kelvin: " << fahrenheitToKelvin(x) << "\n\n";
	std::cout << "Assuming " << x << " is Kelvin...\n";
	std::cout << "Fahrenheit: " << kelvinToFahrenheit(x) << "\t" << "Celsius: " << kelvinToCelsius(x) << "\n\n";

	return 0;
}

double celsiusToFahrenheit(double celsius) {
	return (celsius * 9 / 5 + 32);
}

double celsiusToKelvin(double celsius) {
	return celsius + 273;
}

double fahrenheitToCelsius(double fahrenheit) {
	return ((fahrenheit - 32) * 5 / 9);
}

double fahrenheitToKelvin(double fahrenheit) {
	return celsiusToKelvin(fahrenheitToCelsius(fahrenheit));
}

double kelvinToCelsius(double kelvin) {
	return kelvin - 273;
}

double kelvinToFahrenheit(double kelvin) {
	return celsiusToFahrenheit(kelvinToCelsius(kelvin));
}