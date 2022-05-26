#include<iostream>
#include "peak.h"
#include "touristPeak.h"
#include "militaryPeak.h"


using namespace std;

int main() {

    Peak p1(1500, "Rila");

    p1.print();

    TouristPeak tp1(2000, "Pirin", "Botev");
    tp1.print();

    MilitaryPeak mp1(2000, "rila", "Musala", "74210");
    mp1.print();

    return 0;
}