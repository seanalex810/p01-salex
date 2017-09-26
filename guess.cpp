#include <cstdlib>
#include <ctime>
#include <iostream> 
using namespace std;
int main(){ 
 /*
  initialize random seed. Do this only once at the beginning of the main-function
  */ 
  srand ( time(NULL) ); 
  int randomNumber; // this variable will hold the random number
  /* 
  generate secret number: between 1 and 10. Change the 10 to a different value to
  generate random numbers up to that maximum value 
  */ 
  randomNumber = rand() % 10 + 1;  
   cout<< "Enter a number between 1-10"; 
  int user_input; 
  cin >> user_input;
  int difference;
if(user_input == randomNumber){
cout<<"You guessed correctly! You win!";
return 0; 
}
else if ( randomNumber > user_input){ 
difference = randomNumber - user_input;
} 
else{
difference = user_input - randomNumber; 
}
cout<<"You were off by " << difference << ". Sorry you lose. "; 
return 0;
} 
