#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int mandelbrot(double real, double imag) {
	int limit = 100;
	double zReal = real;
	double zImag = imag;

	for (int i = 0; i < limit; ++i) {
		double r2 = zReal * zReal;
		double i2 = zImag * zImag;
		
		if (r2 + i2 > 4.0) return i;

		zImag = 2.0 * zReal * zImag + imag;
		zReal = r2 - i2 + real;
	}
	return limit;
}

int main() {
	
	int width = 379; //number of characters fitting horizontally on my screen 
	int heigth = 98; //number of characters fitting vertically on my screen
		
	double x_start = -2.0;
	double x_fin = 1.0;
	double y_start = -1.0;
	double y_fin = 1.0;
	
	//~ double x_start = -0.25;
	//~ double x_fin = 0.05;
	//~ double y_start = -0.95;
	//~ double y_fin = -0.75;
	
	//~ double x_start = -0.13;
	//~ double x_fin = -0.085;
	//~ double y_start = -0.91;
	//~ double y_fin = -0.88;
	
	double dx = (x_fin - x_start)/(width - 1);
	double dy = (y_fin - y_start)/(heigth - 1);

	string char_ = "\u2588";

	string black = "\033[22;30m";
	string red = "\033[22;31m";
	string l_red = "\033[01;31m";
	string green = "\033[22;32m";
	string l_green = "\033[01;32m";
	string orange = "\033[22;33m";
	string yellow = "\033[01;33m";
	string blue = "\033[22;34m";
	string l_blue = "\033[01;34m";
	string magenta = "\033[22;35m";
	string l_magenta = "\033[01;35m";
	string cyan = "\033[22;36m";
	string l_cyan = "\033[01;36m";
	string gray = "\033[22;37m";
	string white = "\033[01;37m";

	for (int i = 0; i < heigth; i++) {
		for (int j = 0; j < width; j++) {
			
			double x = x_start + j*dx; // current real value
			double y = y_fin - i*dy; // current imaginary value
			
			int value = mandelbrot(x,y);
			
			if (value == 100) {cout << " ";}
			else if (value > 90) {cout << red << char_;}
			else if (value > 70) {cout << l_red << char_;}
			else if (value > 50) {cout << orange << char_;}
			else if (value > 30) {cout << yellow << char_;}
			else if (value > 20) {cout << l_green << char_;}
			else if (value > 10) {cout << green << char_;}
			else if (value > 5) {cout << l_cyan << char_;}
			else if (value > 4) {cout << cyan << char_;}
			else if (value > 3) {cout << l_blue << char_;}
			else if (value > 2) {cout << blue << char_;}
			else if (value > 1) {cout << magenta << char_;}
			else {cout << l_magenta << char_;}
			
			cout << "\033[0m";
		}
		cout << endl;
	}

	return 0;
}
