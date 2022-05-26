#include "touristPeak.h"
#include <cstring>
#include <iostream>

using namespace std;

TouristPeak::TouristPeak()
: Peak(), peakName(0) {}
TouristPeak::TouristPeak(const unsigned int hight, const char *mountainName, const char *peakName)
: Peak(hight, mountainName), peakName(0) {
    set_hight(hight);
    set_mountain_name(mountainName);
    set_peak_name(peakName);
}
TouristPeak::TouristPeak(const TouristPeak &other)
: Peak(other), peakName(0) {
    set_peak_name(other.peakName);
}
TouristPeak::~TouristPeak() {
    delete[] peakName;
}

void TouristPeak::set_peak_name(const char *peakName) {
    if (peakName == nullptr) {
        throw "Invalid peak name!";
    }

    delete[] this->peakName;
    this->peakName = new char[strlen(peakName) + 1];
    strcpy(this->peakName, peakName);

}

void TouristPeak::print() const {
    cout << "Peak name is: " << peakName << endl;
}