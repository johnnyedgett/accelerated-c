#include "Grade.h"
#include "Student_Info.h"
#include "Median.h"

double calcGrade(const Student_Info&s) {
    return 0.4*s.finalg + 0.2*s.midterm + 0.4*median(s.homework);
}
