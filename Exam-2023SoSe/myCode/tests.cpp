#include <iostream>
#include <cstdlib>
#include <memory>

using namespace std;

#include "TestSensor.h"
#include "LinearAdjuster.h"
#include "TableBasedAdjuster.h"
#include "SensorNetwork.h"
#include "DuplicateSensorName.h"

/**
 * Outputs the failedMessage on the console if condition is false.
 *
 * @param condition the condition
 * @param failedMessage the message
 */
void assertTrue(bool condition, string failedMessage) {
    if (!condition) {
        cout << failedMessage << endl;
    }
}

/**
 * Tests for the adjustor classes. (12 points)
 */
void adjusterTests() {

    /*
     * Values for subsequent tests.
     */
    float testValues[] = { -10, -1, 0, 1, 10 };

    /*
     * (1) Using the test values given above as samples, assert that a
     * NullAdjustor's adjust method returns the argument's value
     * unchanged.
     */
    NullAdjuster nullAdg;
    for(int i = 0;i< static_cast<int>(sizeof(testValues) / sizeof(testValues[0])); i++)
    {

        assertTrue(testValues[i] == nullAdg.adjust(testValues[i]), "Assert Failed 1");
    }

    /*
     * (2) Using the test values given above as samples, assert that a
     * TableBasedAdjustor with a single breakpoint (0,0) returns
     * the same values as a NullAdjustor.
     */
    TableBasedAdjuster tAdj;
    tAdj.addBreakpoint(0,0);
    assertTrue(tAdj.adjust(0) == nullAdg.adjust(0), "Assert Failed 2");



    /*
     * (3) Using the test values given above as samples, assert that a
     * TableBasedAdjustor with breakpoints (-100,-110), (0,0)
     * and (100,90) returns the given expected values.
     *
     * Remember (from your basic C/C++ courses) that floating
     * point calculations do not always yield exact results
     * (rounding errors due to using the binary system).
     * Take this into account when checking the result.
     */
    float expected[] = { -11, -1.1, 0, 0.9, 9 };
    tAdj.addBreakpoint(0,0);
    tAdj.addBreakpoint(-100,-110);
    tAdj.addBreakpoint(100,90);
    for(int i= 0; i<5; i++){
        float val = tAdj.adjust(testValues[i]);
        float exp = expected[i];
        float epsilon = 0.001;
        assertTrue(abs(val-exp) < epsilon, "Assert Failed 3");

    }


}

/**
 * Tests for the sensor classes. (12 points)
 */
void sensorTests () {

    /*
     * Values for subsequent tests.
     */
    float testValues[] = { -10, -1, 0, 1, 10 };

    /*
     * (1) Using a TestSensor and the test values given above as samples,
     * assert that a (test) sensor with a NullAdjustor returns the raw
     * readings of a sensor as readings.
     */
    std::shared_ptr<Adjuster> nullAdj = std::make_shared<NullAdjuster>();
    TestSensor ts("Snull", nullAdj);
    for(int i = 0; i< 5; i++){
        ts.setRawReading(testValues[i]);
        assertTrue(ts.reading() ==  testValues[i], "Failed assert Sensor 1");
    }


    /*
     * (2) Using a TestSensor and the test values given above as samples,
     * assert that a (test) sensor with a LinearAdjustor returns the
     * expected readings. Test with 10 differently configured
     * LinearAdjustors for each test value for exhaustive testing
     * (50 "assertTrue" invocations in total).
     */

    for(int i= 0;i<5;i++){
        for(int s= 0;s<10;s++){
            std::shared_ptr<Adjuster> linAdj =
                    std::shared_ptr<LinearAdjuster>(new LinearAdjuster(1, i));
            TestSensor sen("Sensor", linAdj);
            sen.setRawReading(testValues[i]);
            float linAdjValue = linAdj->adjust(testValues[i]);
            float expectedValue = testValues[i] * 1 + i;
            assertTrue(linAdjValue == expectedValue, "Failed assert Sensor 2");
        }
    }



}

/**
 * Tests for the sensor network. (16 points)
 */
void networkTests() {
    /*
     * Create a sensor network with 10 TestSensors named
     * "Thermometer n" (with n being the number of the thermometer)
     * that have their readings set to values 20 + n * 0.05.
     */
    // TODO

    /*
     * (1) Assert that adding a sensor with a name that is already
     * used by a sensor in the network throws a DuplicateSensorName
     * exception with the sensor's name as "what".
     */
    // TODO
}

void allTests() {
    adjusterTests();
    sensorTests();
    networkTests();
}
