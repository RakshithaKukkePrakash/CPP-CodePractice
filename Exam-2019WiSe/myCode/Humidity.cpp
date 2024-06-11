/*
 * Humidity.cpp
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#include "Humidity.h"


Humidity::Humidity(uint16_t timestamp, float humidity): Measurement(timestamp), humidity(humidity)
{
}

float Humidity::getHumidity() const
{
	return humidity;
}

std::string Humidity::toString() const
{
	return ("Humidity: " + std::to_string(humidity) +"%");
}

Humidity::~Humidity()
{
}

