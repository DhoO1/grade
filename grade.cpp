#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout<<"please enter your grade"<<endl;
    cin>>grade;
    if (grade >100){
        cout<<"you cannot enter grade above 100";
    }
    else if (grade >=95){
        cout<<"A+";
    }
    else if (grade >=90){
        cout<<"A";

    }
    else if (grade >=85){
        cout<<"B+";

    }
    else if (grade >=80){
        cout<<"B";

    }
    else if (grade >=75){
        cout<<"C+";

    }
    

     if (grade <=70 && grade >= 55){
        grade=grade+5;
        cout<<"congrat your got 5 grades Bonus"<<endl;
    
     if (grade >=75){
        cout<<"C+\n50";
         cout<<"your grade is\n"<<grade;

    }
     else if (grade >=70){
        cout<<"C\n";
         cout<<"your grade is\n"<<grade;

    }
     else if (grade >=65){
        cout<<"D+\n";
         cout<<"your grade is\n"<<grade;
    }
    else if (grade >=60){
        cout<<"D\n";
        cout<<"your grade is\n"<<grade;
     }
     }
    else if (grade <55){
        cout<<"fall";
    } 
    
    
    return 0;
}