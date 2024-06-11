/*
 * Temperature.h
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_
#include <iostream>
#include <cstdint>
#include "Measurement.h"
class Temperature: public Measurement
{
	float temperature;
public:
	Temperature(uint16_t timestamp, float temperature);
	float getTemperature() const;
	std::string toString() const;
	virtual ~Temperature();
};

#endif /* TEMPERATURE_H_ */
