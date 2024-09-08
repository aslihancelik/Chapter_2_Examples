//This program displays different contributions to the retirement 
// plan by calculating different percentages of a salary and 
// displaying the calculated values.

#include <iostream>
using namespace std;

int main()
{
    const double MONTHLY_SALARY = 6000.0;
    const double PERCENT1 = 5.0, PERCENT2 = 7.0, PERCENT3 = 10.0;

    double contribution1, contribution2, contribution3;

    //Calculate the contributions to the retirement plan for each percentage
    contribution1 = MONTHLY_SALARY * PERCENT1 / 100.0;
    contribution2 = MONTHLY_SALARY * PERCENT2 / 100.0;
    contribution3 = MONTHLY_SALARY * PERCENT3 / 100.0;

    cout << "The amount of contribution to the retirement plan at " << PERCENT1
        << "% is $" << contribution1 << " ." << endl;
    cout << "The amount of contribution to the retirement plan at " << PERCENT2
        << "% is $" << contribution2 << " ." << endl;
    cout << "The amount of contribution to the retirement plan at " << PERCENT3
        << "% is $" << contribution3 << " ." << endl;

    return 0;
}
