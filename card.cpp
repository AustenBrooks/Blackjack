#include "card.h"


card::card(int value, char suit){
    this->value = value;
    this->suit = suit;
}

int card::getValue(){
    int num=value;
    if(num>10)
        num=10;
    return num;
}

void card::render(){
    switch(value){
        case 1:
            
            cout<<" _______________ "<<endl;
            cout<<"| A             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|             A |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 2:
            
            cout<<" _______________ "<<endl;
            cout<<"| 2             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|             2 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 3:
            
            cout<<" _______________ "<<endl;
            cout<<"| 3             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|             3 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 4:
            
            cout<<" _______________ "<<endl;
            cout<<"| 4             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|             4 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 5:
            
            cout<<" _______________ "<<endl;
            cout<<"| 5             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|             5 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 6:
            
            cout<<" _______________ "<<endl;
            cout<<"| 6             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|               |"<<endl;
            cout<<"|             6 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 7:
            
            cout<<" _______________ "<<endl;
            cout<<"| 7             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|       "<<suit<<"       |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|             7 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 8:
            
            cout<<" _______________ "<<endl;
            cout<<"| 8             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|             8 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 9:
            
            cout<<" _______________ "<<endl;
            cout<<"| 9             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"  "<<suit<<"  "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|             9 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 10:
            
            cout<<" _______________ "<<endl;
            cout<<"| 10            |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"  "<<suit<<"  "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"  "<<suit<<"  "<<suit<<"    |"<<endl;
            cout<<"|    "<<suit<<"     "<<suit<<"    |"<<endl;
            cout<<"|            10 |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 11:
            
            cout<<" _______________ "<<endl;
            cout<<"| J             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|    .~~~~~~.   |"<<endl;
            cout<<"|    | 0  0 |   |"<<endl;
            cout<<"|    |  __  |   |"<<endl;
            cout<<"|     \\,,,,/    |"<<endl;
            cout<<"|             J |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 12:
            
            cout<<" _______________ "<<endl;
            cout<<"| Q             |"<<endl;
            cout<<"| "<<suit<<"             |"<<endl;
            cout<<"|   ,mmmmmmmm.  |"<<endl;
            cout<<"|   && O  O &&  |"<<endl;
            cout<<"|   })  __  ))  |"<<endl;
            cout<<"|  }} \\____/    |"<<endl;
            cout<<"|  }}         Q |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
            
        case 13:
            
            cout<<" _______________ "<<endl;
            cout<<"| K             |"<<endl;
            cout<<"| "<<suit<<"  ^^^^^^^^   |"<<endl;
            cout<<"|    | *  * |   |"<<endl;
            cout<<"|    |  __  |   |"<<endl;
            cout<<"|     \\    /    |"<<endl;
            cout<<"|      \\  /     |"<<endl;
            cout<<"|       \\/    K |"<<endl;
            cout<<"|             "<<suit<<" |"<<endl;
            cout<<"|_______________|"<<endl;
            break;
    }
}

/*  cout<<" _______________"<<endl;
    cout<<"| 10            |"<<endl;
    cout<<"| C             |"<<endl;
    cout<<"|    C     C    |"<<endl;
    cout<<"|    C  C  C    |"<<endl;
    cout<<"|    C  C  C    |"<<endl;
    cout<<"|    C     C    |"<<endl;
    cout<<"|            10 |"<<endl;
    cout<<"|             C |"<<endl;
    cout<<"|_______________|"<<endl;
    
    "<<suit<<"
    */