#include <iostream>
#include <stdlib.h>
#include <vector>
#include "card.h"
#include "functions.h"

using namespace std;

int main(){
    srand(time(0));
    
    vector<card*> deck;
    vector<card*> discard;
    vector<card*> dealer;
    vector<card*> player;
    
    int playerCash=100;
    bool isPlaying= true;
    
    build(deck);
    shuffle(deck, discard);
    
    cout<<"The game is blackjack, the goal is to have the highest value hand without going over 21 (going over 21 is called a bust and is an instant loss)."<<endl;
    cout<<"The dealer will stop drawing once their hand reaches 17. All face cards have a value of 10, Aces can be either 1 or 11 and will change to be whatever gives the best hand"<<endl;
    cout<<"You can hit (draw a card), stay (stop drawing cards), or double down (double your bet and draw only one card, this can only be done on turn 1)"<<endl;
    cout<<"If you get blackjack (an Ace and any 10 value card) you will win double your bet, if dealer gets blackjack, you lose (even if you also had blackjack)"<<endl<<endl;
    
    while(isPlaying){
        bool isBetting=true;
        int bet;
        
        while(isBetting){
            bet=0;
            
            cout << "You have $" <<playerCash<<". How much would you like to bet?"<<endl;
            cin>>bet;
            
            if(bet>playerCash){
                cout<<"You do not have enough money for that bet."<<endl;
            }
            else if(!cin){
                cin.clear();
                cin.ignore();
                cout<<"Please input a number"<<endl;
            }
            else if(bet<=0){
                cout<< "That is an invalid bet"<<endl;
            }
            
            else{
                playerCash-=bet;
                isBetting=false;
            }
        }
        
        draw(player, deck, discard, 2);
        draw(dealer, deck, discard, 2);
        
        bool isDrawing=true;
        int playerScore;
        int dealerScore;
        int turn=1;
        
        dealerScore = dealer.at(0)->getValue()+dealer.at(1)->getValue();
        
        if(dealerScore==21){
            isDrawing = false;
            playerScore = player.at(0)->getValue()+player.at(1)->getValue();
        }
        
        while(isDrawing){
            cout<<"Dealer's Hand"<<endl;
            renderDealer(dealer);
            
            cout<<"Player's Hand"<<endl;
            renderHand(player);
            
            string choice;
            
            while(1){
                choice="";
                cin.clear();
                if(turn==1)
                    cout<<"Would you like to: hit, stay, or double down?"<<endl;
                
                else
                    cout<<"Would you like to: hit or stay?"<<endl;
                
                getline(cin, choice);
                
                lowercaseString(choice);
                
                if(choice=="hit"||choice=="stay"||choice=="double down"){
                    cout<<"K:"<<endl;
                    break;
                }
            }
            if(choice=="hit"){
                draw(player, deck, discard, 1);
            }
            
            else if(choice=="stay"){
                isDrawing=false;
            }
            
            else if(choice=="double down"&&turn==1){
                if(playerCash>bet){
                    playerCash-=bet;
                    bet*=2;
                    draw(player,deck,discard,1);
                    isDrawing=false;
                }
                else
                    cout<<"You do not have enough money"<<endl;
            }
            playerScore=0;
            int numAces=0;
            
            for(int i=0; i<player.size(); ++i){
                if(player.at(i)->getValue()==11){
                    ++numAces;
                }
                playerScore+=player.at(i)->getValue();
            }
            
            while(numAces>0&&playerScore>21){
                playerScore-=10;
                --numAces;
            }
            
            if(playerScore>21){
                cout<<"You busted"<<endl;
                isDrawing=false;
            }
            turn++;
        }
        
        isDrawing=true;
        if(playerScore>21){
            isDrawing=false;
            playerScore=0;
            
            int numAces=0;
            for(int i=0; i<dealer.size(); ++i){
                if(dealer.at(i)->getValue()==11){
                    ++numAces;
                }
                dealerScore+=dealer.at(i)->getValue();
            }
            
            while(numAces>0&&dealerScore>21){
                dealerScore-=10;
                numAces--;
            }
        }
        
        if(playerScore==21&&player.size()==2)
            isDrawing=false;
        
        while(isDrawing){
            dealerScore=0;
            int numAces=0;
            
            for(int i=0; i<dealer.size(); ++i){
                if(dealer.at(i)->getValue()==11){
                    ++numAces;
                }
                dealerScore+=dealer.at(i)->getValue();
            }
            
            while(numAces>0&&dealerScore>21){
                dealerScore-=10;
                numAces--;
            }
            
            if(dealerScore>21){
                cout<<"Dealer busts!"<<endl;
                isDrawing=false;
                dealerScore=0;
            }
            
            else if(dealerScore<17)
                draw(dealer, deck, discard, 1);
            
            else if(dealerScore>17)
                isDrawing=false;
        }
        
        cout<<"Dealer's Hand"<<endl;
        renderHand(dealer);
        
        cout<<"Player's Hand"<<endl;
        renderHand(player);
        
        cout<<"Dealer got "<<dealerScore<<". You got "<<playerScore<<endl;
        
        if(dealerScore==21&&dealer.size()==2){
            cout<<"Dealer got blackjack, you lose"<<endl;
        }
        
        else if(playerScore==21&&player.size()==2){
            cout<<"You got blackjack, you win double your bet!"<<endl;
            playerCash+=bet*3;
        }
        
        else if(playerScore>dealerScore){
            cout<<"You won! You made $"<< bet<<endl;
            playerCash+= bet*2;
        }
        
        else if(playerScore<dealerScore){
            cout<<"You lost. You lost $"<<bet<<endl;
        }
        
        else{
            cout<<"You push, you dont lose or gain any money"<<endl;
            playerCash+=bet;
        }
        
        discardHand(player, discard);
        discardHand(dealer, discard);
        if(playerCash<1){
            cout<<"You have lost all your money. Great Job!"<<endl;
            isPlaying=false;
        }
    }
    return 0;
}