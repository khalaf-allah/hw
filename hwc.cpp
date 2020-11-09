// بداية البرنامج و ادخال دوال الادخال و الاخراج
#include <iostream>
#include <cstring>
// استخدام المكتبة لاستدعاء الدوال
using namespace std;
// ادخال بيانات اكثر من شخص واحد
struct student
// تعريف الكائن الذي سنستخدمه
{
    char name[20];
    char dep[20];
    int roll;
    float marks;
};
// اخبار دالتنا اننا سنطلب قيمة عند نهاية البرنامج
int main() 
{
    student s;
    cout << "ادخال المعلومات: " << endl;
    cout << "\nادخل الاسم: ";
    cin >> s.name;
    cout << "ادخل القسم: ";
    cin >> s.dep;
    cout << "ادخل الرقم الجامعي: ";
    cin >> s.roll;
    cout << "ادخل الدرجات: ";
    cin >> s.marks;
// طلب الادخال من المستخدم
    cout << "\nعرض المعلومة: " << endl;
    cout << "الاسم: " << s.name << endl;
// استخدام دوال التكرار للتخيير
	if (strcmp(s.dep, "A") == 0) {
		cout << "القسم: Control Engineering";
	}
// البحث عن ادخال معين للمستخدم حتى تقوم دالة التخيير بالقيام بعملها
	if (strcmp(s.dep, "T") == 0) {
		cout << "القسم: Telecomunication Engineering";
	}
	if (strcmp(s.dep, "C") == 0) {
		cout << "القسم: Computer Engineering";
	}
    cout << "\nالرقم الجامعي: " << s.roll << endl;
    if (s.marks < 100)
    cout << "Student grade: A";
    if (s.marks < 90)
    cout << "Student grade: B";
    if (s.marks < 80)
    cout << "Student grade: C";
    if (s.marks < 70)
    cout << "Student grade: D";
    if (s.marks < 60)
    cout << "Student grade: F";
    /* انهاء البرنامج */
    return 0;
}
