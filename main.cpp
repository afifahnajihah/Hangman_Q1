//Hangman Code
//Wan Afifah Najihah - 1181101237
//Masyitah Salwa - 1181101292

#include <iostream>
#include<string>
using namespace std;

//Hangman has Guess - Composition
class Guess {
  private:
    char guess;
    string word = "programming";
    string m_word; //m_word -> MysteryWord

  
  public:
  Guess(){}
  Guess(string a_word,char a_guess){

    word = a_word;
    guess = a_guess;
  }
  
  char getGuess() { return guess;}
  bool findLetter (char guess);
  

  void displayWord();
};

void Guess :: displayWord(){

    //cout << word << endl; //for debugging purpose
    for(int i = 0;i< word.length() ; i++){
      m_word[i] = '-';
      cout << m_word[i];
    }
    cout << endl;
  }

bool Guess :: findLetter(char guess){

    for(int i = 0;i<word.length();i++){

      if (word[i] == guess){
        m_word[i] = guess;
        return true;
        displayWord();
      }

      else if (word[i] != guess){
        return false;
        //displayWord();
      }
    }
}

class Hangman {

  private:
  int tries;
  Guess *g;

  public:
  Hangman(){}
  
  void startGame(Guess *gs);

  bool CheckGuess (Guess g,int tries);
};

void Hangman::startGame(Guess *gs){

  gs->displayWord();

}

bool Hangman::CheckGuess (Guess g,int tries){

  char guess = g.getGuess();
  if(g.findLetter(guess)== true){
    g.displayWord();
  } 

  else{
    g.displayWord();
    tries--;
  }



}


int main(){

    /*cout << "Simple Hangman Game " << endl;
    cout << "__________   " << endl;
    cout << "|     }      " << endl;
    cout << "|     0      "  << endl;
    cout << "|     |      " << endl;
    cout << "|    /|\\    " << endl;
    cout << "|   / | \\   " << endl;
    cout << "|    / \\    " << endl;
    cout << "|   /   \\   "  << endl;
    cout << "|___________ " << endl;
    */

    //set variables used in this game
    int misses = 10;
    char guess;
    bool CorrectGuess = false;

    //create object for Hangman
    Hangman game;
    Guess g;

    //while(misses >= 0){
      
      //Display information related to the word
      cout << "Guess: ";
      cin >> guess;
      
      game.startGame(&g);
      game.CheckGuess(g, misses);
      
      

    //}
      return 1;
      //system("pause");
}