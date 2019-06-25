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

string card::render(int line){
    string Suit;
    Suit.push_back(suit);
    switch(value){
        case 0:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "|               |";
                case 3: return "|               |";
                case 4: return "|               |";
                case 5: return "|               |";
                case 6: return "|               |";
                case 7: return "|               |";
                case 8: return "|               |";
                case 9: return "|               |";
                case 10: return "|_______________|";
            }
        case 1:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| A             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|               |";
                case 5: return "|       "+Suit+"       |";
                case 6: return "|               |";
                case 7: return "|               |";
                case 8: return "|             A |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 2:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 2             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|       "+Suit+"       |";
                case 5: return "|               |";
                case 6: return "|               |";
                case 7: return "|       "+Suit+"       |";
                case 8: return "|             2 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 3:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 3             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|       "+Suit+"       |";
                case 5: return "|       "+Suit+"       |";
                case 6: return "|       "+Suit+"       |";
                case 7: return "|               |";
                case 8: return "|             3 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 4:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 4             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|               |";
                case 6: return "|               |";
                case 7: return "|    "+Suit+"     "+Suit+"    |";
                case 8: return "|             4 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 5:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 5             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|       "+Suit+"       |";
                case 6: return "|    "+Suit+"     "+Suit+"    |";
                case 7: return "|               |";
                case 8: return "|             5 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 6:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 6             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|    "+Suit+"     "+Suit+"    |";
                case 6: return "|    "+Suit+"     "+Suit+"    |";
                case 7: return "|               |";
                case 8: return "|             6 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 7:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 7             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|       "+Suit+"       |";
                case 6: return "|    "+Suit+"     "+Suit+"    |";
                case 7: return "|    "+Suit+"     "+Suit+"    |";
                case 8: return "|             7 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 8:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 8             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|    "+Suit+"     "+Suit+"    |";
                case 6: return "|    "+Suit+"     "+Suit+"    |";
                case 7: return "|    "+Suit+"     "+Suit+"    |";
                case 8: return "|             8 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 9:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 9             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|    "+Suit+"  "+Suit+"  "+Suit+"    |";
                case 6: return "|    "+Suit+"     "+Suit+"    |";
                case 7: return "|    "+Suit+"     "+Suit+"    |";
                case 8: return "|             9 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 10:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| 10            |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    "+Suit+"     "+Suit+"    |";
                case 5: return "|    "+Suit+"  "+Suit+"  "+Suit+"    |";
                case 6: return "|    "+Suit+"  "+Suit+"  "+Suit+"    |";
                case 7: return "|    "+Suit+"     "+Suit+"    |";
                case 8: return "|            10 |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 11:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| J             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|    .~~~~~~.   |";
                case 5: return "|    | 0  0 |   |";
                case 6: return "|    |  __  |   |";
                case 7: return "|     \\,,,,/    |";
                case 8: return "|             J |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 12:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| Q             |";
                case 3: return "| "+Suit+"             |";
                case 4: return "|   ,mmmmmmmm.  |";
                case 5: return "|   && O  O &&  |";
                case 6: return "|   })  __  ))  |";
                case 7: return "|  }} \\____/    |";
                case 8: return "|  }}         Q |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
        case 13:
            switch(line){
                case 1: return " _______________ ";
                case 2: return "| K             |";
                case 3: return "| "+Suit+"  ^^^^^^^^   |";
                case 4: return "|    | *  * |   |";
                case 5: return "|    |  __  |   |";
                case 6: return "|     \\    /    |";
                case 7: return "|      \\  /     |";
                case 8: return "|       \\/    K |";
                case 9: return "|             "+Suit+" |";
                case 10: return "|_______________|";
            }
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