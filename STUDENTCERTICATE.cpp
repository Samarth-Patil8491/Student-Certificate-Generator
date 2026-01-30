// #include<iostream>
// #include<vector>
// using namespace std;
// class student{
//     private:
//     string student_name,school_name,student_mail_id;
//     string father_name,mother_name,guardian_name,date_of_birth;
//     vector<string>subjects;
//     vector<int>subject_code;
//     int roll_no,regisration_no,standard,certificates,enrolled_sub;
//     vector<int>theory_marks;
//     vector<int>IA;
//     vector<int>marks;
//     vector<string>grades;
//     char gender;
//     int total=0;
//     float percentage=0;
//     public:
//     string getgrade(int total){
//         if (total>=90)return "A+";
//         else if(total>=80 && total<90) return "A";
//         else if(total>=70 && total<80)return "B+";
//         else if(total>=60 && total<70)return "B";
//         else if(total>=50 && total<60)return "C";
//         else if(total>=40 && total<50)return "D";
//         else return "F";
//         }
//     void getdata(){
//             cout<<"Student name: ";
//             cin>>student_name;
//             cout<<"Roll no: ";
//             cin>>roll_no;
//             cout<<"Registration no: ";
//             cin>>regisration_no;
//             cout<<"Standarad: ";
//             cin>>standard;
//             cout<<"School name: ";
//             cin>>school_name;
//             cout<<"Gender: ";
//             cin>>gender;
//             cout<<"Father name: ";
//             cin>>father_name;
//             cout<<"Mother name: ";
//             cin>>mother_name;
//             cout<<"Date of Birth: ";
//             cin>>date_of_birth;
//             cout<<"No of Enrolled Subjects: ";
//             cin>>enrolled_sub;
//            // cout<<"Subjects enrolled: ";
//             for (int i = 0; i <enrolled_sub; i++)
//             {
//                 int subs_code;
//                 string subs;
//                 int theory;
//                 int ia;
//                 cout<<"subject code for subject "<<i+1<<" in numbers: ";
//                 cin>>subs_code;
//                 subject_code.push_back(subs_code);

//                 cout<<"Subject "<<i+1<<": ";
//                 cin>>subs;
//                 subjects.push_back(subs);

//                 cout<<"Theory marks: "<<subs<<": ";
//                 cin>>theory;
//                 theory_marks.push_back(theory);

//                 cout<<"Ia marks: "<<subs<<": ";
//                 cin>>ia;
//                 IA.push_back(ia);

//                 // cout<<"Marks of "<<subs<<": ";
//                 // cin>>mar;
//                 // marks.push_back(mar);
//             }
//     }
//     void calculate_data(){
//         int mar;
//         for (int i = 0; i < enrolled_sub; i++)
//         {
//             mar=theory_marks[i]+IA[i];
//             marks.push_back(mar);
//             grades.push_back(getgrade(mar));
//             total+=mar;
//         }
//         percentage=(float)total/enrolled_sub;
//         cout<<"Total: "<<total<<endl;
//         cout<<"Percentage: "<<percentage<<endl;
        
//     }
//     void display(){

//         cout<<"==========================Student Report===================================="<<endl;
//         cout<<"----------------------------------------------------------------------------"<<endl;
//         cout<<"<-------------------------student details-----------------------------------"<<endl;
//         cout<<"----------------------------------------------------------------------------"<<endl;
//         cout<<"Student name: "<<student_name<<endl;
//         cout<<"Roll no: "<<roll_no<<endl;
//         cout<<"Registration no: "<<regisration_no<<endl;
//         cout<<"Standard: "<<standard<<endl;
//         cout<<"School name: "<<school_name<<endl;
//         cout<<"Gender: "<<gender<<endl;
//         cout<<"Father name: "<<father_name<<endl;
//         cout<<"Mother name: "<<mother_name<<endl;
//         cout<<"Date of birth: "<<date_of_birth<<endl;
//         cout<<"Guardian name: "<<guardian_name<<endl;
//         cout<<"Enrolled subjects: "<<enrolled_sub<<endl;
//         cout<<"----------------------------------------------------------------------------"<<endl;
//         cout<<"Sub code\tSubject\t\tTheory\tIA\tTotal\tGarde"<<endl;
//         for (int i = 0; i < subjects.size(); i++)
//         {
//             cout<<subject_code[i]<<"\t\t"<<subjects[i]<<"\t\t"
//             <<theory_marks[i]<<"\t"<<IA[i]<<"\t"<<marks[i]<<"\t"<<grades[i]<<endl;
//         }
//         cout<<"----------------------------------------------------------------------------"<<endl;
//         cout<<"GRAND TOTAL: "<<total<<endl;
//         cout<<"PERCENTAGE: "<<percentage<<"%"<<endl;
//         cout<<"============================================================================"<<endl;
//     }
// };
// int main(){
//     int n;
//     cout<<"How many student certificate to generate ?"<<endl;
//     cin>>n;
//     vector<student>stu(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"--Enter the details for student "<<i+1<<"--"<<endl;
//         stu[i].getdata();
//         stu[i].calculate_data();
//     }
//     cout<<"============================================================================"<<endl;
//     cout<<"=========================PRINTING ALL CERTIFICATE==========================="<<endl;
//     cout<<"============================================================================"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         stu[i].display();
//     }
    
//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    string arr[3]={"flower","flow","flight"};
    // for (int i = 0; i < 1; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[j]<<endl;
    //     }
    // }
    cout<<arr[0.1];
    return 0;
}