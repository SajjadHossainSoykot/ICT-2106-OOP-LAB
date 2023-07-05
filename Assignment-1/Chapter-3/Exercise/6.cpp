#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Player
{
    string name;
    int runs;
    int innings;
    int notOut;
    double average;
};

int main()
{
    vector<Player> players;
    // Read the batting figures
    while (true)
    {
        string name;
        int runs, innings, notOut;
        cout << "Enter player's name (or 'exit' to finish): ";
        cin >> name;
        if (name == "exit")break;
        cout << "Enter runs: ";
        cin >> runs;
        cout << "Enter innings: ";
        cin >> innings;
        cout << "Enter not out: ";
        cin >> notOut;
        double avg = static_cast<double>(runs) / (innings - notOut);
        players.push_back({name, runs, innings, notOut, avg});
    }
    // Display the details of players
    cout << setw(10) << "Player"
         << setw(10) << "Runs"
         << setw(10) << "Innings"
         << setw(10) << "Not Out"
         << setw(10) << "Average" << endl;
    for (const auto &player : players)
    {
        cout << setw(10) << player.name
             << setw(10) << player.runs
             << setw(10) << player.innings
             << setw(10) << player.notOut
             << setw(10) << fixed << setprecision(2) << player.average << endl;
    }
    return 0;
}
/* Output:

Enter player's name (or 'exit' to finish): Sajjad
Enter runs: 200
Enter innings: 3
Enter not out: 1
Enter player's name (or 'exit' to finish): Soykot
Enter runs: 150
Enter innings: 2
Enter not out: 0
Enter player's name (or 'exit' to finish): exit
    Player      Runs   Innings   Not Out   Average
    Sajjad       200         3         1    100.00
    Soykot       150         2         0     75.00

*/