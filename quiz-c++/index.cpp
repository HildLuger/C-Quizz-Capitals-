#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(0)); // seed the random number generator

    // define an array of questions
    string questions[5] = {
        "What is the capital of France?",
        "What is the capital of Germany?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of Greece?"};

    // define an array of answers
    string answers[5] = {
        "Paris",
        "Berlin",
        "Rome",
        "Madrid",
        "Athens"};

    // ask the user three random questions
    for (int i = 0; i < 3; i++)
    {
        int index = rand() % 5; // generate a random index between 0 and 4
        cout << questions[index] << " ";
        string response;
        getline(cin, response);
        if (response == answers[index])
        {
            cout << "Correct!" << endl;
        }
        else
        {
            cout << "Incorrect. The correct answer is: " << answers[index] << endl;
        }
    }

    return 0;
}
