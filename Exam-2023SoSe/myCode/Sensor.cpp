#include "Sensor.h"
#include "Adjuster.h"

Sensor::~Sensor() {
}

std::string Sensor::getName() const {
    return name;
}

Sensor::Sensor(const std::string &name, std::shared_ptr<Adjuster> adjuster): name(name), adjuster(adjuster) {
//    this->name =name;
//    this->adjuster = std::make_shared<NullAdjuster> adjuster;
}

float Sensor::reading() const {

    float rawVal = rawReading();
    float adjustedVal = adjuster->adjust(rawVal);
    return adjustedVal;
}
