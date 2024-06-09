#include "TableBasedAdjuster.h"

TableBasedAdjuster& TableBasedAdjuster::addBreakpoint(float x, float y) {
    breakpoints.insert(std::make_pair(x, y));
    return *this;
}

float TableBasedAdjuster::adjust(float value) const {
    if(breakpoints.empty())
    {
        return value;
    }
    float k_min = breakpoints.begin()->first;
    float k_max = breakpoints.rbegin()->first;
    float v_min = breakpoints.begin()->second;
    float v_max = breakpoints.rbegin()->second;
    float a;
    if(value <= k_min) a= v_min - (k_min - value);
    else if (value >= k_max) a = v_max + (value- k_max);
    else {
        for(auto it = breakpoints.begin(); it!= breakpoints.end();it++)
        {
            auto it_next = std::next(it);
            if(it_next == breakpoints.end()) break;

            float k_n = it->first;
            float v_n = it->second;
            float k_n_plus_1 = it_next->first;
            float v_n_plus_1 = it_next->second;
            if( k_n < value && value <= k_n_plus_1){
                a = (value - k_n) / (k_n_plus_1 - k_n) * (v_n_plus_1 - v_n) + v_n;
                break;
            }
        }
    }
    return a;

}
