#include <iomanip>
#include <ctime>
#include <iostream>

using namespace std;

void game() {

    // variables
    
    int a, user_number;
    int tries(0);
    int choice;

    // setup

    cout << setw(84) << endl;
   cout <<"WELCOME :)"<< endl;
    cout << endl;


    cout << "We have a simple principle, yout must to guess a number" << endl << "between 0 and 10 and your have 3 tries. " << endl;

    //our random number

    srand((int)time(0));
    a = (rand() % 10) + 1;

    do {
        cout << "Choose your number "; cin >> user_number;
        ++tries;

        // orientation to win the game

        if (user_number > a) {
            cout << " come down " << endl;
        }
        else if (user_number < a) {
            cout << "come up " << endl;
        }
        cout << tries << " trie(s)" << endl;
        cout << endl;
        if (tries == 2) {
            cout << "the last trie " << endl;
        }
        else {}

    } while (user_number != a && tries < 3);

    //    WIN OR LOSE

    if (user_number == a) {
        cout << "***************************YEAHHHHH YOU WIN******************************* " << endl;
        cout << "*********************you're the boss of this game ******************************* " << endl;
        
        cout << endl;

    }
    else {
        cout << "You lost, no more life :(. The number was " << a << " maybe next time" << endl;
        cout << endl;
    }

}



int main()
{
  // menu
  cout<<"Welcome to the multiplication table, \nYou can also optionally play a guessing game for that just enter the \n \n \n1- to display the whole multiplication table (from 0 to 10); \n2- to display just the multiplication table of a single number. \n3- to play a guessing game"<<endl;
  int choixUser;
  
  // choice   
  do{
      cout<<endl;
      cout<< "votre choix svp ";
      cin >> choixUser;
    if(choixUser < 0 || choixUser >3){
        cout<< "ce numero ne fait pas partir du menu "<<endl;
    }
  
  
  // 
  switch(choixUser) {
      
       // for all table  
       
      case 1:
        for(int i(0); i<11;i++){
          for(int j(0); j<11; j++){
              cout<<endl;
            cout<< i <<" * "<< j << " = "<< j*i<< endl; }
            cout<<endl;
        }
        cout<< " Merci";
        
       break;
       
       // for  individual table  
       case 2:
        cout <<"Veillez entrer votre nombre ";
        cout<<endl;
        cout<<endl;
        int nbr;
        cin>>nbr;
        
        for(int i(0); i<11; i++){
            cout<< nbr << " * "<<i<< " = "<<nbr*i<<endl;
        }
        
        break;
        
        // to play the guessing game
        
        case 3:
            game();
        break;
        
        
        
  }
  }while(choixUser < 0 || choixUser >3);
  
  
  return 0;

}






