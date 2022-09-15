#include"Semester.h"

#ifndef STUDENT
#define STUDENT
class Student{
private:
    string Full_name;
    int ID_student;
    string date_of_birth;
    int year_in;
    int score_in;
    int type_of_student;
    string link_education;
    int number_semester;
    map<int,Semester*> Semesters;
public:
    int get_score_in(){return this->score_in;}
    int get_ID_student(){return this->ID_student;}
    int get_type_student(){return this->type_of_student;}
    string get_link_education(){return this->link_education;}
    int get_year_in();
    double get_average_score_nearest_semester();
    double get_average_score_semester(int semester);
    void add();
    void display();
};


#endif
