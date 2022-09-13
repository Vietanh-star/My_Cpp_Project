#include"System.h"

int main(){          // g++ -o run main.cpp System.cpp Faculty.cpp Student.cpp Semester.cpp
    int pick;
    System s;
    while (1)
    {
        cout << "You want to choose \n"          << endl;
        cout << "1. Add faculty & student"       << endl;
        cout << "2. Print total normal student"  << endl;
        cout << "3. Check normal student"        << endl;
        cout << "4. Find student "               << endl;
        cout << "5. Quit\n"                      << endl;
        cout << "Enter : "                       << flush;
        cin >> pick;
        switch (pick)
        {
        case 1:
            s.add_faculty();
            break;
        case 2:
            s.print_total_normal_student();
            break;
        case 3:
            s.is_normal_student();
            break;
        case 4:
            s.find_student();
            break;
        case 5:
            s.Quit();
        default:
            break;
        }
    }
    
    return 0;
}