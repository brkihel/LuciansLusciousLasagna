#include "Lasagna.h"

void Lasagna::initVariables(){
	this->minutesInOven = 0;
	this->remainingMinutes = 0;
	this->numOfLasagnaLayers = 0;
	this->minutesOfPreparation = 0;
}

Lasagna::Lasagna(){
	initVariables();
}

Lasagna::~Lasagna(){
}

int Lasagna::remainingMinutesInOven(int minutesInOven){
	return this->EXPECTED_MINUTES_IN_OVEN - this->minutesInOven;
}

int Lasagna::preparationTimeInMinutes(int numOfLasagnaLayers){
	return this->PERPARATION_MINUTES_PER_LAYER * numOfLasagnaLayers;
}

int Lasagna::totalTimeInMinutes(int numOfLasagnaLayers, int minutesInOven)
{
	return preparationTimeInMinutes(numOfLasagnaLayers) + minutesInOven;
}
