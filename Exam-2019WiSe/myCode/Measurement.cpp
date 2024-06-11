/*
 * Measurement.cpp
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#include "Measurement.h"


Measurement::Measurement(uint16_t timestamp): timestamp{timestamp}
{
}

uint16_t Measurement::toTimestamp(int hour, int minute)
{
	if((hour<0 || hour>23) && (minute<0 || minute >59)){
		throw std::invalid_argument("Parameter out of range");
	}
	else return (hour*60 + minute);
}

std::string Measurement::toTimeOfDay(uint16_t timestamp)
{
	uint16_t hour = timestamp/60;
	uint16_t minutes = timestamp % 60;
	std::string s_hour = (hour < 10) ? "0" + std::to_string(hour) : std::to_string(hour);
    std::string s_minutes = (minutes < 10) ? "0" + std::to_string(minutes) : std::to_string(minutes);
	return s_hour+ ":"+s_minutes;
}

long Measurement::getTimestamp() const
{
	return timestamp;
}

Measurement::~Measurement()
{
	// TODO Auto-generated destructor stub
}

std::ostream& operator <<(std::ostream &lhs, Measurement &rhs)
{
	lhs << rhs.toTimeOfDay(rhs.getTimestamp()) << " " << rhs.toString();

	return lhs;
}
