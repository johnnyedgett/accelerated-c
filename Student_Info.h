#ifndef GUARD_Student_Info
#define GUARD_Student_Info
#include <iostream>
#include <string>
#include <vector>

struct Student_Info{
    std::string name;
    double midterm, finalg;
    std::vector<double> homework;
};

bool compare(const Student_Info &, const Student_Info &);
std::istream& read(std::istream &, Student_Info &);
std::istream& read_hw(std::istream &, std::vector<double> &);
#endif