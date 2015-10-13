#include <iostream>
using namespace std;

string name;
string color;

int main()
{
    cout << "Input your name:\n";
    getline (cin, name);
    cout << "What is your favorite color? ";
    getline (cin, color);
    
    if (color =="yellow" || color =="Yellow")
    {
        cout << name + ", You are a super duper happy person and everyone loves that about you. Go you!";
    }
    if (color =="blue" || color =="Blue")
    {
        cout << name + ", You are always so calm and cool. Some people may mistake this for insensitivity but really they need your laidback attitude.";
    }
    if (color =="red" || color =="Red")
    {
        cout << name + ", You are very fiesty and bring a lot of personality to everything you do. Be careful not to offend anyone when you are having a good time.";
    }
    if (color =="green" || color =="Green")
    {
        cout <<name + ", Let's be real...all you see is dollar signs and no one can hate on your hustle.";
    }
    if (color =="black" || color =="Black")
    {
        cout <<name + ", You are so hardcore and no one understands how deep you are.";
    }
    if (color =="orange" || color =="Orange")
    {
        cout <<name + ", You are a crazy cat and keep things lively with dancin, singin, jumpin, runnin, smilin all over town.";
    }
    if (color =="White" || color =="white")
    {
        cout <<name + ", You're pretty basic";
    }
    if (color =="indigo" || color =="indigo")
    {
        cout <<name + ", you're a very mysterious and unique person.";
    }
    else if (color == "")
    {
        cout<< "INVALID ENTRY";
    }
    


    return 0;
}
