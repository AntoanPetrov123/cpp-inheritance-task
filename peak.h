#pragma once

class Peak {
    unsigned int hight;
    char* mountainName;

public:

    Peak();
    Peak(const unsigned int hight, const char* name);
    Peak(const Peak& peak);
    ~Peak();

    void set_hight(const unsigned int hight);
    void set_mountain_name(const char* mountainName);
    void print() const;
};