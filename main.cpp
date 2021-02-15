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

  
  public:
  Guess(){}
  Guess(string a_word,char a_guess){

    word = a_word;
    guess = a_guess;
  }

  void displayWord(){

    //cout << word << endl; //for debugging purpose
    for(int i = 0;i< word[i] ; i++){
      cout << "-";
    }
  }
  
class Hangman {

  private:
  int tries;
  Guess *g;

  public:
  Hangman(){}
  
  void startGame();
  bool CheckGuess (Guess *g,int tries);
};

/*void Hangman::startGame(){

  g->displayWord();

}*/

};

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

  char guess;
  cout << "Guess: ";
  cin >> guess;
  Guess g1("Programming",guess);

  g1.displayWord();
  

  return 1;
  //system("pause");
}