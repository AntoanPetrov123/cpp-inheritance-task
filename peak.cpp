
#include"peak.h"
#include <cstring>
#include <iostream>

using namespace std;

Peak::Peak() : hight(0), mountainName(0) {}
Peak::Peak(const unsigned int hight, const char* mountainName) 
: hight(0), mountainName(0){
    set_hight(hight);
    set_mountain_name(mountainName);
}
Peak::Peak(const Peak& other)
: hight(0), mountainName(0) {
    set_hight(other.hight);
    set_mountain_name(other.mountainName);
}
Peak::~Peak() {
    delete[] mountainName;
}

void Peak::set_hight(const unsigned int hight) {
    if (hight <= 0) {
        throw "Invalid hight!";
    }

    this->hight = hight;
}

void Peak::set_mountain_name(const char* mountainName) {
    if (mountainName == nullptr) {
        throw "Invalid input!";
    }

    delete[] this->mountainName;
    this->mountainName = new char[strlen(mountainName) + 1];
    strcpy(this->mountainName, mountainName);
}

void Peak::print() const {
    cout << "High is: " << hight << "\n";
    cout << "Mountain name is: " << mountainName << "\n";

}