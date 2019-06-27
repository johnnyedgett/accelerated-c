#include "Student_Info.h"
#include "Grade.h"
#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

using std::cout;    using std::string;
using std::cin;     using std::streamsize;
using std::endl;    using std::setprecision;
using std::vector;  using std::max;
using std::sort;

int main(){
    cout << "Begin the grading program." << endl;

    vector<Student_Info> students;
    Student_Info record;

    // For formatting the output - need to get the length of the longest student name.
    string::size_type maxLen = 0;

    while(read(cin, record)){
        maxLen = max(maxLen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    if(students.size() == 0){
        throw new std::domain_error("No students entered...");
    } else {
        for(vector<Student_Info>::size_type i = 0; i < students.size(); i++){
            cout << students[i].name << string(maxLen + 1 - students[i].name.size(), ' ');
            try {
                double finalGrade = calcGrade(students[i]);
                streamsize prec = cout.precision();
                cout << setprecision(3) << finalGrade << setprecision(prec);
            } catch(std::domain_error e){
                cout << e.what();
            }
            cout << endl;
        }
    }
    return 0;
}