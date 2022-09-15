#include"Semester.h"

void Semester::insert(){
    cout << "List score   " << endl;
    cout << " - Maths      : " << flush;
    cin >> Mathematics;
    cout << " - Chesmistry : " << flush;
    cin >> Chemistry;
    cout << " - Phystics   : " << flush;
    cin >> Physics;
    average_score = (Mathematics + Chemistry + Physics)/3;
}

void Semester::display(){
    cout << "List score   " << endl;
    cout << " - Maths      : " << Mathematics <<endl;
    cout << " - Chesmistry : " << Chemistry << endl;
    cout << " - Phystics   : " << Physics << endl;
    cout << " - Average score   :  " << average_score << endl;
}
double Semester::get_average_score(){
    return average_score;
}