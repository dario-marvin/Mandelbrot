#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>

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

void draw(double x_start, double x_fin, double y_start, double y_fin) {
	
	int width = 379; //number of characters fitting horizontally on my screen 
	//~ int width = 300; //number of characters fitting horizontally on my screen 
	int heigth = 98; //number of characters fitting vertically on my screen
	//~ int heigth = 70; //number of characters fitting vertically on my screen
	
	double dx = (x_fin - x_start)/(width-1);
	double dy = (y_fin - y_start)/(heigth-1);
	
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
}

void draw_deep(double x_start, double x_fin, double y_start, double y_fin) {
	
	int width = 379; //number of characters fitting horizontally on my screen 
	//~ int width = 300; //number of characters fitting horizontally on my screen 
	int heigth = 98; //number of characters fitting vertically on my screen
	//~ int heigth = 70; //number of characters fitting vertically on my screen
	
	double dx = (x_fin - x_start)/(width-1);
	double dy = (y_fin - y_start)/(heigth-1);
	
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
			else if (value >= 99) {cout << red << char_;}
			else if (value >= 98) {cout << l_red << char_;}
			else if (value >= 96) {cout << orange << char_;}
			else if (value >= 94) {cout << yellow << char_;}
			else if (value >= 92) {cout << l_green << char_;}
			else if (value >= 90) {cout << green << char_;}
			else if (value >= 85) {cout << l_cyan << char_;}
			else if (value >= 80) {cout << cyan << char_;}
			else if (value >= 75) {cout << l_blue << char_;}
			else if (value >= 70) {cout << blue << char_;}
			else if (value >= 60) {cout << magenta << char_;}
			else {cout << l_magenta << char_;}
			
			cout << "\033[0m";
		}
		cout << endl;
	}
}

int main() {
	
	//~ double center_x = -0.7746806106269039;
	//~ double center_y = -0.1374168856037867;
	//~ double iter = 31;
	//~ int color_threshold = 25;
	
	double center_x = -1.04082816210546;
	double center_y = 0.346341718848392;
	int iter = 83;
	int color_threshold = 65;
	
	double factor = 1.0;
	
	double x_start = center_x - 1.5*factor;
	double x_fin = center_x + 1.5*factor;
	double y_start = center_y - factor;
	double y_fin = center_y + factor;

	cout << "\033[2J\033[1;1H";
	draw(x_start, x_fin, y_start, y_fin);
	
	//~ std::this_thread::sleep_for(std::chrono::milliseconds(30));
	
	for (int i = 0; i < iter; i++) {
		factor = factor / 1.3;
	
		x_start = center_x - 1.5*factor;
		x_fin = center_x + 1.5*factor;
		y_start = center_y - factor;
		y_fin = center_y + factor;
		
		if (i<color_threshold) {
			cout << "\033[2J\033[1;1H";
			draw(x_start, x_fin, y_start, y_fin);
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
		else {
			cout << "\033[2J\033[1;1H";
			draw_deep(x_start, x_fin, y_start, y_fin);
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
	}

	factor = factor / 1.5;
	
	x_start = center_x - 1.5*factor;
	x_fin = center_x + 1.5*factor;
	y_start = center_y - factor;
	y_fin = center_y + factor;
	cout << "\033[2J\033[1;1H";
	draw_deep(x_start, x_fin, y_start, y_fin);
	
	return 0;
} 
