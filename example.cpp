#include <iostream>
#include "Elo/Elo.h"

using namespace std;

int main() {
    using namespace Elo;
    
    // generate two player objects
    Player p("Magnus Carlsen", 2840.);
    Player q("Viswanathan Anand", 2786.);

    // compare both player objects
    cout << (p == q) << endl;
    
    // generate the game object
    Game g(10., p, q);

    // Magnus Carlsen won
    Result r(Result::WIN);
    
    cout << r << endl << g << endl;
    
    // update both player's Elo
    g.updateElo(r);
    
    cout << p << endl << q << endl;
    
    return 0;
}
