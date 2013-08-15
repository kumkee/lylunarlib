#include <stdio.h>
#include "lylunar.h"

int main()
{
    int year, month, day, hour;
    
    year = 2012;
    month = 6;
    day = 4;
    hour = 12;
    //if (!(year>=Cyear && year<Cyear+Nyear))
//	Error("Year out of range.");
 //   if (!(month>=1 && month<=12))
//	Error("Month out of range.");
 //   if (!(day>=1 && day<=31) || (inverse && day>30))
//	Error("Day out of range.");
 //   if (!(hour>=0 && hour<=23))
//	Error("Hour out of range.");

//    if (!inverse && year==SolarFirstDate.year &&
//	CmpDate(month, day, SolarFirstDate.month, SolarFirstDate.day)<0)
//	Error("Date out of range.");

    Date myday;

    myday.year = year;
    myday.month = month;
    myday.day = day;
    myday.hour = hour;

    Solar2Lunar(&myday);

    //Report();
    printf("Solar : %d.%d.%d.%d\t\n", year, month, day, hour);
    printf("Lunar : %d.%d%s.%d.%d\n",
	   myday.year, myday.month, (myday.leap?"Leap":""), myday.day, myday.hour);

    return 0;
}
