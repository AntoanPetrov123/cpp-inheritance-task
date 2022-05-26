#pragma once
#include"peak.h"

class TouristPeak : public Peak {
private:    
    char* peakName;
public:
    TouristPeak();
    TouristPeak(const unsigned int hight, const char* mountainName, const char* peakName);
    TouristPeak(const TouristPeak& other);
    ~TouristPeak();

    void set_peak_name(const char* peakName);
    void print() const;
};