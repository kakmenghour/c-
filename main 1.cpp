#include <iostream>
using namespace std;
int main()
{
    system("clear");
    /// declare variav=ble and assign
    int id = 1111;
    string name = "Menghour", gender = "Male";
    float avg = 90.55;
    char grade = ' A';
    cout << "======== student Information========" << endl;
    cout << " ====== style1 ===" << endl;
    cout << "Student id =" << id << endl;
    cout << "Student name = " << name << endl;
    cout << "Student gender =" << gender << endl;
    cout << "Student average  = " << avg << endl;
    cout << "Student grade = " << grade << endl;
    cout << "===== style2 ===== " << endl;
    cout << "Id\tName\tGender\tAvg\tGrade" << endl;
    cout << id << "\t" << name  << gender << "\t" << avg << "\t" << grade << endl;
    return 0;
} 
