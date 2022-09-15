#include"Faculty.h"

class System{
    private:
        map<string,Faculty*> Faculties;
    public:
        void add_faculty();
        void print_total_normal_student();
        void print_student_highest_score_in();
        void print_student_highest_average_score();
        void find_in_service_student();
        void find_student_average_score_eight();    // has average score greater 8.0
        void is_normal_student();
        void find_student();
        void total_student_year();
        void Quit();
};

