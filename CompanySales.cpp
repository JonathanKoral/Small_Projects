//This program will read the quarterly sales for a given number of years and will print
//the year and sales in table format.

//Jonathan Koral

#include <iostream>
#include <iomanip>
using namespace std;

//These are te maximum years and colums the program can output
const int MAXYEARS = 10;
const int MAXCOLUMS = 5;

typedef int SalesType[MAXYEARS][MAXCOLUMS];

void getSales(SalesType, int&);
void printSales(SalesType, int);
void printTableHeading();

int main()
{
    int yearsUsed;
    SalesType sales;
    
    getSales(sales, yearsUsed);
    printTableHeading();
    printSales(sales, yearsUsed);
    
    return 0;
}

//The printTableHeading function will print the Heading of the Table 
//which contain the title, year, and 4 quarters of sales
void printTableHeading()
{
    cout << setw(40) << "YEARLY QUARTERLY SALES" << endl << endl << endl;
    cout << setw(10) << "Year" << setw(10) << "Quarter 1"
         << setw(10) << "Quarter 2" << setw(10) << "Quarter 3"
         << setw(10) << "Quarter 4" << endl;
}

//The getSales function will ask the user for the number of years from 1-10
//which are the maximum rows. It also uses for loops to put the years and quarters
//into a 2D array.
void getSales (SalesType table, int& numberOfYears)
{
    cout << "Please enter the number of years (1-" << MAXYEARS << ")" << endl;
    cin >> numberOfYears;

    for (int years = 0; years < numberOfYears; years++) {
        cout << "Please enter the YEARS and 4 Quarter of sales:\n";
        for (int colums = 0; colums < MAXCOLUMS; colums++) {
            cin >> table[years][colums];
        } 
    }
    cout << endl;
}

//The printSales function will print the sales using two for loops and 
//outputting the input from getSales into a organized chart.
void printSales(SalesType table, int numberOfYears)
{
    for (int years = 0; years < numberOfYears; years++) {
        for (int colums = 0; colums < MAXCOLUMS; colums++) {
            cout << setw(10) << table[years][colums];
        }
        cout << endl;
    }
}
