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
    string word;
    string m_word; //m_word -> MysteryWord

  
  public:
  Guess(){}
  Guess(string a_word){

    word = a_word;
    //guess = a_guess;
  }
  
  char getGuess() { return guess;}
  bool findLetter (char guess);
  
  void displayWord();
  void updateWord();
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
  
  for(int i =0;i<word.length();i++){
        if (guess == word[i]){
          return true;
          m_word[i] = guess;
          displayWord();
          }
      }
      
      return false;
};

class Hangman {

  private:
  int tries;
  Guess *gS;

  public:
  Hangman(){}
  int getTries (){ return tries;}
  void startGame(Guess gs);

  void CheckGuess (char letter, Guess gS,int tries);
  void updateWord();

};

void Hangman::startGame(Guess gs){

  gs.displayWord();

}

void Hangman::CheckGuess (char letter,Guess gS,int tries){

  letter = gS.getGuess();

  if(gS.findLetter(letter)== true){
    
    cout << endl << "Correct!";
    gS.displayWord();
  } 

  else{
    cout << endl << "Incorrect!" << endl;
    gS.displayWord();
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

  //create object for Hangman
    Hangman game;
    Guess g ("programming");

    //set variables used in this game
    int misses = 10;
    char letter = g.getGuess();
    //bool CorrectGuess = false;

    

    //while(misses >= 0){
      game.startGame(g);
      //Display information related to the word
      cout << "Guess: ";
      cin >> letter;
      
      
      game.CheckGuess(letter,g, misses);
      
      

    //}
      return 1;
      //system("pause");
}