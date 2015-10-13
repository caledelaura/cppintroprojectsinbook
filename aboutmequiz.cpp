#include <iostream>
using namespace std;

string name;
string age;
string color;
string holiday;
string food;
string animal;
string country;
string movie;
string game;
string movieGenre;
string os;
string candy;
string yes;

int main()
{
    cout << "Input your name:\n";
    getline (cin, name);
    cout << "How old are you?\n";
    getline (cin, age);
    cout << "What is your favorite color?\n";
    getline(cin, color);
    cout << "What is your favorite holiday?\n";
    getline (cin, holiday);
    cout << "What is your favorite food?\n";
    getline (cin, food);
    cout << "What animal do you like?\n";
    getline (cin, animal);
    cout << "What country would you like to visit?\n";
    getline (cin, country);
    cout << "What is your favorite movie?\n";
    getline (cin, movie);
    cout << "What is your favorite table top game?\n";
    getline (cin, game);
    cout << "What is your favorite movie genre?" << endl;
    getline (cin, movieGenre);
    cout << "Do you like Windows or Apple or Linux?" << endl;
    getline (cin, os);
    cout << "What is your favorite candy bar?" << endl;
    getline (cin, candy);
    
    cout << "Hello " + name + "." + " You are " + age + " and your favorite color is " + color + "." + " You enjoy " + food + "." + " You would like to own a " + animal + "." + " I think you would like to visit " + country + " and you would like to see " + movie + "." + " I bet you are so excited for " + holiday + "." + " Lets play " + game + "." << endl;
    cout << "Your favorite movie genre is " + movieGenre + "." + " You would like to have your computer run " + os + "." << endl;
    cout << " Would you like me to buy you a " + candy + "?" << endl;
    getline (cin, yes);
    cout << "Sorry I am only a program and can not get you a " + candy + ". :(" << endl;
    return 0;
}
