/*
 * Humidity.h
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#ifndef HUMIDITY_H_
#define HUMIDITY_H_
#include <iostream>
#include <cstdint>
#include "Measurement.h"
class Humidity:public Measurement
{
	float humidity;
public:
	Humidity(uint16_t timestamp, float humidity);
	float getHumidity() const;
	std::string toString() const;
	virtual ~Humidity();
};

#endif /* HUMIDITY_H_ */
