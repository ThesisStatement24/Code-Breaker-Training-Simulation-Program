

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields { WORD, HINT, NUM_FIELDS };
    const int NUM_WORDS = 10;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"television", "Have you seen the new Lion King?"},
        {"computer", "Is your keyboard and mouse wired or wireless?"},
        {"anime", "It's Over 9000!!"},
        {"speakers", "Can you hear the bass?"},
        {"smartphone", "New phone, Who dis?"},
        {"playstation", "The new God Of War is amazing."},
        {"university", "How many classes are you taking?"},
        {"nvidia", "What graphics card do you have?"},
        {"california", "Disneyland or Magic Mountain?"},
        {"nintendo", "Do you have the new Smash Bros?"}

    };

    enum fields2 { WORD2, HINT2, NUM_FIELDS2 };
    const int NUM_WORDS2 = 10;
    const string WORDS2[NUM_WORDS2][NUM_FIELDS2] =
    {
        {"television", "Have you seen the new Lion King?"},
        {"computer", "Is your keyboard and mouse wired or wireless?"},
        {"anime", "It's Over 9000!!"},
        {"speakers", "Can you hear the bass?"},
        {"smartphone", "New phone, Who dis?"},
        {"playstation", "The new God Of War is amazing."},
        {"university", "How many classes are you taking?"},
        {"nvidia", "What graphics card do you have?"},
        {"california", "Disneyland or Magic Mountain?"},
        {"nintendo", "Do you have the new Smash Bros?"}

    };

    enum fields3 { WORD3, HINT3, NUM_FIELDS3 };
    const int NUM_WORDS3 = 10;
    const string WORDS3[NUM_WORDS3][NUM_FIELDS3] =
    {
        {"television", "Have you seen the new Lion King?"},
        {"computer", "Is your keyboard and mouse wired or wireless?"},
        {"anime", "It's Over 9000!!"},
        {"speakers", "Can you hear the bass?"},
        {"smartphone", "New phone, Who dis?"},
        {"playstation", "The new God Of War is amazing."},
        {"university", "How many classes are you taking?"},
        {"nvidia", "What graphics card do you have?"},
        {"california", "Disneyland or Magic Mountain?"},
        {"nintendo", "Do you have the new Smash Bros?"}

    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];  // word to guess
    string theHint = WORDS[choice][HINT];  // hint for word
    int choice2 = (rand() % NUM_WORDS2);
    string theWord2 = WORDS2[choice2][WORD2];
    string theHint2 = WORDS2[choice2][HINT2];
    int choice3 = (rand() % NUM_WORDS3);
    string theWord3 = WORDS3[choice3][WORD3];
    string theHint3 = WORDS3[choice3][HINT3];

    string jumble = theWord;  // jumbled version of word
    string jumble2 = theWord2;
    string jumble3 = theWord3;
    int length = jumble.size();
    int length2 = jumble2.size();
    int length3 = jumble3.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    for (int i = 0; i < length2; ++i)
    {
        int index1 = (rand() % length2);
        int index2 = (rand() % length2);
        char temp = jumble2[index1];
        jumble2[index1] = jumble2[index2];
        jumble2[index2] = temp;
    }

    for (int i = 0; i < length3; ++i)
    {
        int index1 = (rand() % length3);
        int index2 = (rand() % length3);
        char temp = jumble3[index1];
        jumble3[index1] = jumble3[index2];
        jumble3[index2] = temp;
    }

    cout << "\t\t\tWelcome to the CIA Code Breaker Training Simulation!\n\n";
    cout << "Unscramble the letters to break the code.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "The jumble is: " << jumble;

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while (guess != theWord)
    {
        if (guess == "hint")
        {
            cout << theHint;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
    {
        cout << "\nThat's it!  You guessed it!\n";
    }

    cout << "The jumble is: " << jumble2;

    string guess2;
    cout << "\n\nYour guess: ";
    cin >> guess2;

    while (guess2 != theWord2)
    {
        if (guess2 == "hint")
        {
            cout << theHint2;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess2;
    }

    if (guess2 == theWord2)
    {
        cout << "\nThat's it!  You guessed it!\n";
    }

    cout << "The jumble is: " << jumble3;

    string guess3;
    cout << "\n\nYour guess: ";
    cin >> guess3;

    while (guess3 != theWord3)
    {
        if (guess3 == "hint")
        {
            cout << theHint3;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess3;
    }

    if (guess3 == theWord3)
    {
        cout << "\nThat's it!  You guessed it!\n";
    }

    string playAgain;
    cout << "\n\nWould you like to play again? ";
    cin >> playAgain;

    if (playAgain == "yes" && playAgain != "no") {
        main();
    }
    else if (playAgain == "no" && playAgain != "yes") {
        cout << "\nThanks for playing.\n";
        return 0;
    }

}







