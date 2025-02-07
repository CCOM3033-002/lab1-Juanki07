/*
Lab01
Nombre: Juan Carlos Velez Reyes
Núm. Est: 801-21-2150
Colaboraciones:
N/A
*/

#include <iostream>
#include <iomanip>  // For formatting output
#include <string>

using namespace std;

int main() {
    // Declaring variables
    string movie; 
    int adultTickets, childTickets;
    const double adultTicketPrice = 10.00;
    const double childTicketPrice = 6.00;
    const double DistributorPay = 0.2; // keeps 20%

    // input
    cout << "Enter the name of the movie: ";
    getline(cin, movie);
    
    cout << "Enter the amount of adult tickets sold: ";
    cin >> adultTickets;
    
    cout << "Enter the amount of child tickets sold: ";
    cin >> childTickets;

    // Calculations
    double grossBoxProfit = (adultTickets * adultTicketPrice) + (childTickets * childTicketPrice);
    double netBoxProfit = grossBoxProfit * DistributorPay;
    double distributorAmount = grossBoxProfit - netBoxProfit;

    // output
    cout << "\nThis program calculates the Gross and Net Box Office Profit\n"
        << "and the Distributor's Profit of a movie playing in the theater.\n\n";
    cout << left << setw(30) << "Movie Name:" << " \"" << movie << "\"\n";
    cout << left << setw(30) << "Adult Tickets Sold:" << adultTickets << endl;
    cout << left << setw(30) << "Child Tickets Sold:" << childTickets << endl;
    cout << left << setw(30) << "Gross Box Office Profit:" << "$" << right << setw(8) << fixed << setprecision(2) << grossBoxProfit << endl;
    cout << left << setw(30) << "Net Box Office Profit:" << "$" << right << setw(8) << fixed << setprecision(2) << netBoxProfit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:" << "$" << right << setw(8) << fixed << setprecision(2) << distributorAmount << endl;

    return 0;
}

