#pragma once

#include <iostream>

class Lasagna{
private:
	//Constants
	const int EXPECTED_MINUTES_IN_OVEN = 40;
	const int PERPARATION_MINUTES_PER_LAYER = 2;
	
	//Variables
	int minutesInOven;
	int remainingMinutes;
	int numOfLasagnaLayers;
	int minutesOfPreparation;

	//Private function
	void initVariables();

public:
	//Constructor and destructor
	Lasagna();
	virtual ~Lasagna();

	//Modifiers
	void setMinutesInOven(int minutesInOven) {
		this->minutesInOven = minutesInOven;
	}

	void setNumOfLasagnaLayers(int numOfLasagnaLayers) {
		this->numOfLasagnaLayers = numOfLasagnaLayers;
	}
	
	//Functions
	int remainingMinutesInOven(int minutesInOven);
	int preparationTimeInMinutes(int numOfLasagnaLayers);
	int totalTimeInMinutes(int numOfLasagnaLayers, int minutesInOven);

};

