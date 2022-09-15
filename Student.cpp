#include"Student.h"

void Student::display(){
    cout << "Full name      : " << Full_name << endl;
    cout << "ID student     : " << ID_student << endl;
    cout << "Birth day      : " << date_of_birth << endl;
    cout << "Year start     : " << year_in << endl;
    cout << "Score in       : " << score_in << endl;
    if(type_of_student == 0 ){
        cout << "Link education : " << link_education << endl;
    }
    for(auto itr = Semesters.begin(); itr != Semesters.end(); itr++){
        cout << "In the semester " << itr->first << endl;
        itr->second->display();
    }
}

void Student::add(){
    cout << "Chose type of student (0. In-service student     1. Formal student) :  " << flush;
    cin >> type_of_student;
    system("cls");
    cout << "Full name       : " << flush;
    getline(cin>>ws,Full_name);
    cout << "ID student      : " << flush;
    cin >> ID_student;
    cout << "Date of birth   : " << flush;
    getline(cin>>ws,date_of_birth);
    cout << "Year in         : " << flush;
    cin >> year_in;
    cout << "Score in        : " << flush;
    cin >> score_in;
    if(type_of_student == 0){
        cout << "Link education  : " << flush;
        getline(cin>>ws,link_education);
    }
    cout << "Enter number of semester :  " << flush;
    cin >> number_semester;
    for(int i = 0; i < number_semester; i++){
        system("cls");
        cout << "In the semester " << i+1 << endl;
        Semester* o = new Semester;
        o->insert();
        Semesters.insert(pair<int,Semester*>(i+1,o));
    }
    cout << "\nComplelte !\n" << endl;
    system("pause");
    system("cls");
}

double Student::get_average_score_nearest_semester(){
    double result;

    result = (--Semesters.end())->second->get_average_score();
    return result;
}

double Student::get_average_score_semester(int semester){
    double result;
    result = Semesters.find(semester)->second->get_average_score();
    return result;
}

int Student::get_year_in(){
    return this->year_in;
}