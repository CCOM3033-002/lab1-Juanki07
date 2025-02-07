/*

Juan Carlos Velez Reyes
CCOM3033-002
Lab 01

This program calculates the Gross and Net Box
Office Profit and the Distributer's Profit of a movie playing in the theater.

*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

/* gbox = gross box office
   nbox = net box office 
   ag = amount paid to distributor
   ats = adult tickets sold
   cts = child tickets sold
   atsn = number of ats
   ctsn = number of cts
*/
    double ats, cts, gbox, nbox, ad, atsn, ctsn;
    string movie;

    cout << "Hello! What movie do you want to watch?: " << endl;
    getline(cin, movie);

    cout << "How many adult tickets were sold?: " << endl;
    cin >> atsn;

    cout << "How many child tickets were sold?: " << endl;
    cin >> ctsn;

    ats = 10.0 * atsn;
    cts = 6.0 * ctsn;
    gbox = ats + cts; // adult and child tickets sold sum
    nbox = gbox * 0.2; // 20% of gbox
    ad = gbox - nbox; // gross minus net

    cout << "Movie name: \t\t\t" << movie << endl;
    cout << "Adult Tickets Sold: \t\t" << ats << endl;
    cout << "Child Tickets Sold: \t\t" << cts << endl;
    cout << "Gross Box Office Profit: \t$" << gbox << endl;
    cout << "Net Box Office Profit: \t $" << nbox << endl;
    cout << "Amount Paid to Distributior: \t$"<< ad << endl;

    return 0;
}

