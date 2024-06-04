//this is new project
 
 
 //  <<<<<<<<<<<<<<<<<<<              for username enter every think but for pasword enter  40262   >>>>>>>>>>>>>>>>>>>>>>>>>
#include <iostream>
#include <chrono>    //for add time for exam
#include <thread>    //for add time for exam
#include <string>
using namespace std;

class pasword
{
public:
    //    void access();
};

class student
{
public:
    void examtime();
    void eteraz();
    void list_teacher();
    void list_student();
    void list_of_questions();
    void techer_work();
    void student_work();
    void boss();
};

class tozih : public student
{
public:
};

int main()
{

    // pasword ob;
student ob2;
    //    tozih ob3;
    // for inter ostad /pasword
    string userType;
    string username;
    string password;
    bool loggedIn = false;

    while (!loggedIn)
    {
        cout << "dear student for start enter student : ";
        cin >> userType;
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        if ( password == "40262" && userType == "student")
        {
            loggedIn = true;
            cout << "hellow student  , are you ready!\n----------------------------\n";
            ob2.techer_work();
        }
        else if (username == "A" && password == "1234" && userType == "student")
        {
            loggedIn = true;
            cout << "hallow student , welcome to the exam!\n--------------------------\n";
            ob2.list_student();
            ob2.student_work();
            //.............?????
        }
        else
        {
            cout << "Invalid  password. Please try again." << endl;
        }
    }

    return 0;
}














// void pasword::access()


void student :: examtime()
{

    // time according seccond)
    int examDuration = 120;

   
    auto startTime = chrono::steady_clock::now();

    // start
  cout <<"please start the exam you dont have very time \n " ;
string ans;
cin>>ans ;


    // prossesing
    this_thread::sleep_for(chrono::seconds(examDuration));

    // finishhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    auto endTime = chrono::steady_clock::now();

    // hesab
    auto duration = chrono::duration_cast<chrono::seconds>(endTime - startTime).count();

    // close
    cout << "program want close " << duration << " ثانیه" << endl;
    cout << "closing........." << endl;


	
	
}
void student ::eteraz()
{
 
    }



void student::techer_work()
{
    student obj1;
    obj1.list_teacher();
    int item;
    cin >> item;
    switch (item)
    {
    case 1:
    {
        int choose = 0;
        while (choose != 3)
        {
            obj1.list_of_questions();
            cin >> choose;
            switch (choose)
            {
            case 1:
            {
                obj1.examtime();

                break;
            }

            case 2:
            {
                obj1.eteraz();

                break;
            }
            case 3:
            {
                obj1.boss();

                break;
            }
            case 4:
            {
                break;
            }
            }
        }
        break;
    }
    case 2:
    {
        //...........
        break;
    }
    case 3:
    {
        //..........
        break;
    }
    case 4:
    {
        //..........
        break;
    }
    }
}

void student ::student_work()
{
   student obj2;
    obj2.list_student();
    int item;
    cin >> item;
    switch (item)
    {
    case 1:
    {
        cout << "\n-------------------------------\ntst is start\n\n";

        break;
    }
    case 2:
    {
        //...........
        break;
    }
    }
}

void student::list_teacher()
{
    cout << " student: please choose the action 1  :  ";

}

void student::list_student()
{
    cout << "\n1_start the tst .";
    cout << "\n2_....";
}

void student::list_of_questions()
{
    cout << "\n Dear user";
    cout << "\n 1_for eteraz with your grade.";
    cout << "\n 2_for make dscrip exam  .";
    cout << "\n 3_for show grade of student   ";
    cout << "\n 4_ finish .";
}

void student ::boss()
{
    int n = 0;
    cout << "DEAR BOSS please enter number of student that have  grads: \n  ";
    cin >> n;
    float grade[n];

    for (int i = 0; i < n; i++)
    {
        cout << " The grade of student [ " << i << " ] is ";
        cin >> grade[i];
    }
}