#include "functions.h"

void build(vector<card*> &deck){
    for(int i=0; i<4; ++i){
        for(int j=1; j<=13; ++j){
            if(i==0)
                deck.push_back(new card(j,'C'));
            if(i==1)
                deck.push_back(new card(j,'D'));
            if(i==2)
                deck.push_back(new card(j,'H'));
            if(i==3)
                deck.push_back(new card(j,'S'));
        }
    }
}

void shuffle(vector<card*> &deck, vector<card*> &discard){
    srand(time(0));
    int size=discard.size();
    
    cout<<"Shuffling deck"<<endl;
    
    for(int i=0; i<size; ++i){
        deck.push_back(discard.at(discard.size()-1));
        discard.pop_back();
    }
    for(int i=0; i<150; i++){
        int index1=rand()%52;
        int index2=rand()%52;
        card* temp;
        temp=deck.at(index1);
        deck.at(index1)=deck.at(index2);
        deck.at(index2)=temp;
    }
}

void draw(vector<card*> &hand, vector<card*> &deck, vector<card*> &discard, int numToDraw){
    for(int i=0; i<numToDraw; ++i){
        if(deck.size()==0){
            shuffle(deck, discard);
        }
        hand.push_back(deck.at(deck.size()-1));
        deck.pop_back();
    }
}

void renderHand(vector<card*> hand){
    for(int i=1; i<=10; ++i){
        for(int j=0; j<hand.size(); ++j){
            cout<< hand.at(j)->render(i);
        }
        cout<<endl;
    }
}

void renderDealer(vector<card*> hand){
    card a(0,'C');
    for(int i=1; i<=10; ++i){
        cout<< hand.at(1)->render(i);
        cout<< a.render(i);
        cout<<endl;
    }
}

void discardHand(vector<card*> &hand, vector<card*> &discard){
    int size=hand.size();
    for(int i=0; i<size; ++i){
        discard.push_back(hand.at(hand.size()-1));
        hand.pop_back();
    }
}

void lowercaseString(string &original){
    for(int i=0;i<original.size();++i)
        original.at(i)=tolower(original[i]);
}
