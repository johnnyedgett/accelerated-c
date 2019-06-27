#include "Student_Info.h"

bool compare(const Student_Info &x, const Student_Info &y){
    return x.name < y.name;
}

std::istream& read(std::istream &is, Student_Info &s){
    is >> s.name >> s.midterm >> s.finalg;
    read_hw(is, s.homework);
    return is;
}

std::istream& read_hw(std::istream & is, std::vector<double> &homework){
    // if input stream is non-zero
    if(is){
        is.clear(); 

        double x;
        while(is >> x){
            homework.push_back(x);
        }

        is.clear();
    }
    return is;
}