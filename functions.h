#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "card.h"

using namespace std;

void build(vector<card*> &deck);

void shuffle(vector<card*> &deck, vector<card*> &discard);

void draw(vector<card*> &hand, vector<card*> &deck, vector<card*> &discard, int);

void renderHand(vector<card*> hand);

void renderDealer(vector<card*> hand);

void discardHand(vector<card*> &hand, vector<card*> &discard);

void lowercaseString(string &original);

#endif