/*
 * MeasurementDb.h
 *
 *  Created on: 09-Jun-2024
 *      Author: acer
 */

#ifndef MEASUREMENTDB_H_
#define MEASUREMENTDB_H_
#include <cstdint>
#include <iostream>
#include <map>
#include <vector>
#include <memory>
#include "Measurement.h"
class MeasurementDb
{
	 std::map<std::string, std::vector<std::shared_ptr<Measurement>>> data;
public:
	MeasurementDb();
	void addMeasurement(const std::string& location, std::shared_ptr<Measurement> measurement);
	void print();
	virtual ~MeasurementDb();
};

#endif /* MEASUREMENTDB_H_ */
