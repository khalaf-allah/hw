/* 
 * name: خلف الله عبدالرحيم الطيب
 * section: المستوى الثاني
 * department: هندسة حاسوب
 *  */
// بداية البرنامج و ادخال دوال الادخال و الاخراج
#include <iostream>
#include <string>
// استخدام المكتبة لاستدعاء الدوال
using namespace std;
// اخبار دالتنا اننا سنطلب قيمة عند نهاية البرنامج
int main()
{
    string name, section;
    int username, grade;
// طلب الادخال من المستخدم
    cout << "Enter your name= ";
    cin >> name;
    cout << "Enter your usrename= ";
    cin >> username;
    cout << "Enter your section A or T or C= ";
    cin >> section;
    cout << "Enter your grade = ";
    cin >> grade;
    cout << "Name: " << name;
    cout << "Username: " << username ;
// استخدام دوال التكرار للتخيير
    if (section == "A")
    {
        cout << "section: Control";
    }
    if (section == "T"){
        cout << "section: Communication";
    }
    if (section == "C"){
        cout << "section: Computer";
    }
// حلقة تكرارية للتداول بين المدخلات
    switch (grade){
    case 0 ... 59:
        cout << "grade: F";
        break;
    case 60 ... 69:
        cout << "grade: D";
        break;
    case 70 ... 79:
        cout << "grade: C";
        break;
    case 80 ... 89:
        cout << "grade: B";
        break;
    case 90 ... 100:
        cout << "grade: A";
        break;
// الاخراج عندما تفشل الحلقات التكرارية الأخرى
    default:
        cout << "error";
    }
    /* انهاء البرنامج */
    return 0;
}
