/*
 * Author : Albert Owusu-Asare
 * Date : Thu Nov  6 16:02:32 CST 2014
 * This file contains a solution to the famous 'producer/consumer' or 'bounded buffe'problem
 */

 /*
 Problem information : from , Arpaci -Dusseau 2014 : Operating Systems Three Easy Pieces
 Imagine one or more producer threads and one or more consumer threads. Producers generate data 
 items and place them in a buffer; con- sumers grab said items from the buffer and consume them 
 in some way.
 */




//pseudocode

 sem_t any customers ; // conditions to check if there are any customers in waiting room
 sem_t chairsunoccupied // condition if chars are unoccupied
 sem_t barberNotBusy // condition if barber is barberNotBusy
 sem_t barber asleep // condition if barber is asleep
 sem_t mutex; // ensures mutual exclusion while incrementing counter

 sem_t customer;
 sem_t doctor;

++++++++++++++++
-	State	   -
-			   -
++++++++++++++++

int numChairs; // number of chairs in the waiting room
int numChairsOccupied; /// number of chairs in the waiting room that is numChairsOccupied

// customer gets haircut

void getHairCut(){

}//getHairCut()

// customer leaves whent the shop is full
void balk(){

}// bulk()


// barber cuts customer's hair
void cutHair(){

}// cutHair


// customer threads

void * customer ( void * arg){
	int iD = (int *) arg;
 	
 	sem_wait(mutex);
 	numberOfChairsOccupied ++ ; //lightswitch
	if ( numChairsOccupied numChairs ){

	}
	sem_post(mutex);





			HILZER BARBERSHOP PROBLEM
	========================================================================

	Preliminaries:
	num chairs in barber shop = 3;
	num of barbers in shop  = 3;
	waiting area size = 4 customers;
	has standing room for additional customers;
	Fire code limit number of customers in the shop


	conidtions
}