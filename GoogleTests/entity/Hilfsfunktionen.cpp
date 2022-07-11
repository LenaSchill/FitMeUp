#include "Hilfsfunktionen.h"
#include "user.h"
#include <ctime>
#include <string>
#include "customer.h"

int getDate() {
    time_t date = time(NULL);
    struct tm dateLokal = *localtime(&date);
    int aktDate = dateLokal.tm_mday + ((dateLokal.tm_mon + 1) * 100) + ((dateLokal.tm_year + 1900) * 10000);
    return aktDate;
}

int getDayBefore(int date) {
	int j = date / 10000;
	int m = (date - j*10000) / 100;
	int d = (date - j*10000 - m*100);

	if (d > 1) {
		d = d - 1;
	}
	else if (m > 1) {
		m = m - 1;
		if (m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
			d = 31;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			d = 30;
		}
		else if (m == 2) {
			bool sJahr = false;
			if (j % 400 == 0) {
				sJahr = true;
			}
			else if (j % 100 == 0) {
				sJahr = false;
			}
			else if (j % 4 == 0) {
				sJahr = true;
			}
			if (sJahr == true) {
				d = 29;
			}
			else {
				d = 28;
			}
		}
	}
	else {
		d = 31;
		m = 12;
		j = j - 1;
	}

	return d + (m * 100) + (j * 10000);
}


user::user()
{

}

customer::customer()
{

}
