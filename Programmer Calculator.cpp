#include<iostream>
using namespace std;

int BinaryToDecimal(int BinaryNum){
int Answer=0, Reminder,power=1;
while(BinaryNum>0){
    Reminder = BinaryNum % 10;
    Answer = Answer+(Reminder*power);
    /*Number is Upadating*/
    BinaryNum /= 10;
    power *= 2;
}
return Answer;
}

int DecimalToBinary(int DecimalNum){
int Reminder=0,Power=1,BinaryNumber=0;

while(DecimalNum > 0){
    Reminder = DecimalNum % 2;
    DecimalNum = DecimalNum/2;
    BinaryNumber += (Reminder*Power);
    Power *= 10;
}
return BinaryNumber;
}

int DecimalToOcta(int Number){
    int Power=1,Reminder=0,Answer=0;
    while(Number>0){
    Reminder = Number % 8;
    Number /= 8;
    Reminder *= Power;
    Power = 10;
    Answer +=Reminder;
    }
    return Answer;
}

int OctaToDecimal(int Number){
    int Power=1,Reminder=0,Answer=0;
    while(Number>0){
    Reminder = Number % 10;
    Number /= 10;
    Reminder *= Power;
    Power = 8;
    Answer +=Reminder;
    }
    return Answer;
}

int DecimalToHexa(int Number){
    int Power=1,Reminder=0,Answer=0;
    while(Number>0){
    Reminder = Number % 16;
    Number /= 16;
    Reminder *= Power;
    Power = 10;
    Answer +=Reminder;
    }
    return Answer;
}

int HexaToDecimal(int Number){
    int Power=1,Reminder=0,Answer=0;
    while(Number>0){
    Reminder = Number % 10;
    Number /= 10;
    Reminder *= Power;
    Power = 16;
    Answer +=Reminder;
    }
    return Answer;
}


int main(){
    int Choise,loop=0;
    int BinaryNum,DecimalNum,Octa,Hexa,DAsharya;
    cout<<"1:Binary to Decimal : "<<endl<<"2:Decimal to Binary  : "<<endl<<"3:Decimal to Octa :"<<endl<<"4:Octa to Decimal : "<<endl<<"5:Decimal to HexaDecimal : "<<endl<<"6:HexaDecimal to Decimal"<<endl<<"7:Exit : "<<endl;
    cout<<"Enter Choise -> ";
    cin>>Choise;
    switch(Choise){
    while(loop == 0){
    case 1:
    cout<<"Enter Binary Number : ";
    cin>>BinaryNum;
    cout<<"This "<< BinaryNum <<" Decimal Number is Equal with : "<<BinaryToDecimal(BinaryNum)<<" Number."<<endl;
    break;
    case 2:
    cout<<"Enter Decimal Number : ";
    cin>>DecimalNum;
    cout<<"this "<<DecimalNum<<" Decimal Number is Equal with this binary : "<<DecimalToBinary(DecimalNum)<<" Number."<<endl;
    break;
    case 3:
    cout<<"Enter Decimal Number : ";
    cin>>DecimalNum;
    cout<<"this "<<DecimalNum<<" Decimal Number is Equal with this Octal : "<<DecimalToOcta(DecimalNum)<<" Number."<<endl;
    break;
    case 4:
    cout<<"Enter Octa Number : ";
    cin>>Octa;
    cout<<"this "<<Octa<<" Octa Number is Equal with this Decimal : "<<OctaToDecimal(Octa)<<" Number."<<endl;
    break;
    case 5:
    cout<<"Enter Decimal Number : ";
    cin>>DecimalNum;
    cout<<"this "<<DecimalNum<<" Decimal Number is Equal with this HexaDecimal : "<<HexaToDecimal(DecimalNum)<<" Number."<<endl;
    break;
    case 6:
    cout<<"Enter Octa Number : ";
    cin>>Hexa;
    cout<<"this "<<Hexa<<" Hexa Number is Equal with this Decimal : "<<DecimalToHexa(Hexa)<<" Number."<<endl;
    break;
    case 7:
    cout<<"Program is Exited.";
    loop == 1;
    break;}}
return 0;
}
