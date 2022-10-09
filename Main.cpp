#include <iostream>
#include "Lasagna.h";

using namespace std;

int main() {
	int minutesInOven;
	int lasagnaLayers;

	Lasagna lasagna;

	cout << "How much time this lasagna is in the oven? " << endl;
	cin >> minutesInOven;
	lasagna.setMinutesInOven(minutesInOven);

	cout << "The remaining time in oven is: " << lasagna.remainingMinutesInOven(minutesInOven) << endl;

	cout << "How many layers does this lasagna will have? " << endl;
	cin >> lasagnaLayers;
	lasagna.setNumOfLasagnaLayers(lasagnaLayers);

	cout << "Total time of preparation is: " << lasagna.totalTimeInMinutes(lasagnaLayers, minutesInOven);
	
	return 0;
}