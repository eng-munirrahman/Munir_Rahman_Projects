#include<iostream>
#include<string.h>
using namespace std;
///Holder
struct BankSystem{
    char Name[50],LastName[50],AccountNum[50],Password[30];
    int Age,Balance,Loan=0;
};
///Admin
struct admin{
    string Name,Password;
};
///Manager
struct Manager{
    char Name[50],Password[50];
};

///Holders Account Numbers
int Number=0;

///Admin Account Numbers
int Number2=0;

///Managers Account Numebrs
int Number3=0;

///Max Account Holders
struct BankSystem B[1000];

///Max Bank Mangers
struct Manager M[5];

///Max Bank Admins
struct admin A[1];

///Add Account Holders
void Adddata(){
    int Balance;
    string Password;
    //Add Data
    cout<<"Enter "<<Number+1<<" Account Holder Name : ";
    cin>>B[Number].Name;
    cout<<"Enter Last Name : ";
    cin>>B[Number].LastName;
    cout<<"Enter Age : ";
    cin>>B[Number].Age;
    cout<<"Enter Account Number : ";
    cin>>B[Number].AccountNum;
    cout<<"Enter Balance : ";
    cin>>B[Number].Balance;
    cout<<"Enter Account Password : ";
    cin>>B[Number].Password;
    Number++;
    system("cls");
    cout<<"-----------------------------------------"<<endl;
    cout<<"-----Holder Account Add Successfully-----"<<endl;
    cout<<"-----------------------------------------"<<endl;
}

///Find Account
void Find(){
    string AccountNum;
    char Password[30];
    int Choice;
    //char Answer;
    bool Exit=true;
    cout<<"Enter Account ID : ";
    cin>>AccountNum;
    while(Exit){
    for(int i=0;i<Number;i++){
     if(AccountNum == B[i].AccountNum){
        cout<<"Successfully Account Finded"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Account Holder Name : "<<B[i].Name<<endl;
        cout<<"-----------------------------------------"<<endl;
     }
        cout<<"Enter 1 for more Details : "<<endl;
        cout<<"Enter 2 for Exit         : "<<endl;
        cout<<"Enter Choice             : ";
        cin>>Choice;
        if(Choice == 1){
        cout<<"Enter Password for more Details : ";
        cin>>Password;
        char Answer = strcmp(B[i].Password,Password);
        if(Answer == 0){
            cout<<"-----------------------------------------"<<endl;
            cout<<"Name       : "<<B[i].Name<<endl;
            cout<<"Last_Name  : "<<B[i].LastName<<endl;
            cout<<"Age        : "<<B[i].Age<<endl;
            cout<<"AccountNum : "<<B[i].AccountNum<<endl;
            cout<<"Balance    : "<<B[i].Balance<<endl;
            cout<<"Password   : "<<B[i].Password<<endl;
            cout<<"Loan       : "<<B[i].Loan<<endl;
            cout<<"-----------------------------------------"<<endl;
        break;
        }
        cout<<"Try Again Enter Correct Passowrd!"<<endl;
        break;
        }
        else if(Choice == 2){
          Exit = false;
        }
        else {
            cout<<"Try Again Enter Correct Choice"<<endl;
            cout<<"-----------------------------------------"<<endl;
       }
      break;
      }
      break;
     }
}

///Display All Account Holders
void display(){
    for(int i=0;i<Number;i++){
            cout<<"Name       : "<<B[i].Name<<endl;
            cout<<"Last_Name  : "<<B[i].LastName<<endl;
            cout<<"Age        : "<<B[i].Age<<endl;
            cout<<"AccountNum : "<<B[i].AccountNum<<endl;
            cout<<"Balance    : "<<B[i].Balance<<endl;
            cout<<"Password   : "<<B[i].Password<<endl;
            cout<<"Loan       : "<<B[i].Loan<<endl;
            cout<<"-----------------------------------------"<<endl;
    }
}

///Give Loan
void Loan(){
    string AccountNum1;
    char Password1[30];
    int Answer,Lon;
    system("cls");
    cout<<"\t\t\t<<<< Enter Account Number : ";
    cin>>AccountNum1;
    cout<<"\t\t\t<<<< Enter Account Password : ";
    cin>>Password1;
    system("cls");
    for(int i=0;i<Number;i++){
        if(AccountNum1 == B[i].AccountNum){
            Answer = strcmp(B[i].Password,Password1);
            if(Answer == 0){
            cout<<"-----------------------------------------"<<endl;
            cout<<"Your Account Balance is : "<<B[i].Balance<<endl;
            cout<<"Enter Amount of Money You Want by Loan : ";
            cin>>Lon;
            B[i].Loan += Lon;
            B[i].Balance += Lon;
            cout<<"-----------------------------------------"<<endl;
        }}
    }
}

///Change Holder Account Password
void Change(){
    string Account;
    char Password1[30];
    int Answer;
    system("cls");
    cout<<"\t\t\t<<<< Enter Bank Account Number : ";
    cin>>Account;
    cout<<"\t\t\t<<<< Enter Account Password : ";
    cin>>Password1;
    for(int i=0;i<Number;i++){
        if(Account == B[i].AccountNum){
            Answer = strcmp(Password1,B[i].Password);
            if(Answer == 0){
                cout<<"Old Password is : "<<B[i].Password<<endl;
                cout<<"Enter New Password : ";
                cin>>B[i].Password;
                cout<<"Password was Changed New Password is : "<<B[i].Password<<endl;
            }
        }
    }
}

///Change Manager Password
void ChangeManager(){
    string Account;
    char Password1[50];
    int Answer;
    system("cls");
    cout<<"\t\t\t<<<< Enter Bank Account Name : ";
    cin>>Account;
    cout<<"\t\t\t<<<< Enter Account Password : ";
    cin>>Password1;
    for(int i=0;i<Number3;i++){
        if(Account == M[i].Name){
            Answer = strcmp(Password1,M[i].Password);
            if(Answer == 0){
                system("cls");
                cout<<"Old Password is : "<<M[i].Password<<endl;
                cout<<"Enter New Password : ";
                cin>>M[i].Password;
                system("cls");
                cout<<"----------------------------------------------------------"<<endl;
                cout<<"-------Password was Changed to : "<<M[i].Password<<"------"<<endl;
                cout<<"----------------------------------------------------------"<<endl;
            }
        }
    }
}

///Out Money
void Out(){
    string Accout;
    char Passowrd1[30];
    char Answer;
    int Payout;
    cout<<"\t\t\t<<<< Enter Account Number : ";
    cin>>Accout;
    cout<<"\t\t\t<<<< Enter Password : ";
    cin>>Passowrd1;
    system("cls");
    for(int i=0;i<Number;i++){
        if(Accout == B[i].AccountNum){
            Answer = strcmp(B[i].Password,Passowrd1);
            if(Answer == 0){
                cout<<"Welcome to "<<B[i].Name<<" Account."<<endl;
                cout<<"\t<<<< Enter Amount Of Money You Want to Out : ";
                cin>>Payout;
                if(B[i].Balance>=Payout){
                B[i].Balance -= Payout;
                system("cls");
                cout<<"---------------------------------------------"<<endl;
                cout<<"Money is Successfully withdraw from Account"<<endl;
                cout<<"---------------------------------------------"<<endl;
                cout<<"-----Remining Balance : "<<B[i].Balance<<"-----."<<endl;
                cout<<"---------------------------------------------"<<endl;
                }
                else{
                    cout<<"You Don't Have Enough Balance!"<<endl;
                }
            }
            else {
                cout<<"Password is Wrong!"<<endl;
            }
        }
        else{
            cout<<"Account Number is Wrong!"<<endl;
        }
    }
    cout<<"----------------------------------------------------"<<endl;

}

///Manager Menu
void ManagerMenu(){
    A:
    int Choice;
    cout<<"1: Add Account Holder                ! "<<endl;
    cout<<"2: Find Account by Account Number    ! "<<endl;
    cout<<"3: Change Own Account Password       ! "<<endl;
    cout<<"4: Withdraw Money From Holder Account! "<<endl;
    cout<<"5: Exit                              ! "<<endl;
    cout<<"Enter Choice                         : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:
    cout<<"-----------<Here You Can Add Account Holders>-----------"<<endl;
    Adddata();
    goto A;
    break;
    case 2:
    cout<<"-----------<Here You Can Find Account Holders>-----------"<<endl;
    Find();
    goto A;
    break;
    case 3:
    cout<<"-----------<Here You Can Change Your Own Account Password>-----------"<<endl;
    ChangeManager();
    goto A;
    break;
    case 4:
    cout<<"-----------<Here You Can Changer Your Own Account Password>-----------"<<endl;
    Out();
    goto A;
    break;
    case 5:
    break;
    default:
        cout<<"Try Again Enter Correct Choice"<<endl;
    }

}

///Bank Manager
void manager(){
    int Choice,Answer,Answer1;
    char Name[50],Password[50];
    A:
    cout<<"If You Don't Have Account Only Admin Can Create Account For You!"<<endl;
    cout<<"\t\t\t<<<< 1 for Sign in!"<<endl;
    cout<<"\t\t\t<<<< 2 for Back Menu!"<<endl;
    cout<<"\t\t\t<<<< Enter Choice : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:
        cout<<"\t\t\t<<<< Sign in!"<<endl;
        cout<<"\t\t\t<<<< Enter Name :";
        cin>>Name;
        cout<<"\t\t\t<<<< Enter Password :";
        cin>>Password;
        for(int i=0;i<Number3;i++){
        Answer = strcmp(M[i].Password,Password);
        Answer1 = strcmp(M[i].Name,Name);
        }
        if(Answer1 != 0 && Answer != 0){
            cout<<"\t\t\t<<<< Account is Not Rajistered!"<<endl;
            goto A;
        }
        if(Answer1 != 0){
            cout<<"\t\t\t<<<< Name is incorrect!"<<endl;
            goto A;
        }
        else if(Answer != 0){
            cout<<"\t\t\t<<<< Password is incorrect!"<<endl;
            goto A;
        }
        if(Answer==0 && Answer1==0){
            cout<<"-----------------<Welcome Mr.Manager to Bank>-----------------"<<endl;
            ManagerMenu();
        }
        else{
            cout<<"\t\t\t<<<< Name or Password is Wrong or Not Rajistered!"<<endl;
            goto A;
        }
    break;
    case 2:
        break;
    default:
        cout<<"\t\t\t<<<< Try Again Enter Correct Choice!"<<endl;
    }
}

///Display Manager
void DisplayManager(){
    for(int i=0;i<Number3;i++){
            cout<<"Name       : "<<M[i].Name<<endl;
            cout<<"Password   : "<<M[i].Password<<endl;
            cout<<"-----------------------------------------"<<endl;
    }
}

///Add Managers
void addmanager(){
    char Name[50],Password[50];
    cout<<"Enter "<<Number3+1<<" Manager Name : ";
    cin>>M[Number3].Name;
    cout<<"Enter "<<Number3+1<<" Manager Password : ";
    cin>>M[Number3].Password;
    Number3++;
    system("cls");
    cout<<"---------------------------------------"<<endl;
    cout<<"|-------Account Add Successfully-------|"<<endl;
    cout<<"---------------------------------------"<<endl;
}

///Change Admin Password
void ChangeAdmin(){
    string Account;
    char Password1[30];
    int Answer;
    system("cls");
    cout<<"\t\t\t<<<< Enter Bank Account Name : ";
    cin>>Account;
    cout<<"\t\t\t<<<< Enter Account Password : ";
    cin>>Password1;
    for(int i=0;i<Number2;i++){
        if(Account == A[i].Name){
            if(Password1 == A[i].Password){
                Answer = 0;
            }
            if(Answer == 0){
                cout<<"Old Password is : "<<A[i].Password<<endl;
                cout<<"Enter New Password : ";
                cin>>A[i].Password;
                cout<<"Password was Changed New Password is : "<<A[i].Password<<endl;
            }
        }
    }
}

///Admin Menu
void AdminMenu(){
    int Choice;
    A:
    cout<<"1: Add Account Managers           ! "<<endl;
    cout<<"2: Show All Account Holders Data  ! "<<endl;
    cout<<"3: Show All Account Managers Data ! "<<endl;
    cout<<"4: Give Loan to Holder            ! "<<endl;
    cout<<"5: Changer Own Account Password   ! "<<endl;
    cout<<"6: Exit                           ! "<<endl;
    cout<<"Enter Choice                      : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:
    cout<<"-----------<Here You Can Add Account Managers>-----------"<<endl;
    addmanager();
    goto A;
    break;
    case 2:
    cout<<"-----------<Here You Can Display All Account Holders>-----------"<<endl;
    display();
    goto A;
    break;
    case 3:
    cout<<"-----------<Here You Can Display All Account Managers>-----------"<<endl;
    DisplayManager();
    goto A;
    break;
    case 4:
    cout<<"-----------<Here You Can Give Loan to Account Holders>-----------"<<endl;
    Loan();
    goto A;
    break;
    case 5:
    cout<<"-----------<Here You Can Changer Your Own Account Password>-----------"<<endl;
    ChangeAdmin();
    goto A;
    break;
    case 6:
    break;
    default:
        cout<<"Try Again Enter Correct Choice"<<endl;
    }

}

///Admin
void Admin(){
    int Choice,Answer1=1;
    string Password,Name;
    int Answer=1;
    A:
    cout<<"\t\t\t<<<< 1 for Sign in!"<<endl;
    cout<<"\t\t\t<<<< 2 for Back Menu!"<<endl;
    cout<<"\t\t\t<<<< Enter Choice : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:
        cout<<"\t\t\t<<<< Sign in!"<<endl;
        cout<<"\t\t\t<<<< Enter Name :";
        cin>>Name;
        cout<<"\t\t\t<<<< Enter Password :";
        cin>>Password;
        for(int i=0;i<Number2;i++){
        if(A[i].Password == Password){
            Answer = 0;
        }
        if(A[i].Name == Name){
            Answer1 = 0;
        }
        }
        if(Answer1 != 0 && Answer != 0){
            cout<<"\t\t\t<<<< Account is Not Rajistered!"<<endl;
            goto A;
        }
        if(Answer1 != 0){
            cout<<"\t\t\t<<<< Name is incorrect!"<<endl;
            goto A;
        }
        else if(Answer != 0){
            cout<<"\t\t\t<<<< Password is incorrect!"<<endl;
            goto A;
        }
        if(Answer==0 && Answer1==0){
            cout<<"-----------------<Welcome Mr.Admin to Bank>-----------------"<<endl;
            AdminMenu();
        }
        else{
            cout<<"\t\t\t<<<< Name or Password is Wrong or Not Rajistered!"<<endl;
            goto A;
        }
    break;
    case 2:
        break;
    default:
        cout<<"\t\t\t<<<< Try Again Enter Correct Choice!"<<endl;
    }
}

///Holder Menu
void HolderMenu(char Account[50],char Password[30]){
    int Choice;
    A:
    cout<<"1: Show your Account Information  ! "<<endl;
    cout<<"2: Change Account Password        ! "<<endl;
    cout<<"3: Exit                           ! "<<endl;
    cout<<"Enter Choice                      : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:{
    cout<<"-----------<Here You Can View Your Balance>-----------"<<endl;
    int Answer,Answer1;
    for(int i=0;i<Number;i++){
    Answer = strcmp(B[i].AccountNum,Account);
    Answer1 = strcmp(B[i].Password,Password);
    if(Answer != 0){
    cout<<"Account Number is Wrong!"<<endl;
    }
    if(Answer1 != 0){
    cout<<"Account Password is Wrong!"<<endl;
    }
    if(Answer1 == 0 && Answer == 0){
        cout<<"Name       : "<<B[i].Name<<endl;
        cout<<"Last_Name  : "<<B[i].LastName<<endl;
        cout<<"Age        : "<<B[i].Age<<endl;
        cout<<"AccountNum : "<<B[i].AccountNum<<endl;
        cout<<"Balance    : "<<B[i].Balance<<endl;
        cout<<"Password   : "<<B[i].Password<<endl;
        cout<<"Loan       : "<<B[i].Loan<<endl;
        cout<<"-----------------------------------------"<<endl;

    }else{
    cout<<"Account is not Rajistered!"<<endl;
    }

    }
    goto A;
    break;}
    case 2:
    cout<<"-----------<Here You Can Change Account Password>-----------"<<endl;
    Change();
    goto A;
    break;
    case 3:
    break;
    default:
        cout<<"Try Again Enter Correct Choice"<<endl;
    }
}

///Holder
void Holder(){
    int Choice,Answer1,j;
    char Password[30],Name[50];
    int Answer;
    A:
    cout<<"If You Don't Have Account Admin Can Create Account for You!"<<endl;
    cout<<"\t\t\t<<<< 1 for Sign in!"<<endl;
    cout<<"\t\t\t<<<< 2 for Back Menu!"<<endl;
    cout<<"\t\t\t<<<< Enter Choice : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:
        cout<<"\t\t\t<<<< Sign in!"<<endl;
        cout<<"\t\t\t<<<< Enter Name :";
        cin>>Name;
        cout<<"\t\t\t<<<< Enter Password :";
        cin>>Password;
        for(int i=0;i<Number;i++){
        Answer = strcmp(B[i].Password,Password);
        Answer1 = strcmp(B[i].Name,Name);
        j=i;
        }
        if(Answer1 != 0 && Answer != 0){
            cout<<"\t\t\t<<<< Account is Not Rajistered!"<<endl;
            goto A;
        }
        if(Answer1 != 0){
            cout<<"\t\t\t<<<< Name is incorrect!"<<endl;
            goto A;
        }
        else if(Answer != 0){
            cout<<"\t\t\t<<<< Password is incorrect!"<<endl;
            goto A;
        }
        if(Answer==0 && Answer1==0){
            cout<<"-----------------<Welcome Mr.Holder to Bank>-----------------"<<endl;
            HolderMenu(B[j].AccountNum,B[j].Password);
            goto A;
        }
        else{
            cout<<"\t\t\t<<<< Account is Not Rajistered!"<<endl;
            goto A;
        }
    break;
    case 2:
        break;
    default:
        cout<<"\t\t\t<<<< Try Again Enter Correct Choice!"<<endl;
    }

}

///Main menu
int main(){
    ///Admin Name & Password
    A[Number2].Name = "MunirRahman";
    A[Number2].Password = "7117";
    Number2++;
    int Choice;
    bool Exit = true;
    system("cls");
    while(Exit){
    cout<<"\t\t\t<<<< 1 For Bank Admin  !"<<endl;
    cout<<"\t\t\t<<<< 2 For Bank Manager!"<<endl;
    cout<<"\t\t\t<<<< 3 For Bank   ATM  !"<<endl;
    cout<<"\t\t\t<<<< 4 For Bank Holder !"<<endl;
    cout<<"\t\t\t<<<< 5 For   Exit !"<<endl;
    cout<<"\t\t\t<<<< Enter Choice :";
    cin>>Choice;
    switch(Choice){
    case 1:
    system("cls");
    Admin();
    break;
    case 2:
    system("cls");
    cout<<"\t\t-----------------<Welcome to Bank Manager>-----------------"<<endl;
    manager();
    break;
    case 3:
    system("cls");
    cout<<"\t\t-----------------<Welcome to Bank ATM>-----------------"<<endl;
    break;
    case 4:
    system("cls");
    cout<<"\t\t-----------------<Welcome to Bank Holder>-----------------"<<endl;
    Holder();
    break;
    case 5:
    system("cls");
    cout<<"\t\t\t<<<< Program Exit Successfully"<<endl;
    Exit = false;
    break;
    default:
    cout<<"\t\t\t<<<< Try Again Enter Correct Choice!"<<endl;
    }
    }
return 0;
}
