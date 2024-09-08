//This program calculates different percentages of a salary and 
// displays the calculated values.
#include <iostream>
using namespace std;

int main()
{
    const double MONTHLYSALARY = 6000.0;
    const double PERCENT1 = 5.0, PERCENT2 = 7.0, PERCENT3 = 10.0;

    double contribution1, contribution2, contribution3;

    //Calculate the contributions to the retirement plan for each percentage
    contribution1 = MONTHLYSALARY * PERCENT1 / 100.0;
    contribution2 = MONTHLYSALARY * PERCENT2 / 100.0;
    contribution3 = MONTHLYSALARY * PERCENT3 / 100.0;

    cout << "The amount of contribution to the retirement plan at " << PERCENT1
        << "% is $" << contribution1 << " ." << endl;
    cout << "The amount of contribution to the retirement plan at " << PERCENT2
        << "% is $" << contribution2 << " ." << endl;
    cout << "The amount of contribution to the retirement plan at " << PERCENT3
        << "% is $" << contribution3 << " ." << endl;

    return 0;
}
