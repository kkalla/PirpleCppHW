#include <iostream>

using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;
    int numHours = 12;

    //MINUTES_PER_HOUR++;
    numHours++;
    cout << "There are " << MINUTES_PER_HOUR * numHours \
    << " in " << numHours << " hours" << endl;

    unsigned int zeroHour = 0;
    zeroHour--;
    cout << "1 hour before zero hour is " << zeroHour;
}
