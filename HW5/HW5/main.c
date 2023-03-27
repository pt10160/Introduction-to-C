//
//  HW5
//
//  Created by 黎泽麒 on 26/10/2020.
//  Copyright © 2020 黎泽麒. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


//fill functions
void fillsuits(char suits[])
{ suits[0]='h'; suits[1]='s';suits[2]='d';suits[3]='c';}
void fillranks(char ranks[])
{ ranks[0]='A';ranks[1]='2';ranks[2]='3';ranks[3]='4';ranks[4]='5';ranks[5]='6';ranks[6]='7';ranks[7]='8';ranks[8]='9';ranks[9]='T';ranks[10]='J';ranks[11]='Q';ranks[12]='K';
}
void filldeck(int deck[]){
        for(int i = 0;i<52;i++){deck[i]=i;}
}
void printcard(int card_num,  char ranks[],char suits[]){
    printf("%c%c,",ranks[card_num % 13], suits[card_num / 13]);
}

void shuffle(int deck[]){
    int index1 = 0;
    int index2 = 0;
    int temp = 0;
    for (int i=0;i<51; i++){
    index1 = rand() % 13;
    index2 = rand() % 13;
    temp = deck[index2];
    deck[index2] = deck[index1];
    deck[index1] = temp;
    
    }//shuffle
}

//start to run!
int main(){
    //initializing deck,ranks,suits
    srand(time(0));
    char ranks[13];
    int num_deck=52;
    int num_ranks=13;
    int num_suits=4;
    int deck[52];
    char suits[4];
    fillranks(ranks);
    fillsuits(suits);
    filldeck(deck);
    
    //shuffle function
    shuffle(deck);
    int i;
    int j;
    for(i = 0, j = 1;i<52;i++,j++)                //creating deck array//
    {
         
        printcard(deck[i],ranks,suits);
        if (j%5 == 0){printf("\n");}
        
    }

        }

