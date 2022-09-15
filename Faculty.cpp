#include"Faculty.h"

void Faculty::add(){
    system("cls");
    cout << "Name of this faculty : " << flush;
    getline(cin>>ws, Faculty_name);
    cout << "Number of students : " << flush;
    cin >> number_students;
    for(int i = 0; i< number_students; i++){
        system("cls");
        cout << "In the student " << i+1 << endl;
        cout << endl;
        Student* s = new Student;
        s->add();
        students.insert(pair<int,Student*>(s->get_ID_student(),s));
    }
}

int Faculty::get_total_formal_student(){
    map<int,Student*>::iterator itr;
    for(itr = students.begin(); itr != students.end(); itr++){
        if(itr->second->get_type_student() == 1){  
            this->total_formal_student ++;
        }
    }
    return this->total_formal_student;
}

void Faculty::is_formal_student(int ID_st){
    if(students.find(ID_st)->first == ID_st){
        if(students.at(ID_st)->get_type_student() == 1){
            cout << "This student is formal student!" << endl;
        }else{
            cout << "This student is not formal student!" << endl;
        }
    }else{
        cout << "Can't find this ID student! " << endl;
    }
}

void Faculty::print_list_in_service_student(string link_education){
    system("cls");
    int count = 0;
    cout << "In the Faculty " << this->Faculty_name <<  endl;
    cout << "The list in-service student has link-education at " << link_education << endl;
    cout << endl;
    for(auto itr = students.begin(); itr != students.end(); itr++){
        if(itr->second->get_link_education() == link_education){
            itr->second->display();
            count++;
        }
    }
    if(count == 0) cout << "At link education " << link_education << " has not student" << endl;
    system("pause");
    system("cls");
}

void Faculty::print_list_average_score_eight(){
    system("cls");
    cout << "In the Faculty " << this->Faculty_name << endl;
    cout << "The list student has average score > 8.0 in the nearest semester "<< endl;
    for(auto itr = students.begin(); itr != students.end(); itr++){
        if(itr->second->get_average_score_nearest_semester() > 8){
            itr->second->display();
        }
    }
    system("pause");
    system("cls");
}

void Faculty::print_highest_average_score(){   
    int semester, max = 0 ;
    cout << "Semester : " << flush;
    cin >> semester;
    system("cls");
    cout << "In the Faculty " << this->Faculty_name << endl;
    cout << "The list student has highest average score in semester " << semester << endl;
    for(auto itr = students.begin(); itr != students.end(); itr++){
        if(max < itr->second->get_average_score_semester(semester)){
            max = itr->second->get_average_score_semester(semester);
        }
    }
    for(auto itr = students.begin(); itr != students.end(); itr++){
        if( itr->second->get_average_score_semester(semester) == max){
            itr->second->display();
        }
    }
    system("pause");
    system("cls");
}

void Faculty::print_student_highest_score_in(){
    int MAX = 0;
    for(auto itr = students.begin(); itr != students.end(); itr++){
        if(MAX < itr->second->get_score_in()) MAX = itr->second->get_score_in();
    }
    for(auto itr = students.begin(); itr != students.end(); itr++){
        if(itr->second->get_score_in() == MAX ) itr->second->display();
    }
}

void Faculty::print_total_student_in_year(){
    int year, count = 0;
    cout << "Year : " << flush;
    cin >> year;
    for(auto itr = students.begin(); itr != students.end(); itr ++){
        if(itr->second->get_year_in() == year){
            count++;
        }
    }
    cout << "The number student in year " << year << " : " << count;
    cout << endl;
    system("pause");
    system("cls");
}