#pragma once
#include"peak.h"

class MilitaryPeak : public Peak {
private: 
    char* peakCode;
    char* peakName;
public:
    MilitaryPeak();
    MilitaryPeak(const unsigned int hight, const char* mountainName, const char* peakName, const char* peakCode);
    MilitaryPeak(const MilitaryPeak& peak);
    ~MilitaryPeak();

    void set_peak_code(const char* peakCode);
    void set_peak_name( const char* peakName);
    void print() const;

};