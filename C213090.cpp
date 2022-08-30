/*******************************************************************************


                   * 2BM SECOND PROJECT
                   * PROJECT NAME :- TEACHER INFORMACTION & STUDENT INFORMACTION
                   * ASSALAMU ALAIKUM WA RAHMATULLAH
                   * MY ID IS-----C213090-------


********************************************************************************/

#include <bits/stdc++.h>
//#define input freopen("D:/inputoutput/input.txt", "r", stdin);
//#define output freopen("D:/inputoutput/output.txt", "w",stdout);
using namespace std;
#define ll long long
#define nl endl
#define sort(a) sort(a.begin(),a.end())
#define rep(i,a,b) for (ll i = a; i < b; i++)

    int m,n;

    class teacher{
    public:

        string name,department,deg,id;
        void set()
        {
                cout<<"Enter Teacher Name : ";
                cin>>name;
                cout<<nl<<"Enter Teacher Department : ";
                cin>>department;
                cout<<nl<<"Enter Teacher Designation : ";
                cin>>deg;
                cout<<nl<<"Enter Teacher ID : ";
                cin>>id;
        }
        void get()
        {
                cout<<nl<<"Teacher Name : "<<name;
                cout<<nl<<"Teacher Department : "<<department;
                cout<<nl<<"Teacher Designation : "<<deg;
                cout<<nl<<"Teacher ID : "<<id<<nl;
        }
    };

class student
    {
    public:
        int s_id;
        string student_name;
        string student_depart;
        string student_section;
        string teacher_name;
        void set_data()
        {


       cout<<"Enter Student ID : ";

       cin>>s_id;

       cout<<"Enter Student Name : ";

       cin>>student_name;

       cout<<"Enter Student Department : ";

       cin>>student_depart;

       cout<<"Enter Student Section : ";

       cin>>student_section;

       cout<<"Teacher Name :  ";

       cin>>teacher_name;


        }

        void get1_data()
        {

       cout<<"Student ID : "<<s_id<<endl;

       cout<<"Student Name : "<<student_name<<endl;

       cout<<"Student Department : "<<student_depart <<endl;

       cout<<"Student Section : "<<student_section<<endl;

       cout<<"Student Name :  "<<teacher_name<<endl;
        }

    };




void menu()
{
        cout<<"------------------------- Wellcome To IIUC ------------------------"<<endl;

        cout<<"------------ Wellcome Student & Teacher Managment System  ------- "<<endl;

        cout<<"---------------- Press   1     Register New Teacher  -------------------- "<<endl;

        cout<<"---------------- Press   2     Register New Student ----------------------"<<endl;

        cout<<"---------------- Press   3     Show Teacher All Data  ------------------- "<<endl;

        cout<<"---------------- Press   4     Show Student All Data  -------------------- "<<endl;

        cout<<"---------------- Press   5     Search Enter Teachers ID  ---------------- "<<endl;

        cout<<"---------------  Press   6     Search Enter Student ID  ------------------"<<endl;

        cout<<"---------------  Press   7     Search Enter Teachers Name ----------------"<<endl;

        cout<<"---------------  Press   8     Search Enter Teachers Deaprtment --------"<<endl;

        cout<<"---------------  Press   0     -----------------EXIT---------"<<endl;

        cout<<endl;
}


int main(){
    cout<<"Enter The Total Capacity of IIUC Teacher : ";
    cin>>n;
    cout<<"Enter The Total Capacity of IIUC Student : ";
    cin>>m;
  menu();
    teacher t[n];
    student s[m];
    int Teacher=0,Student=0;
  int q;

  while(cout<<nl<<"Enter your option : ",cin>>q){

  if(q==1) {
    int ne;
    cout<<"How Many Teacher Do You Want To Register : ";
    cin>>ne;
    Teacher+=ne;
    rep(i,0,ne)
    t[i].set();
  }

  else if (q==2){
    int ne;
    cout<<"How Many Student Do You Want To Register : ";
    cin>>ne;
    Student+=ne;
    rep(i,0,ne)
    s[i].set_data();
  }

  else if (q==3) {
    rep(i,0,Teacher)
    t[i].get();
  }
  else if (q==4) {
    rep(i,0,Student)
    s[i].get1_data();
    }
 else if (q==5) {
    string f;
    cout<<"Enter Teacher ID : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==t[i].id){
            t[i].get();
            break;
        }
    }
    cout<<"Not Found."<<nl;
    }
    else if (q==6) {
    int f;
    cout<<"Enter Student ID : ";
    cin>>f;
    rep(i,0,m)
    {
        if(f==s[i].s_id){
            s[i].get1_data();
            break;
        }
    }
    cout<<"Not Found."<<nl;
    }
     else if (q==7) {
    string f;
    cout<<"Enter Teacher Name : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==t[i].name){
            t[i].get();
            break;
        }
    }
    cout<<"Not Found."<<nl;
    }
    else if(q==8)
    {
    string f;
    cout<<"Enter Teacher Department : ";
    cin>>f;
    rep(i,0,n)
    {
        if(f==t[i].department){
            t[i].get();
            break;
        }
    }
    cout<<"Not Found."<<nl;

  }


    else if(q==0)
    {
        break;
    }

  }
  return 0;
 }

