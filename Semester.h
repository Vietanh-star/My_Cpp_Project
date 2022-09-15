#include<iostream>
#include<string>
#include<map>
#include<utility>
using namespace std;

class Semester
{
    private:
        int Mathematics;
        int Chemistry;
        int Physics;
        double average_score;
    public:
        void insert();
        void display();
        double get_average_score();
};

