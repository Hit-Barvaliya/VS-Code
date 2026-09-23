
#include"3_internDoctor.h"
// #include"3_doctor.h"
// #include"3_nurse.h"
// #include"3_person.h"
int main(){
    // person p1(12,18,"hit");
    person p1;
    p1.set_name("HIT");
    p1.set_ID(12);
    p1.set_age(18);
   p1.display();cout<<endl;

    // doctor d1(123,25,"rishit","dentist",3);
    doctor d1;
    d1.set_name("RISHIT");
    d1.set_ID(123);
    d1.set_age(25);
    d1.set_specelization("dentist");
    d1.set_experience(2);
   d1.display();cout<<endl;

    // nurse n1(1234,28,"nyasa",'A',8.30);
    nurse n1;
    n1.set_name("DIPEX");
    n1.set_ID(1234);
    n1.set_age(23);
    n1.set_wardassigned('A');
    // n1.set_shift_time("8:30_5:30");
    n1.set_shift_time(9.30);
   n1.display();cout<<endl;

    // interndoctor i1(12345,29,"dipal","skin",3,'D',8.30,"Dr.hiren",4);
    interndoctor i1;
    i1.set_name("JAY");
    i1.set_ID(12345);
    i1.set_age(27);
    i1.set_specelization("homiyopethic");
    i1.set_experience(3);
    // i1.set_shift_time("9:30_5:30");
    i1.set_shift_time(9.30);
    i1.set_wardassigned('D');
    i1.set_supervisorName("DR. CHANDRAKANT");
    i1.set_tranningduration(8);
    i1.display();cout<<endl;
    return 0;
}

