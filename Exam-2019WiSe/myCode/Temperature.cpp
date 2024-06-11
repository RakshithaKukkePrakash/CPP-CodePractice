/*
 * Temperature.cpp
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#include "Temperature.h"


Temperature::Temperature(uint16_t timestamp, float temperature):Measurement(timestamp),temperature(temperature)
{
}

float Temperature::getTemperature() const
{
	return temperature;
}

std::string Temperature::toString() const
{
	return "Temperature: " + std::to_string(temperature) + "°C";
}

Temperature::~Temperature()
{
}

