#include <iomanip>
#include <iostream>
#include <limits>

int main() {
	long long kontostandCent = 0;
	int auswahl;

	while (true) {
		std::cout << "\n1: Kontostand anzeigen\n";
		std::cout << "0: Beenden\n";
		std::cout << "Auswahl: ":

		if (!(std::cin >> auswahl)) {
			if (std::cin.eof()) {
				break;
			}

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max()), '\n');
		std::cout << "Bitte eine Zahl eingeben.\n";
		continue;
		}
		if (auswahl == 1) {
			std::cout << "Kontostand: "
				<< kontostandCent / 100 << ","
				<< std::setfill('0') << std::setw(2)
				<< kontostandCEnt % 100
				<< " EUR\n";
		}
		else if (auswahl == 0) {
			break;
		}
		else {
			std::cout << "Ungueltige Auswahl.\n"
		}
	}
	return 0;
}