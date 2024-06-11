/*
 * Measurement.h
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#ifndef MEASUREMENT_H_
#define MEASUREMENT_H_
#include <cstdint>
#include <iostream>
#include <ostream>
class Measurement
{
	uint16_t timestamp;
public:
	Measurement(uint16_t timestamp);
	static uint16_t toTimestamp(int hour, int minute);
	static std::string toTimeOfDay(uint16_t timestamp);
	long getTimestamp() const;
	virtual std::string toString() const = 0;
	virtual ~Measurement();
};
std::ostream& operator<<(std::ostream& lhs, Measurement& rhs);

#endif /* MEASUREMENT_H_ */
