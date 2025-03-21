#include<iostream>
#include<iomanip>
using namespace std;

//Student Number
int studentNumber=0;

struct StudentDataBase{
    char Name[50],LastName[40],Faculty[20],Phone[20],Class[50],Grade,SubjectG[5];
    int ID,Subject[5],Total,Percentage;
    float GPA;
};

//MAX Student is 1000
struct StudentDataBase SDS[1000];

//Function to Store Student Data
void SDBMS(int N){
    FILE *SDMS;
    //Open File
    SDMS = fopen("Student DataBase Management System.txt","a");
    //Student Information System
    // If N is 1 You can Add Student Details
    if(N == 1){
    int Number;
    cout<<"Enter Student Number : ";
    cin>>Number;

    for(int i=0;i<Number;i++){
    cout<<"--:Enter "<<studentNumber+1<<" Student Information System:--"<<endl;
    cout<<"Enter Name : ";
    cin>>SDS[studentNumber].Name;
    cout<<"Enter Last Name : ";
    cin>>SDS[studentNumber].LastName;
    cout<<"Enter ID : ";
    cin>>SDS[studentNumber].ID;
    cout<<"Enter Phone Number : ";
    cin>>SDS[studentNumber].Phone;
    cout<<"Enter Class : ";
    cin>>SDS[studentNumber].Class;
    cout<<"Enter Faculty : ";
    cin>>SDS[studentNumber].Faculty;
    cout<<"Enter Calculas Marks : ";
    cin>>SDS[studentNumber].Subject[0];
    cout<<"Enter Programming Marks : ";
    cin>>SDS[studentNumber].Subject[1];
    cout<<"Enter English Marks : ";
    cin>>SDS[studentNumber].Subject[2];
    cout<<"Enter Computer Marks : ";
    cin>>SDS[studentNumber].Subject[3];
    cout<<"Enter DLD Marks : ";
    cin>>SDS[studentNumber].Subject[4];
    //Process of Marks
    SDS[studentNumber].Total=SDS[studentNumber].Subject[0]+SDS[studentNumber].Subject[1]+SDS[studentNumber].Subject[2]+SDS[studentNumber].Subject[3]+SDS[studentNumber].Subject[4];
    SDS[studentNumber].Percentage=SDS[studentNumber].Total/5;
    //Grade
    if(SDS[studentNumber].Percentage > 0 && SDS[studentNumber].Percentage <55){
        SDS[i].Grade = 'F';
    }else if(SDS[studentNumber].Percentage > 55 && SDS[studentNumber].Percentage < 65){
        SDS[i].Grade = 'D';
    }else if(SDS[studentNumber].Percentage >65 && SDS[studentNumber].Percentage < 75){
        SDS[i].Grade = 'C';
    }else if(SDS[studentNumber].Percentage > 75 && SDS[studentNumber].Percentage < 85){
        SDS[i].Grade = 'B';
    }else if(SDS[studentNumber].Percentage > 85 && SDS[studentNumber].Percentage <= 100){
        SDS[i].Grade = 'A';
    }
    //Subject Grade
    for(int i=0;i<5;i++){
    if(SDS[studentNumber].Subject[i] <= 100 && SDS[studentNumber].Subject[i] >= 85){
        SDS[studentNumber].SubjectG[i] = 'A';
    }else if(SDS[studentNumber].Subject[i] <85 && SDS[studentNumber].Subject[i] >= 75){
        SDS[studentNumber].SubjectG[i] = 'B';
    }else if(SDS[studentNumber].Subject[i] <75 && SDS[studentNumber].Subject[i]  >= 65){
        SDS[studentNumber].SubjectG[i] = 'C';
    }else if(SDS[studentNumber].Subject[i] <65 && SDS[studentNumber].Subject[i] >=55){
        SDS[studentNumber].SubjectG[i] = 'D';
    }else if(SDS[studentNumber].Subject[i] < 55){
        SDS[studentNumber].SubjectG[i] = 'F';
    }}
    //Data Save in File
    fprintf(SDMS,"|-----------------------|%s| Information -----------------------|\n",SDS[studentNumber].Name);
    fprintf(SDMS,"	Name      : %s\n	Last Name : %s\n",SDS[studentNumber].Name,SDS[studentNumber].LastName);
    fprintf(SDMS,"	ID    : %d\n	Phone : %s\n",SDS[studentNumber].ID,SDS[studentNumber].Phone);
    fprintf(SDMS,"	Class : %s\n	Faculty : %s\n",SDS[studentNumber].Class,SDS[studentNumber].Faculty);
    fprintf(SDMS,"	..............................................................................\n");
    fprintf(SDMS,"	Subject                        Mark                     Grade\n");
    fprintf(SDMS,"	............................................................................\n");
    fprintf(SDMS,"	Calculas                        %d                         %c  \n",SDS[studentNumber].Subject[0],SDS[studentNumber].SubjectG[0]);
    fprintf(SDMS,"	Programming               %d                        %c  \n",SDS[studentNumber].Subject[1],SDS[studentNumber].SubjectG[1]);
    fprintf(SDMS,"	English                         %d                         %c  \n",SDS[studentNumber].Subject[2],SDS[studentNumber].SubjectG[2]);
    fprintf(SDMS,"	Computer                     %d                         %c  \n",SDS[studentNumber].Subject[3],SDS[studentNumber].SubjectG[3]);
    fprintf(SDMS,"	DLD                              %d                         %c  \n",SDS[studentNumber].Subject[4],SDS[studentNumber].SubjectG[4]);
    fprintf(SDMS,"	............................................................................\n");
    fprintf(SDMS,"	.Total Marks           Percentage               Grade.\n");
    fprintf(SDMS,"	............................................................................\n");
    fprintf(SDMS,"	    %d                            %d                          %c\n",SDS[studentNumber].Total,SDS[studentNumber].Percentage,SDS[studentNumber].Grade);
    fprintf(SDMS,"	............................................................................\n");
    //Change to Next Student
    studentNumber++;
    cout<<endl<<SDS[studentNumber].Name<<"Data is Successfully Save in File."<<endl;
    system("cls");
    }
    fclose(SDMS);
    //if N is 2 You can Search by ID
    }else if(N == 2){
    int ID;
    cout<<"Enter  Student ID : ";
    cin>>ID;
    for(int i=0;i<studentNumber;i++){
    if(ID == SDS[i].ID){
    cout<<"|-----------------------"<<SDS[i].Name<<"- Information -----------------------|\n";
    cout<<"Name      : "<<SDS[i].Name<<endl;
    cout<<"Last Name : "<<SDS[i].LastName<<endl;
    cout<<"ID        : "<<SDS[i].ID<<endl;
    cout<<"Phone     : "<<SDS[i].Phone<<endl;
    cout<<"Email     : "<<SDS[i].Class<<endl;
    cout<<"Faculty     : "<<SDS[i].Faculty<<endl;
    SDS[i].Total=SDS[i].Subject[0]+SDS[i].Subject[1]+SDS[i].Subject[2]+SDS[i].Subject[3]+SDS[i].Subject[4];
    SDS[i].Percentage=SDS[i].Total/5;
    cout<<".................................................."<<endl;
    cout<<"Subject"<<setw(19)<<"Marks"<<setw(15)<<"Grade"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Calculas"<<setw(17)<<SDS[i].Subject[0]<<setw(15)<<SDS[i].SubjectG[0]<<endl;
    cout<<"Programming"<<setw(14)<<SDS[i].Subject[1]<<setw(15)<<SDS[i].SubjectG[1]<<endl;
    cout<<"English"<<setw(18)<<SDS[i].Subject[2]<<setw(15)<<SDS[i].SubjectG[2]<<endl;
    cout<<"Computer"<<setw(17)<<SDS[i].Subject[3]<<setw(15)<<SDS[i].SubjectG[3]<<endl;
    cout<<"DLD"<<setw(22)<<SDS[i].Subject[4]<<setw(15)<<SDS[i].SubjectG[4]<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Total"<<setw(24)<<"Percentage"<<setw(18)<<"Grade"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<SDS[i].Total<<setw(22)<<SDS[i].Percentage<<setw(20)<<SDS[i].Grade<<endl;
    cout<<"-------------------------------------------------"<<endl;
    }
    }
    }
    //Show Student Which added in DataBase
    else if(N == 3){
    cout<<"------------ : These Student are in DataBase : --------------"<<endl;
    for(int i=0;i<studentNumber;i++){
    cout<<"No : "<<i+1<<"    "<<"Name : "<<SDS[i].Name<<"     LastName : "<<SDS[i].LastName<<"    ID : "<<SDS[i].ID;
    cout<<endl<<"-----------------------------------------------------------"<<endl;
    }
    }
    //Delete Student Data and Information
    else if(N == 4){
    }
    }

//Function to Show all Student Data

void DisplaySD(){
    for(int i=0;i<studentNumber;i++){
    cout<<"|-----------------------"<<SDS[i].Name<<"- Information -----------------------|\n";
    cout<<"Name  : "<<SDS[i].Name<<setw(25)<<"Last Name : "<<SDS[i].LastName<<endl;
    cout<<"ID    : "<<SDS[i].ID<<setw(25)<<"Faculty : "<<SDS[i].Faculty<<endl;
    cout<<"Phone : "<<SDS[i].Phone<<setw(13)<<"Class : "<<SDS[i].Class<<endl;
    cout<<".................................................."<<endl;
    cout<<"Subject"<<setw(20)<<"Marks"<<setw(20)<<"Grade"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Calculas"<<setw(19)<<SDS[i].Subject[0]<<setw(20)<<SDS[i].SubjectG[0]<<endl;
    cout<<"Programming"<<setw(16)<<SDS[i].Subject[1]<<setw(20)<<SDS[i].SubjectG[1]<<endl;
    cout<<"English"<<setw(20)<<SDS[i].Subject[2]<<setw(20)<<SDS[i].SubjectG[2]<<endl;
    cout<<"Computer"<<setw(19)<<SDS[i].Subject[3]<<setw(20)<<SDS[i].SubjectG[3]<<endl;
    cout<<"DLD"<<setw(24)<<SDS[i].Subject[4]<<setw(20)<<SDS[i].SubjectG[4]<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Total"<<setw(24)<<"Percentage"<<setw(18)<<"Grade"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<SDS[i].Total<<setw(22)<<SDS[i].Percentage<<setw(20)<<SDS[i].Grade<<endl;
    cout<<"-------------------------------------------------"<<endl;
    }
}
//Main Function
int main(){
    //Create File
    FILE *SDMS;
    //open file
    SDMS = fopen("Student DataBase Management System.txt","w");
    //Write text in file
    fprintf(SDMS,"\t------: Welcome to Student DataBase Management System :------\n");
    //close file
    fclose(SDMS);
    cout<<endl<<"\t------: Welcome to Student DataBase Management System :------"<<endl;
    cout<<"\t=============================================================";
    cout<<endl<<"\t=========----:Student DataBase Management System:---=========="<<endl;
    //There Are Menu to Choice
    int Condition=0,Choice;
    while(Condition !=  1){
        cout<<"======================================="<<endl;
        cout<<"Menu:"<<endl;
        cout<<"------"<<endl;
        cout<<"1 : Add Student Data:"<<endl;
        cout<<"2 : Search for Student by ID:"<<endl;
        cout<<"3 : Show Which Student are in DataBase Added:"<<endl;
        cout<<"4 : Display All Student All Data:"<<endl;
        cout<<"5 : Delete Student Data and Information [This Feature is Not Available Now (Coming Soon)]"<<endl;
        cout<<"6 : Exit Program:"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"Enter Choice : ";
        cin>>Choice;
        system("cls");
    switch(Choice){

    case 1:
    //Add Student Details
    SDBMS(Choice);
    break;
    case 2:
    //Search by Id to Find Student Details
    SDBMS(Choice);
    break;
    case 3:
    //Show Student Which Add in DataBase
    SDBMS(Choice);
    break;
    case 4:
    //Show All Student Details
    DisplaySD();
    break;
    case 5:
    //Delete Student Data and Information
    SDBMS(Choice);
    break;
    case 6:
    cout<<"----------------------------"<<endl;
    cout<<"Program Exit Successfully."<<endl;
    cout<<"----------------------------"<<endl;
    Condition = 1;
    break;
    default:
    cout<<"Try Again Enter Correct Choice";
    break;
    }
    }
return 0;
}




