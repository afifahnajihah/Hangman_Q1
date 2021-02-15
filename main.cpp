//Hangman Code
//Wan Afifah Najihah - 1181101237
//Masyitah Salwa - 1181101292

#include <iostream>
#include<string>
using namespace std;

class Hangman {

  private:
  int tries;
  char guess;

  public:
  Hangman(){}
  
  void start();
  bool CheckGuess ();
};

int main(){

  return 1;
  //system("pause");
}