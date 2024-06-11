// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
#include "Temperature.h"
#include "Humidity.h"
#include "MeasurementDb.h"
// Main program
int main()
{
    cout << "Exam-2019WiSe started." << endl << endl;

    uint16_t tempTimestamp = Measurement::toTimestamp(6, 0);
    Temperature measurement1(tempTimestamp, -3.0);

    uint16_t humidityTimestamp = Measurement::toTimestamp(7, 30);
    Humidity measurement2(humidityTimestamp, 65.0);


    cout << measurement1.toString() << endl;
    cout << measurement2.toString() << endl;

    cout << measurement1 << endl;
    cout << measurement2 << endl;

    uint16_t tempTimestamp1 = Measurement::toTimestamp(10, 5);
    Temperature kitchenTemp1(tempTimestamp1, 20.0);

    uint16_t tempTimestamp2 = Measurement::toTimestamp(12, 0);
    Temperature kitchenTemp2(tempTimestamp2, 22.0);

    uint16_t humidityTimestamp1 = Measurement::toTimestamp(8, 0);
    Humidity bathHumidity1(humidityTimestamp1, 80.0);

    MeasurementDb db;
    db.addMeasurement("Kitchen", std::make_shared<Temperature>(kitchenTemp1));
    db.addMeasurement("Kitchen", std::make_shared<Temperature>(kitchenTemp2));
    db.addMeasurement("Bath", std::make_shared<Humidity>(bathHumidity1));

    cout << "Content of database:" << endl;
    db.print();

    return 0;
}
