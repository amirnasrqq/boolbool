
// this is new project

//  <<<<<<<<<<<<<<<<<<<              for username enter every think but for pasword enter  40262   >>>>>>>>>>>>>>>>>>>>>>>>>
#include <iostream>
#include <chrono> //for add time for exam
#include <thread> //for add time for exam
#include <string>
#include <fstream>
using namespace std;
const int MAX_QUESTIONS = 10;
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
    void grade_student();
    void list_of_questions();
    void techer_work();
    void boss();
    void show();
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

        if (password == "40262" && userType == "s")
        {
            loggedIn = true;
            cout << "hellow student  , are you ready!\n----------------------------\n";
            ob2.techer_work();
        }
        else if (username == "A" && password == "1234" && userType == "student")
        {
            loggedIn = true;
            cout << "hallow student , welcome to the exam!\n--------------------------\n";
            ob2.grade_student();
        }
        else
        {
            cout << "Invalid  password. Please try again." << endl;
        }
    }

    return 0;
}

// void pasword::access()

void student ::examtime()
{

    // time according seccond)
    int examDuration = 15;

    auto startTime = chrono::steady_clock::now();

    // start
    cout << "please start the exam you dont have very time \n ";
    string ans;
    cin >> ans;
    int c;

    // prossesing
    this_thread::sleep_for(chrono::seconds(examDuration));

    // finishhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    auto endTime = chrono::steady_clock::now();

    // hesab
    auto duration = chrono::duration_cast<chrono::seconds>(endTime - startTime).count();

    // close
    cout << "program want close " << duration << "second" << endl;
    cout << "closing........." << endl
         << endl;
    cout << "time is over FOR back to meno enter 0";
    while (true)
    {

        cin >> c;
        if (c == 0)

        {
            break;
        }
    }
}
void student ::eteraz()
{
    cout << "write your eteraz FOR finish enter 0\n";
    string f;
    while (true)
    {
        if (f == "0")
        {
            break;
        }

        cin >> f;

        cout << "your eteraz:" << f << "\n";
    }
}

void student::techer_work()
{
    student obj1;
    obj1.list_teacher();
    int item;

    while (item != -1)
    {

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
                    obj1.show();
                    break;
                }
                default:
                {

                    exit(0);

                    break;
                }
                }
            }
            break;
        }
        }
    }
}

void student::list_teacher()
{
    cout << " student: please choose the action 1  :  ";
}

void student::grade_student()
{
    cout << "sort of grade ";
}

void student::list_of_questions()
{
    cout << "\n Dear user";
    cout << "\n 1_for start exam.";
    cout << "\n 2_for eteraz with your grade.";
    cout << "\n 3_boss should enter grade  ";
    cout << "\n 3_for show sort og grade  ";
    cout << "\n 4_for share the exam";
    cout << "\n 5_ finish .";
}

void student ::boss()

{

    string given_name;
    string last_name;

    int ID;

    float avg(0);

    cout << "WELCOME";
    int n = 0;
    while (n != -1)

    {
        cout << "please choose  an action\n ";

        cout << " for adding student enter (1)\n";

        cout << "  to see the list enter (2)\n";

        cout << "  for searching students by id enter (3)\n ";

        cout << " for showing best student enter (4)\n ";

        cout << " for exiting application enter -1\n ";

        std::cin >> n;

        fstream myfile;

        string temp;
        int input_id;
        bool found_by_id = false;
        switch (n)

        {

        case 1:

            myfile.open("./a.txt", ios::app | ios::out);

            if (!myfile)

            {

                cout << " Dear user : we can not open the file\n ";

                exit(-1);
            }

            else

            {

                cout << "please enter information  first for the list \n ";

                while (true)
                {

                    std::cin >> given_name;
                    if (given_name == "-1")
                    {
                        break;
                    }
                    std::cin >> last_name >> ID >> avg;

                    myfile << given_name << " " << last_name << '\n'
                           << ID << " " << avg << '\n';

                    cout << "-------------------------------------\nfor going back type -1\n-------------------------------------\n";
                }

                myfile.close();
            }

            break;

        case 2:

            myfile.open("./a.txt", ios::app | ios::in);

            if (!myfile)

            {

                cout << " Dear user : we can not open the file\n ";

                exit(-1);
            }

            else

            {

                while (getline(myfile >> ws, temp))
                {
                    cout << temp;
                    getline(myfile >> ws, temp);
                    cout << " " << temp << endl;
                }

                myfile.close();
            }

            break;

        case 3:

            myfile.open("./a.txt", ios::app | ios::in);

            if (!myfile)

            {

                cout << " Dear user : we can not open the file\n ";

                exit(-1);
            }

            else

            {
                cout << "please enter student id:";
                std::cin >> input_id;
                found_by_id = false;
                while (getline(myfile >> ws, temp))
                {
                    myfile >> ID;
                    if (ID == input_id)
                    {
                        myfile >> avg;
                        cout << endl
                             << temp << " " << ID << " " << avg << endl
                             << endl;
                        found_by_id = true;
                        break;
                    }
                    else
                    {
                        myfile >> avg;
                    }
                }
                if (!found_by_id)
                {
                    cout << "dident find any students with this id" << endl;
                }
                myfile.close();
            }

            break;

        case 4:

            myfile.open("./a.txt", ios::app | ios::in);

            if (!myfile)

            {

                cout << " Dear user : we can not open the file\n ";

                exit(0);
            }

            else

            {

                while (getline(myfile >> ws, temp))
                {
                    myfile >> ID >> avg;
                    if (avg >= 17)
                    {

                        cout << temp << ' ' << ID << ' ' << avg << endl;
                    }
                }

                myfile.close();
            }

            break;
        default:

            cout << "finish plan";

            exit(0);
        }
    }
}

void student::show()
{
    std::string questions[10];
    int questionCount = 3;
    for (int i = 0; i < questionCount; ++i)
    {
        std::cout << questions[i] << std::endl;
    }
    std::string defaultQuestions[MAX_QUESTIONS] = {
        "question1",
        "question2",
        "question3"};

    std::string permission;
    std::cout << "do you have acces  : { yes /no } \n";
    std::cin >> permission;

    if (permission == "yes")
    {
        cout << "question1...............?\n question2...............?\n  question3...............?\n";
    }
    else
    {
        std::cout << " you vannot enter here " << std::endl;
    }
}
