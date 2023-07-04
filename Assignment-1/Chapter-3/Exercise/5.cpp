#include <iostream>
using namespace std;
int main()
{
    int candidate[6] = {0}; // Array to store vote counts for each candidate and spoiled candidates
    int ballot;
    cout << "Enter the ballot for candidate (Enter Between 1-5, 0 to exit):" << endl;
    while (true)
    {
        cout << "Ballot: ";
        cin >> ballot;
        if (ballot == 0){
            break; // Exit the loop if 0 is entered
        }
        if (ballot >= 1 && ballot <= 5){
            candidate[ballot]++; // Increment the vote count for the candidate
        }
        else{
            candidate[0]++; // Increment the count for spoiled candidates
        }
    }
    cout << "\nVote Count:" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Candidate " << i << ": " << candidate[i] << " vote(s)" << endl;
    }
    cout << "Spoilt ballots: " << candidate[0] << endl;
    return 0;
}
