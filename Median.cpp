#include "Median.h"

double median(const std::vector<double>& homework){
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if(size == 0){
        // throw  std::domain_error("No homework ound for user.");
    }
    vec_sz mid = size/2;

    return size % 2 ==0? (homework[mid] + homework[mid-1])/2 : homework[mid];
}