#include<iostream>
using namespace std;

int Number,Balance;

void IntPackages(int Choice){
    int Choice1;
    switch(Choice){
        case 1:
            cout<<"Press 1 For 1GB   by 50 Afghani : "<<endl;
            cout<<"Press 2 For 2GB   by 77 Afghani : "<<endl;
            cout<<"Press 3 For 3GB   by 99 Afghani : "<<endl;
            cout<<"Press 4 For 200MB by 15 Afghani : "<<endl;
            cout<<"Press 5 For 400MB by 30 Afghani : "<<endl;
            cout<<"Enter Choice                    : ";
            cin>>Choice1;
                switch(Choice1){
                    case 1:
                    if(Balance >= 50){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Daily 1GB by 50 Afghani is Successfully Activated !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 50;
                    cout<<"Now your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 2:
                    if(Balance >= 77){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Daily 2GB by 77 Afghani is Successfully Activated !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 77;
                    cout<<"Now your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 3:
                    if(Balance >= 99){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Daily 3GB by 99 Afghani is Successfully Activated !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 99;
                    cout<<"Now your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 4:
                    if(Balance >= 15){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Daily 200MB by 15 Afghani is Successfully Activated !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 15;
                    cout<<"Now your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 5:
                    if(Balance >= 30){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Daily 400MB by 30 Afghani is Successfully Activated !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 30;
                    cout<<"Now your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    default:
                    cout<<"Enter Correct Choice !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                }
            break;
        case 2:
            cout<<"Press 1 For 1.5GB by 140 Afghani : "<<endl;
            cout<<"Press 2 For 512MB by 55  Afghani : "<<endl;
            cout<<"Press 3 For 1GB   by 110 Afghani : "<<endl;
            cout<<"Press 4 For 3GB   by 210 Afghani : "<<endl;
            cout<<"Enter Choice                    : ";
            cin>>Choice1;
                switch(Choice1){
                    case 1:
                    if(Balance >= 140){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Weekly 1.5GB by 140 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 140;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 2:
                    if(Balance >= 55){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Weekly 512MB by 55 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 55;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 3:
                    if(Balance >= 110){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Weekly 1GB by 110 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 110;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 4:
                    if(Balance >= 210){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Weekly 3GB by 210 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 210;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    default:
                        cout<<"Try Again Enter Correct Choice !"<<endl;
                }
            break;
        case 3:
            cout<<"Press 1 For 1GB  by 110 Afghani : "<<endl;
            cout<<"Press 2 For 2GB  by 220 Afghani : "<<endl;
            cout<<"Press 3 For 3GB  by 250 Afghani : "<<endl;
            cout<<"Press 4 For 4GB  by 390 Afghani : "<<endl;
            cout<<"Press 5 For 10GB by 600 Afghani : "<<endl;
            cout<<"Enter Choice                    : ";
            cin>>Choice1;
                switch(Choice1){
                    case 1:
                    if(Balance >= 110){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Monthly 1GB by 110 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 110;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 2:
                    if(Balance >= 220){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Monthly 2GB by 220 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 220;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 3:
                    if(Balance >= 250){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Monthly 3GB by 250 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 250;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 4:
                    if(Balance >= 390){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Monthly 4GB by 390 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 390;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 5:
                    if(Balance >= 600){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Monthly 10GB by 600 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 600;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    default:
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Enter Correct Choice !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                }
            break;
        case 4:
            cout<<"Press 1 For 1GB  by 25  Afghani  : "<<endl;
            cout<<"Press 2 For 3GB  by 75  Afghani  : "<<endl;
            cout<<"Press 3 For 7GB  by 199 Afghani  : "<<endl;
            cout<<"Press 4 For 15GB by 349 Afghani  : "<<endl;
            cout<<"Enter Choice                    : ";
            cin>>Choice1;
                switch(Choice1){
                    case 1:
                    if(Balance >= 25){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Nightly 1GB by 25 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 25;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 2:
                    if(Balance >= 75){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Nightly 3GB by 75 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 75;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 3:
                    if(Balance >= 199){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Nightly 7GB by 199 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 199;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 4:
                    if(Balance >= 349){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Nightly 15GB by 349 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 349;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    default:
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Enter Correct Choice !"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                }
            break;
        case 5:
            cout<<"Press 1 For 512MB by 12 Afghani : "<<endl;
            cout<<"Press 2 For 700MB by 15 Afghani : "<<endl;
            cout<<"Press 3 For 1GB   by 20 Afghani : "<<endl;
            cout<<"Enter Choice                    : ";
            cin>>Choice1;
                switch(Choice1){
                    case 1:
                    if(Balance >= 12){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Hourly 512MB by 12 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 12;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 2:
                    if(Balance >= 15){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Hourly 700MB by 15 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 15;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    case 3:
                    if(Balance >= 20){
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"Hourly 1GB by 20 Afghani Successfully Activate"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    Balance -= 20;
                    cout<<"Now Your Balance is : "<<Balance<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }else{
                    cout<<"---------------------------------------------------"<<endl;
                    cout<<"You Don't Have Enough Balance!"<<endl;
                    cout<<"---------------------------------------------------"<<endl;
                    }
                    break;
                    default:
                        cout<<"Enter Correct Choice !"<<endl;
                }
            break;
        default:
            cout<<"Try Again Enter Correct Choice !";
    }
}

void Internet_Package(){
    int Choice;
    bool True = true;
    while(True){
    cout<<"Enter 1 For     Daily        : "<<endl;
    cout<<"Enter 2 For     Weekly       : "<<endl;
    cout<<"Enter 3 For     Monthly       : "<<endl;
    cout<<"Enter 4 For     Nightly      : "<<endl;
    cout<<"Enter 5 For     Hourly       : "<<endl;
    cout<<"Enter 6 For Information Menu : "<<endl;
    cout<<"Enter Choice        : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
    case 1:
        cout<<"--------------<Daily Package>--------------"<<endl;
        IntPackages(Choice);
        break;
    case 2:
        cout<<"--------------<Weekly Package>--------------"<<endl;
        IntPackages(Choice);
        break;
    case 3:
        cout<<"--------------<Monthly Package>--------------"<<endl;
        IntPackages(Choice);
        break;
    case 4:
        cout<<"--------------<Nightly Package>--------------"<<endl;
        IntPackages(Choice);
        break;
    case 5:
        cout<<"--------------<Hourly  Package>--------------"<<endl;
        IntPackages(Choice);
        break;
    case 6:
        True = false;
        break;
    default:
        cout<<"Try Again Enter Correct choice!"<<endl;
        cout<<"--------------------------------"<<endl;
    }
    }
}

void VoPackages(int Choice){
    int Choose,Choice1;
    switch(Choice){
    case 1:
        cout<<"Press 1 For 15Min  by 10  Afghani ! "<<endl;
        cout<<"Press 2 For 50Min  by 15  Afghani ! "<<endl;
        cout<<"Press 3 For 100Min by 25  Afghani ! "<<endl;
        cout<<"Press 4 For 800Min by 135 Afghani ! "<<endl;
        cout<<"Enter Choice                    : ";
        cin>>Choice1;
        system("cls");
        switch(Choice1){
        case 1:
         if(Balance >= 10){
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Daily 15Min by 10 Afghani is Successfully Activated !"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        Balance -= 10;
        cout<<"Now your Balance is : "<<Balance<<endl;
        cout<<"---------------------------------------------------"<<endl;
        }else{
        cout<<"You Don't Have Enough Balance!"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        }
         break;
        case 2:
         if(Balance >= 15){
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Daily 50Min by 15 Afghani is Successfully Activated !"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        Balance -= 15;
        cout<<"Now your Balance is : "<<Balance<<endl;
        cout<<"---------------------------------------------------"<<endl;
        }else{
        cout<<"You Don't Have Enough Balance!"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        }
         break;
        case 3:
         if(Balance >= 25){
         cout<<"---------------------------------------------------"<<endl;
        cout<<"Daily 100Min by 25 Afghani is Successfully Activated !"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        Balance -= 25;
        cout<<"Now your Balance is : "<<Balance<<endl;
        cout<<"---------------------------------------------------"<<endl;
        }else{
        cout<<"You Don't Have Enough Balance!"<<endl;
        cout<<"---------------------------------------------------"<<endl;
            }
         break;
        case 4:
        if(Balance >= 135){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Daily 800Min by 135 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 135;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
         break;
        default:
            cout<<"Try Again Enter Correct Choice!"<<endl;
            cout<<"-----------------------------------------------"<<endl;
        }
      break;
    case 2:
        cout<<"Press 1 For 90Min  by 25  Afghani ! "<<endl;
        cout<<"Press 2 For 200Min by 46  Afghani ! "<<endl;
        cout<<"Press 3 For 400Min by 100 Afghani ! "<<endl;
        cout<<"Press 4 For 800Min by 135 Afghani ! "<<endl;
        cout<<"Enter Choice                    : ";
        cin>>Choice1;
        switch(Choice1){
        case 1:
        if(Balance >= 25){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Weekly 90Min by 25 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 25;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        case 2:
        if(Balance >= 46){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Weekly 200Min by 46 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 46;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        case 3:
        if(Balance >= 100){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Weekly 400Min by 100 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 100;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        case 4:
        if(Balance >= 135){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Weekly 800Min by 135 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 135;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        default:
            cout<<"Try Again Enter Correct Choice!"<<endl;
            cout<<"------------------------------------------"<<endl;
        }
      break;
    case 3:
        cout<<"Press 1 For 500Min  by 100  Afghani ! "<<endl;
        cout<<"Press 2 For 2500Min by 300  Afghani ! "<<endl;
        cout<<"Press 3 For 1500Min by 180  Afghani ! "<<endl;
        cout<<"Enter Choice                    : ";
        cin>>Choice1;
        switch(Choice1){
        case 1:
        if(Balance >= 100){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Monthly 500Min by 100 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 100;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        case 2:
        if(Balance >= 300){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Monthly 2500Min by 300 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 300;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        case 3:
        if(Balance >= 1500){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Monthly 1500Min by 180 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 180;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
        break;
        default:
            cout<<"Try Again Enter Correct Choice!"<<endl;
            cout<<"--------------------------------------"<<endl;
        }
      break;
    case 4:
        cout<<"Press 1 For 350Min  by 10   Afghani ! "<<endl;
        cout<<"Press 2 For 800Min  by 30   Afghani ! "<<endl;
        cout<<"Press 3 For 4000Min by 150  Afghani ! "<<endl;
        cout<<"Enter Choice                    : ";
        cin>>Choice1;
        switch(Choice1){
       case 1:
       if(Balance >= 10){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Nightly 300Min by 10 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 10;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
       break;
       case 2:
       if(Balance >= 30){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Nightly 800Min by 30 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 30;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
       break;
       case 3:
       if(Balance >= 150){
            cout<<"---------------------------------------------------"<<endl;
            cout<<"Nightly 4000Min by 150 Afghani is Successfully Activated !"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            Balance -= 150;
            cout<<"Now your Balance is : "<<Balance<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }else{
            cout<<"You Don't Have Enough Balance!"<<endl;
            cout<<"---------------------------------------------------"<<endl;
            }
       break;
       default:
        cout<<"Try Again Enter Correct Choice!"<<endl;
        cout<<"----------------------------------------"<<endl;
        }
    break;
    default:
        cout<<"Try Again Enter Correct Choice!"<<endl;
        cout<<"-----------------------------------------------"<<endl;
    }
}

void Voice_Packages(){
    int Choice;
    bool True = true;
    while(True){
    cout<<"Enter 1 For     Daily        : "<<endl;
    cout<<"Enter 2 For     Weekly       : "<<endl;
    cout<<"Enter 3 For     Monthl       : "<<endl;
    cout<<"Enter 4 For     Nightly      : "<<endl;
    cout<<"Enter 5 For Information Menu : "<<endl;
    cout<<"Enter Choice        : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
     case 1:
        cout<<"--------------<Daily Package>--------------"<<endl;
        VoPackages(Choice);
        cout<<"-----------------------------------------------"<<endl;
        break;
     case 2:
        cout<<"--------------<Weekly Package>--------------"<<endl;
        VoPackages(Choice);
        cout<<"-----------------------------------------------"<<endl;
        break;
     case 3:
        cout<<"--------------<Monthly Package>--------------"<<endl;
        VoPackages(Choice);
        cout<<"-----------------------------------------------"<<endl;
        break;
     case 4:
        cout<<"--------------<Nightly Package>--------------"<<endl;
        VoPackages(Choice);
        cout<<"-----------------------------------------------"<<endl;
        break;
     case 5:
        True = false;
        break;
     default:
        cout<<"Try Again Enter Correct Choice!"<<endl;
        cout<<"-----------------------------------------------"<<endl;
     }
    }
}

void SMPackages(int Choice){
    int Choose,Choice1;
    switch(Choice){
    case 1:
      cout<<"Press 1 For 500SMS  by 10  Afghani ! "<<endl;
      cout<<"Enter Choice                       :";
      cin>>Choice1;
      system("cls");
      switch(Choice1){
      case 1:
          if(Balance >= 10){
          cout<<"---------------------------------------------------"<<endl;
          cout<<"Daily 500SMS by 10 Afghani is Successfully Activated !"<<endl;
          cout<<"---------------------------------------------------"<<endl;
          Balance -= 10;
          cout<<"Now your Balance is : "<<Balance<<endl;
          cout<<"---------------------------------------------------"<<endl;
          }else{
          cout<<"You Don't Have Enough Balance!"<<endl;
          cout<<"---------------------------------------------------"<<endl;
          }
      break;
      default:
        cout<<"Try Again Enter Correct Choice!"<<endl;
        cout<<"-----------------------------------------------"<<endl;
      }
      break;
    case 2:
      cout<<"Press 1 For 2000SMS by 20 Afghani  !"<<endl;
      cout<<"Enter Choice                       :";
      cin>>Choice1;
      switch(Choice1){
      case 1:
      if(Balance >= 20){
          cout<<"---------------------------------------------------"<<endl;
          cout<<"Weekly 2000SMS by 20 Afghani is Successfully Activated !"<<endl;
          cout<<"---------------------------------------------------"<<endl;
          Balance -= 20;
          cout<<"Now your Balance is : "<<Balance<<endl;
          cout<<"---------------------------------------------------"<<endl;
          }else{
          cout<<"You Don't Have Enough Balance!"<<endl;
          cout<<"---------------------------------------------------"<<endl;
          }
      break;
    default:
      cout<<"Try Again Enter Correct Choice!"<<endl;
      cout<<"-----------------------------------------------"<<endl;
    }
    }
}

void SMS_Packages(){
    int Choice;
    bool True=true;
    while(True){
    cout<<"Enter 1 For     Daily        : "<<endl;
    cout<<"Enter 2 For     Weekly       : "<<endl;
    cout<<"Enter 3 For Information Menu : "<<endl;
    cout<<"Enter Choice        : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
     case 1:
        cout<<"--------------<Daily Package>--------------"<<endl;
        SMPackages(Choice);
        cout<<"-----------------------------------------------"<<endl;
        break;
     case 2:
        cout<<"--------------<Weekly Package>--------------"<<endl;
        SMPackages(Choice);
        cout<<"-----------------------------------------------"<<endl;
        break;
     case 3:
        True = false;
        break;
     default:
        cout<<"Try Again Enter Correct Choice!"<<endl;
        cout<<"-----------------------------------------------"<<endl;
     }
    }
}


void AfghanWireless(){
    int Choice,AddBaln=0;
    bool True = true;
    while(True){
    cout<<"--------------<Information Menu>--------------"<<endl;
    cout<<"Press 1 For Show Balance     : "<<endl;
    cout<<"Press 2 For Add  Balance     : "<<endl;
    cout<<"Press 3 For Show Number      : "<<endl;
    cout<<"Press 4 For Internet Packages: "<<endl;
    cout<<"Press 5 For Voice Packages   : "<<endl;
    cout<<"Press 6 For SMS Packages     : "<<endl;
    cout<<"Press 7 For Language Menu    : "<<endl;
    cout<<"Enter  Choice : ";
    cin>>Choice;
    system("cls");
    switch(Choice){
        case 1:
            cout<<"--------------------------------"<<endl;
            cout<<"Your Balance is : "<<Balance<<endl;
            cout<<"--------------------------------"<<endl;
            break;
        case 2:
            cout<<"--------------------------------"<<endl;
            cout<<"Enter Balance you Want to Add : "<<endl;
            cin>>AddBaln;
            Balance += AddBaln;
            cout<<"--------------------------------"<<endl;
            cout<<"Now Your Balance is : "<<Balance<<endl;
            cout<<"--------------------------------"<<endl;
            break;
        case 3:
            cout<<"--------------------------------"<<endl;
            cout<<"Your Number is : "<<Number<<endl;
            cout<<"--------------------------------"<<endl;
            break;
        case 4:
            cout<<"--------------<Internet Packages>--------------"<<endl;
            Internet_Package();
            break;
        case 5:
            cout<<"--------------<Voice Packages>--------------"<<endl;
            Voice_Packages();
            break;
        case 6:
            cout<<"--------------<SMS Packages>--------------"<<endl;
            SMS_Packages();
            break;
        case 7:
            True = false;
            break;
        default:
            cout<<"--------------------------------"<<endl;
            cout<<"Try Again Enter Correct Choice!"<<endl;
            cout<<"--------------------------------"<<endl;
        }
    }


}

int main(){
    int Choice;
    bool True = true;
    cout<<"Enter Your Phone Number : ";
    cin>>Number;
    cout<<"Enter Your Balance : ";
    cin>>Balance;
    system("cls");
    while(True){
    cout<<"Choose Language : "<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Choose 1 For English Language : "<<endl;
    cout<<"Choose 2 For Pashto  Language : "<<endl;
    cout<<"Choose 3 For Dari    Language : "<<endl;
    cout<<"Choose 4 For Exit    Program  : "<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Enter Choice : ";
    cin>>Choice;
    system("cls");
    //Choose language
    switch(Choice){
    case 1:
        cout<<"<---------------------Welcome to English Language Portal!--------------------->"<<endl;
        AfghanWireless();
        break;
    case 2:
        cout<<"<---------------------Welcome to Pashto Language Portal!--------------------->"<<endl;
        cout<<"------------------------------Coming Soon!-----------------------------"<<endl;
        break;
    case 3:
        cout<<"<---------------------Welcome to Dari Language Portal!--------------------->"<<endl;
        cout<<"------------------------------Coming Soon!------------------------------"<<endl;
        break;
    case 4:
        True = false;
        cout<<"--------------------------------"<<endl;
        cout<<"Program is Successfully  Exited!"<<endl;
        cout<<"--------------------------------"<<endl;
        break;
    default:
        cout<<"--------------------------------"<<endl;
        cout<<"Try Again Enter Correct Choice"<<endl;
        cout<<"--------------------------------"<<endl;
    }}


return 0;
}
