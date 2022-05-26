#include <cstring>
#include <iostream>
#include"militaryPeak.h"

MilitaryPeak::MilitaryPeak() 
: Peak(), peakCode(0) {}
MilitaryPeak::MilitaryPeak(const unsigned int hight, const char *mountainName, const char *peakName, const char *peakCode)
: Peak(hight, mountainName), peakName(0), peakCode(0) {
    set_hight(hight);
    set_mountain_name(mountainName);
    set_peak_name(peakName);
    set_peak_code(peakCode);
}
MilitaryPeak::MilitaryPeak(const MilitaryPeak &other)
: Peak(other), peakCode(0) {
    set_peak_code(other.peakCode);
}
MilitaryPeak::~MilitaryPeak() {
    delete[] this->peakCode;
}

void MilitaryPeak::set_peak_code(const char *peakCode) {
    if (peakCode == nullptr) {
        throw "Invalid peak code!";
    }

    delete[] this->peakCode;
    this->peakCode = new char[strlen(peakCode) + 1];
    strcpy(this->peakCode, peakCode);
}

void MilitaryPeak::set_peak_name(const char *peakName) {
    if (peakName == nullptr) {
        throw "Invalid peak name!";
    }

    delete[] this->peakName;
    this->peakName = new char[strlen(peakName) + 1];
    strcpy(this->peakName, peakName);

}

void MilitaryPeak::print() const {
    std::cout <<"Military peak code is: "<< peakName << " cota" << peakCode << "\n"; 
}
