#include"System.h"

void System::add_faculty(){
    Faculty* p = new Faculty;
    p->add();
    Faculties.insert(pair<string,Faculty*>(p->get_name_faculty(),p));
}

void System::print_total_normal_student(){
    string name;
    system("cls");
    cout << "Name of faculty :  " << flush;
    getline(cin>>ws,name);
    if(Faculties.find(name)->first == name){
        cout << "Total formal student is : " << flush;
        cout << Faculties.find(name)->second->get_total_formal_student() << endl;    // or Faculties.at(name)->get_total_formal_student;
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
    system("pause");
    system("cls");
}

void System::is_normal_student(){
    string faculty_name;
    int ID_student;
    system("cls");
    cout << "Faculty name   : " << flush;
    getline(cin>>ws,faculty_name);
    cout << "ID student     : " << flush;
    cin >> ID_student;
    if(Faculties.find(faculty_name)->first == faculty_name){
        Faculties.at(faculty_name)->is_formal_student(ID_student);
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
    system("pause");
    system("cls");
}

void System::find_student(){
    int pick_feature;
    system("cls");
    cout << "You want to find " << endl;
    cout << "1. The student has highest score-in" << endl;
    cout << "2. The student in-service" << endl;
    cout << "3. The student has Average-score in nearest semester > 8.0 " << endl;
    cout << "4. The student has highest average score" << endl;
    cout << "5. Total student in year" << endl;
    cout << "6. Quit\n" << endl;
    cout << "Enter : " << flush;
    cin >> pick_feature;
    switch (pick_feature)
    {
    case 1:
        System::print_student_highest_score_in();
        break;
    case 2:
        System::find_in_service_student();
        break;
    case 3:
        System::find_student_average_score_eight();
        break;
    case 4:
        System::print_student_highest_average_score();
        break;
    case 5:
        System::total_student_year();
        break;
    case 6:
        System::Quit();
        break;
    default:
        break;
    }
}

void System::print_student_highest_score_in(){
    string name;
    system("cls");
    cout << "Name of faculty :  " << flush;
    getline(cin>>ws,name);
    if(Faculties.find(name)->first == name){
        cout << "-------------The student has highest score in-------------- " << endl;
        Faculties.find(name)->second->print_student_highest_score_in();    // or Faculties.at(name)->get_total_formal_student;
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
    system("pause");
    system("cls");
}

void System::find_in_service_student(){
    string faculty_name, link_education;
    system("cls");
    cout << "Faculty name    : " << flush;
    getline(cin>>ws,faculty_name);
    cout << "Link education  : " << flush;
    getline(cin>>ws,link_education);
    if(Faculties.find(faculty_name)->first == faculty_name){
        Faculties.at(faculty_name)->print_list_in_service_student(link_education);
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
}


void System::find_student_average_score_eight(){
    string name;
    system("cls");
    cout << "Name of faculty :  " << flush;
    getline(cin>>ws,name);
    if(Faculties.find(name)->first == name){
        Faculties.at(name)->print_list_average_score_eight();
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
}

void System::print_student_highest_average_score(){
    string name;
    system("cls");
    cout << "Name of faculty :  " << flush;
    getline(cin>>ws,name);
    if(Faculties.find(name)->first == name){
        Faculties.at(name)->print_highest_average_score();
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
}

void System::total_student_year(){
    string name;
    system("cls");
    cout << "Name of faculty :  " << flush;
    getline(cin>>ws,name);
    if(Faculties.find(name)->first == name){
        Faculties.at(name)->print_total_student_in_year();
    }else{
        cout << "Can't find this faculty name! " << endl;
    }
}

void System::Quit(){
    exit(0);
}