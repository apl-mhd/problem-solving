/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: antimatter
 *
 * Created on November 4, 2016, 9:23 PM
 */

#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

struct  player{

    char name[50];
    char country[50];
    int runs[3];
    int wickets[3];
    int points[3];

};

void playrsDetails(struct player playerIndex[50]){

    int i,j, mofMathc=0, index;

     for(i = 0; i<1; i++){

        printf("Player's Name: ");
        gets(playerIndex[i].name);

        printf("\nPlayer's Country: ");
        gets(playerIndex[i].country);

        printf("\n");

        /*Run Input section */

        for(j=0; j<3; j++){
            printf("%d match run:",j+1);
            scanf("%d", &playerIndex[i].runs[j]);

            if(playerIndex[i].runs[j]<25){
                 playerIndex[i].points[j] = 0 ;
            }

            if(playerIndex[i].runs[j]>=25 && playerIndex[i].runs[j]<50 ){
                 playerIndex[i].points[j] = 5 ;
            }
             if(playerIndex[i].runs[j]>=50 && playerIndex[i].runs[j]<75 ){
                 playerIndex[i].points[j] = 10;
            }
            if(playerIndex[i].runs[j]>=75 && playerIndex[i].runs[j]<100 ){
                 playerIndex[i].points[j] = 15 ;
            }

             if(playerIndex[i].runs[j]>=100){
                 playerIndex[i].points[j] = 20 ;
            }



        }
          printf("\n");

          /*****************wickets input***********************/
          /*_____________________________________________________*/

         for(j=0; j<3; j++){
            printf("%d match wickets:",j+1);
            scanf("%d", &playerIndex[i].wickets[j]);

            if(playerIndex[i].wickets[j] > 0){
                playerIndex[i].points[j] += playerIndex[i].wickets[j]*12  ;
            }

        }

          printf("\n\n\n");

    }
     
     
     
//    for(i=0;i<1; i++){
        
//        for(j =0; j<3; j++){
            
//            if(playerIndex[i].wickets[j] > mofMathc){
                    
//                mofMathc = playerIndex[i].wickets[j];
//                index = i;
//        }
      
//    }
        
        
//    }


}


/*
 *
 */
int main(int argc, char** argv) {
      int i,j;
    struct player playerIndex[50];

    playrsDetails(playerIndex);



    for(i =0; i<1; i++){

        for(j =0; j<3; j++){

             printf("%d match point = %d\n",j+1, playerIndex[i].points[j]);
        }

    }

    return 0;
}