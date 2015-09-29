#include <iostream>

using namespace std;

    string language;

int main()

{
    while (1<2)
    {
    cout << "\nEnter the language you would like to say 'I love you' in" << endl;
    
    cin >> language;
    if (language =="Italian" || language =="italian")
    {
        cout << "Io ti amo";
    }
    else if (language == "Spanish" || language == "spanish")
    {
        cout <<"Te amo";
    }
    else if (language == "German" || language =="german")
    {
        cout <<"Ich liebe dich";
    }
    else if (language == "Japanese" || language =="japanese")
    {
        cout <<"わたしは、あなたを愛しています";
    }
    else if (language == "Russian" || language == "russian")
    {
        cout <<"я люблю тебя";
    }
    else if (language == "French" || language == "french")
    {
        cout <<"je t'aime";
    }
    else if (language == "Chinese" || language =="chinese")
    {
        cout <<"我爱你";
    }
    else if (language == "Swedish" || language == "swedish")
    {
        cout <<"jag älskar dig";
    }

    if (language == "English" || language =="english")
    {
        cout <<"You already know how to say that";
    }
    
    }
    
    return 0;
    
}
