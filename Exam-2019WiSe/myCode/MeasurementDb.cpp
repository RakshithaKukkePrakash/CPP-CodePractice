/*
 * MeasurementDb.cpp
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#include "MeasurementDb.h"

using namespace std;

MeasurementDb::MeasurementDb()
{
}

void MeasurementDb::addMeasurement(const std::string &location,
		std::shared_ptr<Measurement> measurement)
{
	data[location].push_back(measurement);
}

void MeasurementDb::print()
{
    for (const auto& entry : data)
    {
        for (const auto& measurement : entry.second)
        {
            std::cout << entry.first << ": " << *measurement << std::endl;
        }
    }
}

MeasurementDb::~MeasurementDb()
{
}

