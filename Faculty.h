
#include"Student.h"


class Faculty {
    protected:
        string Faculty_name;
        int number_students;
        int total_formal_student = 0;
        map<int,Student*> students;
    public:
        string get_name_faculty(){return this->Faculty_name;}
        int get_total_formal_student();
        void is_formal_student(int);
        void print_student_highest_score_in();
        void print_list_in_service_student(string);
        void print_list_average_score_eight();
        void print_highest_average_score();
        void print_total_student_in_year();
        void add();
};

