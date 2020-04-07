#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

 #define size 1000

using namespace std;

///clear screen

void clearScreen()
{
   system("cls || clear");
}

///Function declarations
void delete_info();
void search();
void search_info();
void edit();
void edit_info();
void home();
void load_file();
void view();
void unload_file();
void add();


///Global variables
char studentNames[size][60];
bool studentID[size];
char studentSpeciality[size][60];
char studentDepartments[size][60];
char studentSemester[size][10];
float studentsCgpa[size];
int studentsCredit_earn[size];
char father_name[size][60];
char mother_name[size][60];
char S_address[size][60];
char S_contact[size][11];


///file object

fstream fs;

///class
class student
{
    char name[60];
    int id;
    char dptname[60];
     char semester[10];
     float cgpa;
     int credit_earn;
     char father_name[60];
     char mother_name[60];
     char address[60];
     char contact[11];

    public:
    void setInfo(char na[], int ID,char sm[],float cg,int ce,char fn[],char mn[],char ad[],char cont[])
    {
        strcpy(name, na);
        id = ID;
        strcpy(semester,sm);
        cgpa=cg;
        credit_earn=ce;
        strcpy(father_name,fn);
        strcpy(mother_name,mn);
        strcpy(address,ad);
        strcpy(contact,cont);
    }

    virtual char* speciality()
    {

    }
    void Department(char dp[])
    {
        strcpy(dptname,dp);
    }
     char* retDepartment()
     {
        return dptname;
     }

     char* retName()
     {
        return name;
     }

     int retID()
     {
        return id;
     }
     char* retsemester()
     {
         return semester;
     }
     float retCgpa()
     {
         return cgpa;
     }
     int retcreditearn()
     {
         return credit_earn;
     }
     char* retFname()
     {
         return father_name;
     }
     char* retMname()
     {
         return mother_name;
     }
     char* retadrs()
     {
         return address;
     }
     char* retcont()
     {
         return contact;
     }

};

///inherite of class

class cse : public student
{
    char doneProject[60];


public:

    char* speciality()
    {
        cout<<"Enter How Many Project Made by Student:";
        cin >> doneProject;
        return doneProject;
    }



};

class eee : public student
{
    char doneCircuit[60];



public:

    char* speciality()
    {
        cout<<"Enter How Many Ciucuit Made by Student:";
        cin >> doneCircuit;
        return doneCircuit;
    }

};

class ece : public student
{
     char donetechnology[60];
public:

    char* speciality()
    {
        cout<<"Enter How Many Technology's Made by Student:";
        cin >> donetechnology;
        return donetechnology;
    }
};
class pharm : public student
{
    char madechemical[60];



public:

    char* speciality()
    {
        cout<<"Enter How Many Chemical Made by Student:";
        cin >> madechemical;
        return madechemical;
    }

};
class eng : public student
{
    char donetermpaper[60];



public:

    char* speciality()
    {
        cout<<"Enter How Many Term Paper Made by Student:";
        cin >> donetermpaper;
        return donetermpaper;
    }

};
class bba : public student
{
    char donemarcketing[60];



public:

    char* speciality()
    {
        cout<<"Enter How Many Marcketing Project Done by Student:";
        cin >> donemarcketing;
        return donemarcketing;
    }

};
class llb : public student
{
    char donelogic[60];



public:

    char* speciality()
    {
        cout<<"Enter How Many logic in speech are creating by Student:";
        cin >> donelogic;
        return donelogic;
    }

};
class eco : public student
{
    char donechart[60];



public:

    char* speciality()
    {
        cout<<"Enter How Many charts are Made by Student:";
        cin >> donechart;
        return donechart;
    }

};

///Global object of student class and it's inherite class
student *st;
student stOb;

cse cse;
eee eee;
ece ece;
pharm pharm;
eng eng;
bba bba;
llb llb;
eco eco;

///User defined funtions


///Add Student Information


void add()
{

    clearScreen();
    cout<<"                      ## Add Student Information ##             "<<endl;
    cout<<"                       ------------***------------              "<<endl;
    cout<<"                    ***** Student Informations *****            "<<endl;
    cout<< "\n";


    while(1)
    {

    cout<<"**Enter Student's Department **"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"\n\n";
    cout<<"Press - 1 - CSE"<<endl;
    cout<<"Press - 2 - EEE"<<endl;
    cout<<"Press - 3 - ECE"<<endl;
    cout<<"Press - 4 - B.Pharm"<<endl;
    cout<<"Press - 5 - English"<<endl;
    cout<<"Press - 6 - BBA"<<endl;
    cout<<"Press - 7 - LLB"<<endl;
    cout<<"Press - 8 - Economics"<<endl;
    cout<<"\n"<<endl;
    cout<<"Press - 9 - HOME MENU"<<"\n"<<endl;
    cout<<"Press - 0 - EXIT"<<"\n"<<endl;


    int data;
        cout << "Enter Option:";
        cin >> data;
    switch(data)
       {
        case 1:
             st = &cse;
             st -> Department("CSE");
             break;
        case 2:
             st = &eee;
             st -> Department("EEE");
             break;
        case 3:
            st = &ece;
             st -> Department("ECE");
             break;
        case 4:
            st = &pharm;
             st -> Department("B.Pharm");
             break;
        case 5:
            st = &eng;
             st -> Department("English");
             break;
        case 6:
            st = &bba;
             st -> Department("BBA");
             break;
        case 7:
            st = &llb;
             st -> Department("LLB");
             break;
        case 8:
            st = &eco;
             st -> Department("Economics");
             break;
        case 9:
             clearScreen();
             home();
             break;
        case 0:
            cout<<"Loading ...  Loading ... Loading ..."<<endl;
            cout<<"Programme will be terminating ";
            unload_file();
            exit(0);
        default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        break;
       }

    char tempNames[60];
    int id;
    char tempsemester[10];
    float tempcg;
    int tmpce;
    char tempfn[60];
    char tempmn[60];
    char tempAdrs[60];
    char tempCont[11];

    clearScreen();
    cout<<"                      ## Add Student Information ##             "<<endl;
    cout<<"                       ------------***------------              "<<endl;
    cout<<"                    ***** Student Informations *****            "<<endl;
    cout<< "\n";


    cout<<"Enter Student ID:";
    cin >> id;
    cout<<"Enter Student Name:";
    cin >> tempNames;
    cout<<"Enter Semester:";
    cin>>tempsemester;
    cout<<"Enter CGPA:";
    cin>>tempcg;
    cout<<"How many credit earned:";
    cin>>tmpce;
    cout<<"Enter Father Name:";
    cin>>tempfn;
    cout<<"Enter Mother Name:";
    cin>>tempmn;
    cout<<"Enter Adress:";
    cin>>tempAdrs;
    cout<<"Enter Contact Number:";
    cin>>tempCont;


    st -> setInfo(tempNames, id,tempsemester,tempcg,tmpce,tempfn,tempmn,tempAdrs,tempCont);
    studentsCgpa[id]= st -> retCgpa();
    strcpy(studentSpeciality[id] , st -> speciality());
    strcpy(studentDepartments[id] , st -> retDepartment());
    strcpy(studentSemester[id], st -> retsemester());
    strcpy(studentNames[id], st-> retName());
    studentID[id] = true;
    studentsCredit_earn[id]= st -> retcreditearn();
    strcpy(father_name[id], st -> retFname());
    strcpy(mother_name[id], st -> retMname());
    strcpy(S_address[id], st -> retadrs());
    strcpy(S_contact[id], st -> retcont());


    cout<<"\n"<<"!!! Informations are Added !!!"<<"\n"<<endl;
    unload_file();
    cout <<" ? ? ? Do you want to add more student information ? ? ? "<<endl;
    cout<<"Fore More Option"<<endl;
    system("PAUSE");
    clearScreen();
    int entry;

    cout<<"                      ## Add Student Information ##             "<<endl;
    cout<<"                       ------------***------------              "<<endl;
    cout<<"                    ***** Student Informations *****            "<<endl;
    cout<< "\n";

    cout<<"Press - 1 - If you ADD more information "<<endl;
    cout<<"Press - 2 - HOME MENU"<<endl;
    cout<<"Press - 0 - EXIT"<<endl;

    cout<<"\n"<<"Enter Your Option:";
    cin >> entry;

    switch(entry)
       {
        case 1:
            clearScreen();
            add();
            break;

        case 2:
             unload_file();
             clearScreen();
             home();
             break;
        case 0:
            cout<<"Loading ...  Loading ... Loading ..."<<endl;
            cout<<"Programme will be terminating ";
            unload_file();
            exit(0);
        default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        add();
        break;

       }

    }
}

///save data in this function

void unload_file()
{

    fs.open("sms.txt", ios::out  );

        if(fs.is_open()){
        for(int i=0; i<size; i++)
        {
            if(studentID[i] == false)
                continue;

            fs <<studentDepartments[i]<< " " << i << " " << studentNames[i] << " " << studentSpeciality[i]<< " " ;
            fs << studentSemester[i] << " " << studentsCgpa[i]<< " " << studentsCredit_earn[i]<< " " ;
            fs<<father_name[i] << " " <<mother_name[i] << " " <<S_address[i]<< " " <<S_contact<<endl;

        }
    }
    else
    {
        cout << "File did not open" << endl;
        exit(1);
    }
    fs.close();
}

///view student information

void view()
{
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                   ***** View Student Information *****                   "<<"\n"<<endl;

    for (int i=0; i<size; i++)
    {
        if(studentID[i] == false)
            continue;

         cout << "Department:"<<studentDepartments[i]<<"\t\t"<<"ID:"<< i << "\t\t" << "Name:"<< studentNames[i] << "\n";
    cout<< "speciality:"<< studentSpeciality[i]<< "\t\t"<<"Semester:"<<studentSemester[i]<<"\t\t"<<"CGPA:"<<studentsCgpa[i]<<"\n";
    cout<<"Credit Earned:"<<studentsCredit_earn[i]<< "\t\t" <<"Father Name:"<<father_name[i] << "\t\t" << "Mother Name:"<<mother_name[i]<<"\n";
    cout<<"Address:"<<S_address[i]<<"\t\t"<<"Contact:"<<S_contact[i]<<endl;
    cout<<"\n\n"<<endl;
    }
    cout<< "\n";
    cout<< "Press - 1 - Return to HOME MENU"<<endl;
    cout<< "Press - 0 - EXIT"<<endl;
    int data;
        cout << "Enter Option:";
        cin >> data;
    switch(data)
       {
        case 1:
            clearScreen();
             home();
             break;
        case 0:
            cout<<"Loading ...  Loading ... Loading ..."<<endl;
            cout<<"Programme will be terminating";
            unload_file();
             exit(0);
             break;
        default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        view();
        break;
       }

}

///read file by using this function

void load_file()
{

    memset(studentID, false, sizeof(studentID));
    memset(studentNames, '\0', sizeof(studentNames));
    memset(studentSpeciality, '\0', sizeof(studentSpeciality));
    memset(studentSemester, '\0', sizeof(studentSemester));
    memset(studentsCgpa,0,sizeof(studentsCgpa));
    memset(studentsCredit_earn,0,sizeof(studentsCredit_earn));
    memset(father_name, '\0', sizeof(father_name));
    memset(mother_name, '\0', sizeof(mother_name));
    memset(S_address, '\0', sizeof(S_address));
    memset(S_contact, '\0', sizeof(S_contact));
    memset(studentDepartments, '\0', sizeof(studentDepartments));

    fs.open("sms.txt", ios::in );

    if(fs.is_open())
    {
        for(int i=0; !fs.eof(); i++)
        {
            char tmpdep[60];
            int tempID;
            char tempName[60];
            char tempSpe[60];
            char tempSeme[10];
            float tempcg;
            int tempcredit;
            char tmpfn[60];
            char tmpmn[60];
            char tmpadrs[60];
            char tmpcont[11];

            fs >> tmpdep >> tempID >> tempName >> tempSpe;
            fs >> tempSeme>>tempcg>>tempcredit>>tmpfn>>tmpmn>>tmpadrs>>tmpcont;



            studentID[tempID] = true;
            strcpy(studentDepartments[tempID],tmpdep);
            strcpy(studentNames[tempID], tempName);
            strcpy(studentSemester[tempID], tempSeme);
            strcpy(studentSpeciality[tempID],tempSpe);
            studentsCgpa[tempID]=tempcg;
            studentsCredit_earn[tempID]=tempcredit;
            strcpy(father_name[tempID],tmpfn);
            strcpy(mother_name[tempID],tmpmn);
            strcpy(S_address[tempID],tmpadrs);
            strcpy(S_contact[tempID],tmpcont);

        }
    }
    else
    {
        cout << " File did not open" << endl;
        exit(1);
    }

    home();
}

///Home Menu

void home()
{
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                          ***** Home Menu *****                   "<<endl;
    cout<< "\n";
    cout<< "Press - 1 - ADD Student Information"<<endl;
    cout<< "Press - 2 - VIEW Student Information"<<endl;
    cout<< "Press - 3 - EDIT Student Information"<<endl;
    cout<< "press - 4 - DELETE Student Information"<<endl;
    cout<< "press - 5 - Search Student Information"<<endl;
    cout<< "Press - 0 - EXIT"<<endl;
    cout<< "\n"<< "\n";
    int input;
    cout<< "Enter Your Option: ";
    cin>>input;

    switch(input)
    {
    case 1:
        clearScreen();
        add();
        break;
    case 2:
        clearScreen();
        view();
        break;
    case 3:
        clearScreen();
        edit();
        break;
    case 4:
        clearScreen();
        delete_info();
        break;
    case 5:
        clearScreen();
        search();
        break;
    case 0:
        unload_file();
        cout<<"Loading ...  Loading ... Loading ..."<<endl;
        cout<<"Programme will be terminating";

        exit(0);
        break;
    default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        home();
        break;
    }
}

///edit student information
void edit()
{

    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Edit Information *****                   "<<endl;
    cout<< "\n";

    cout<<" ??? Are You Sure to Edit Student Information ???"<<endl;
    system("PAUSE");
    clearScreen();
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Edit Information *****                   "<<endl;
    cout<< "\n";

    cout<<"Press - 1 - Edit Information"<<"\n"<<endl;
    cout<<"Press - 2 - HOME MENU"<<"\n"<<endl;
    cout<<"Press - 0 - EXIT"<<"\n"<<endl;


    int data;
        cout << "Enter Option:";
        cin >> data;
    switch(data)
       {
        case 1:
            clearScreen();
             edit_info();
             break;
        case 2:
            clearScreen();
             home();
             break;
        case 0:
             unload_file();
        cout<<"Loading ...  Loading ... Loading ..."<<endl;
        cout<<"Programme will be terminating";

        exit(0);
        break;
    default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        edit();
        break;
    }



}

void edit_info()
{
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Edit Information *****                   "<<endl;
    cout<< "\n";

    int id;
     cout<<" ??? Which ID you want to EDIT ??? "<<endl;
    cout<<"\n\n"<<"Enter a ID :";
    cin>>id;
    if(studentID[id]== false)
    {
    cout<<"NO Student are Available in this ID."<<endl;
    system("PAUSE");
    clearScreen();
    home();
    }
     else if(studentID[id]== true)
    {
        clearScreen();

     cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Edit Information *****                   "<<endl;
    cout<< "\n";

     cout<<"**Enter Student's Department **"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"\n\n";
    cout<<"Press - 1 - CSE"<<endl;
    cout<<"Press - 2 - EEE"<<endl;
    cout<<"Press - 3 - ECE"<<endl;
    cout<<"Press - 4 - B.Pharm"<<endl;
    cout<<"Press - 5 - English"<<endl;
    cout<<"Press - 6 - BBA"<<endl;
    cout<<"Press - 7 - LLB"<<endl;
    cout<<"Press - 8 - Economics"<<endl;
    cout<<"\n"<<endl;
    cout<<"Press - 9 - HOME MENU"<<"\n"<<endl;
    cout<<"Press - 0 - EXIT"<<"\n"<<endl;


    int data;
        cout << "Enter Option:";
        cin >> data;
    switch(data)
       {
        case 1:
             st = &cse;
             st -> Department("CSE");
             break;
        case 2:
             st = &eee;
             st -> Department("EEE");
             break;
        case 3:
            st = &ece;
             st -> Department("ECE");
             break;
        case 4:
            st = &pharm;
             st -> Department("B.Pharm");
             break;
        case 5:
            st = &eng;
             st -> Department("English");
             break;
        case 6:
            st = &bba;
             st -> Department("BBA");
             break;
        case 7:
            st = &llb;
             st -> Department("LLB");
             break;
        case 8:
            st = &eco;
             st -> Department("Economics");
             break;
        case 9:
             clearScreen();
             home();
             break;
        case 0:
            cout<<"Loading ...  Loading ... Loading ..."<<endl;
            cout<<"Programme will be terminating ";
            unload_file();
            exit(0);
        default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        break;
       }
       clearScreen();

    char tempNames[60];
    int id;
    char tempsemester[10];
    float tempcg;
    int tmpce;
    char tempfn[60];
    char tempmn[60];
    char tempAdrs[60];
    char tempCont[11];

    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Edit Information *****                   "<<endl;
    cout<< "\n";


    cout<<"Enter Student ID:";
    cin >> id;
    cout<<"Enter Student Name:";
    cin >> tempNames;
    cout<<"Enter Semester:";
    cin>>tempsemester;
    cout<<"Enter CGPA:";
    cin>>tempcg;
    cout<<"How many credit earned:";
    cin>>tmpce;
    cout<<"Enter Father Name:";
    cin>>tempfn;
    cout<<"Enter Mother Name:";
    cin>>tempmn;
    cout<<"Enter Adress:";
    cin>>tempAdrs;
    cout<<"Enter Contact Number:";
    cin>>tempCont;


    st -> setInfo(tempNames, id,tempsemester,tempcg,tmpce,tempfn,tempmn,tempAdrs,tempCont);
    studentsCgpa[id]= st -> retCgpa();
    strcpy(studentSpeciality[id] , st -> speciality());
    strcpy(studentDepartments[id] , st -> retDepartment());
    strcpy(studentSemester[id], st -> retsemester());
    strcpy(studentNames[id], st-> retName());
    studentID[id] = true;
    studentsCredit_earn[id]= st -> retcreditearn();
    strcpy(father_name[id], st -> retFname());
    strcpy(mother_name[id], st -> retMname());
    strcpy(S_address[id], st -> retadrs());
    strcpy(S_contact[id], st -> retcont());


    cout<<"\n"<<"!!! Informations are Edited !!!"<<"\n"<<endl;
    unload_file();
     system("PAUSE");
    clearScreen();

    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Edit Information *****                   "<<endl;
    cout<< "\n";

    cout<<"Press - 1 - HOME MENU"<<"\n"<<endl;
    cout<<"Press - 0 - EXIT"<<"\n"<<endl;


    int input;
        cout << "Enter Option:";
        cin >> input;
    switch(input)
       {

        case 1:
            clearScreen();
             home();
             break;
        case 0:
             unload_file();
        cout<<"Loading ...  Loading ... Loading ..."<<endl;
        cout<<"Programme will be terminating";

        exit(0);
        break;
    default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        search();
        break;
    }
    }

}

///search student information
void search()
{
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Search Information *****                   "<<endl;
    cout<< "\n";

    cout<<" ??? Are You Sure to Edit Student Information ???"<<endl;
    system("PAUSE");
    clearScreen();
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Search Information *****                   "<<endl;
    cout<< "\n";

    cout<<"Press - 1 - Search Information"<<"\n"<<endl;
    cout<<"Press - 2 - HOME MENU"<<"\n"<<endl;
    cout<<"Press - 0 - EXIT"<<"\n"<<endl;


    int data;
        cout << "Enter Option:";
        cin >> data;
    switch(data)
       {
        case 1:
            clearScreen();
             search_info();
             break;
        case 2:
            clearScreen();
             home();
             break;
        case 0:
             unload_file();
        cout<<"Loading ...  Loading ... Loading ..."<<endl;
        cout<<"Programme will be terminating";

        exit(0);
        break;
    default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        search();
        break;
    }
}

void search_info()
{
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Search Information *****                   "<<endl;
    cout<< "\n";
    int searchkey;

    cout<<" ??? Which ID you want to search ??? "<<endl;
    cout<<"\n\n"<<"Enter a ID :";
    cin>>searchkey;

    if(studentID[searchkey]== false)
    {
    cout<<"Please Add students first."<<endl;
    system("PAUSE");
    clearScreen();
    home();
    }
    else if(studentID[searchkey]== true)
    {
        clearScreen();
         cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Search Information *****                   "<<endl;
    cout<< "\n"<<endl;
       cout<<"All Information about "<< studentNames[searchkey]<<"\n\n"<<endl;
    cout << "Department:"<<studentDepartments[searchkey]<<"\t\t"<<"ID:"<< searchkey << "\t\t" << "Name:"<< studentNames[searchkey] << "\n";
    cout<< "speciality:"<< studentSpeciality[searchkey]<< "\t\t"<<"Semester:"<<studentSemester[searchkey]<<"\t\t"<<"CGPA:"<<studentsCgpa[searchkey]<<"\n";
    cout<<"Credit Earned:"<<studentsCredit_earn[searchkey]<< "\t\t" <<"Father Name:"<<father_name[searchkey] << "\t\t" << "Mother Name:"<<mother_name[searchkey]<<"\n";
    cout<<"Address:"<<S_address[searchkey]<<"\t\t"<<"Contact:"<<S_contact[searchkey]<<endl;
    cout<<"\n\n"<<endl;

    system("PAUSE");
    clearScreen();
    cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Search Information *****                   "<<endl;
    cout<< "\n"<<endl;

    cout<<"Press - 1 - HOME MENU"<<"\n"<<endl;
    cout<<"Press - 0 - EXIT"<<"\n"<<endl;


    int data;
        cout << "Enter Option:";
        cin >> data;
    switch(data)
       {

        case 1:
            clearScreen();
             home();
             break;
        case 0:
             unload_file();
        cout<<"Loading ...  Loading ... Loading ..."<<endl;
        cout<<"Programme will be terminating";

        exit(0);
        break;
    default:
        cout<<"\n"<<endl;
        cout<<" ###You Choose WRONG!!! Option ###"<<endl<<"*** Enter Correct Option ***"<<endl;
        system("PAUSE");
        clearScreen();
        search();
        break;
    }

    }
    else
    {
        cout<<"Enter Valid ID . . ."<<endl;
    system("PAUSE");
    clearScreen();
    search_info();
    }

}

///delete information

void delete_info()
{
     cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Delete Information *****                   "<<endl;
    cout<< "\n";

  int delete_id;
    cout<<"??? Are you sure to Delete Information ???"<<"\n\n"<<endl;
    cout<<"Press - 'Y' for YES"<<"\n"<<endl;
    cout<<"Press - 'N' for NO"<<"\n"<<endl;
    char a;
    cout<<"Choose Option:";
    cin>>a;
    if(a== 'N' || a== 'n')
    {
        clearScreen();
        home();
    }
    else if(a== 'Y' || a== 'y'){
            clearScreen();
         cout<<"                     ## Student Management System ##             "<<endl;
    cout<<"                       ------------***------------               "<<endl;
    cout<<"                       ***** Delete Information *****                   "<<endl;
    cout<< "\n";
    cout<<" ??? Which ID you want to search ??? "<<endl;
    cout<<"\n\n"<<"Enter a ID :";
    cin>>delete_id;
    studentID[delete_id] = false;

    fs.open("sms.txt", ios::out  );

        if(fs.is_open()){
        for(int i=0; i<size; i++)
        {
            if(studentID[i] == false)
                continue;

            fs <<studentDepartments[i]<< " " << i << " " << studentNames[i] << " " << studentSpeciality[i]<< " " ;
            fs << studentSemester[i] << " " << studentsCgpa[i]<< " " << studentsCredit_earn[i]<< " " ;
            fs<<father_name[i] << " " <<mother_name[i] << " " <<S_address[i]<< " " <<S_contact<<endl;

        }
    }
    else
    {
        cout << "File did not open" << endl;
        exit(1);
    }
    fs.close();
system("PAUSE");
clearScreen();

home();
}}

///main function

int main()
{

    cout<<"Loading File . . . "<<endl;
    system("PAUSE");
    clearScreen();
    load_file();

    home();

    return 0;
}
