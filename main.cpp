#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;
void guess(string difficulty){
    int size;
    if (difficulty == "Easy" || difficulty == "1") {
        cout << "Great! You have selected the Easy difficulty level." << endl;
        size = 10;
    } else if (difficulty == "Medium" || difficulty == "2") {
        cout << "Great! You have selected the Medium difficulty level." << endl;
        size = 5;
    } else if (difficulty == "Hard" || difficulty == "3") {
        cout << "Great! You have selected the Hard difficulty level." << endl;
        size = 3;
    } else {
        cout << "Invalid choice!" << endl;
        return;
    }
    cout << "Let's start the game!" << endl;
    srand(time(0));
    int random = (rand()%100)+1;
    for (int i = 1; i <= size; i++) {
        cout << "Enter your guess: ";
        int guess;
        cin >> guess;
        if (guess == random) {
            cout << "Congratulations! You guessed the correct number in " << i << " attempts." << endl;
            return;
        } else if (guess < random) {
            cout << "Incorrect! The number is greater than " << guess << "." << endl;
        } else {
            cout << "Incorrect! The number is lesser than " << guess << "." << endl;
        }
    }
    cout << "sorry loser.. out of guesses!\n" << endl;
    cout << "restart ??  enter(y/n)\n" << endl;
    string restart;
    cin>>restart;
    if(restart == "y"){
        std::cout<<"Please select the difficulty level:\n1. Easy (10 chances)\n2. Medium (5 chances)\n3. Hard (3 chances)\n";
        string difficulty1;
        cin>>difficulty1;
        guess(difficulty1);
    }else{
        return;
    }
}
int main(){
    std::cout<<"<Welcome to the Number Guessing Game!\nI'm thinking of a number between 1 and 100\nYou have 5 chances to guess the correct number.";
    std::cout<<"Please select the difficulty level:\n1. Easy (10 chances)\n2. Medium (5 chances)\n3. Hard (3 chances)\n";
    string difficulty;
    cin>>difficulty;
    guess(difficulty);
    return 0;
}