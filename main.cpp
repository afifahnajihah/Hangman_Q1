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
  
  public:
  Guess(){}
  Guess(string a_word,char a_guess){

    word = a_word;
    guess = a_guess;
  }

  void displayWord(){

    cout << word << endl;
  }
  
class Hangman {

  private:
  int tries;
  Guess *g;

  public:
  Hangman(){}
  
  void start();
  bool CheckGuess ();
};

};

int main(){

  char guess;
  cout << "Enter guess: ";
  cin >> guess;
  Guess g1("Programming",guess);

  g1.displayWord();
  

  return 1;
  //system("pause");
}