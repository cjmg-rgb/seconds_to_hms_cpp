#include <iostream>

int get_hour(int);
int get_minutes(int);
int get_seconds_remainder(int);
void print_converted_time(int, int, int);
void calculate_time(int);

int main() {

	int seconds = 78234;
	
	calculate_time(seconds);

	return 0;
}

int get_hour(int secs) { return secs / 3600; }
int get_minutes(int secs) { return (secs / 60) % 60; }
int get_seconds_remainder(int secs) { return secs % 60; }
void print_converted_time(int hrs, int mins, int r_secs) { std::cout << "Hours: " << hrs << "\nMinutes: " << mins << "\nSecs: " << r_secs << "\n"; }

void calculate_time(int seconds) {
	int hours = get_hour(seconds);
	int minutes = get_minutes(seconds);
	int remainder_seconds = get_seconds_remainder(seconds);

	print_converted_time(hours, minutes, remainder_seconds);
}