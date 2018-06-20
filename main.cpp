#include <iostream>

/* Formula to calculate the angel between the hour hand and the minutes hand is |30*h - 5.5x| where x is the mins
 * and where h is hours.
 *
 * Brief knowledge: The minutes hand moves 360 degree so it moves between the each numbers, it moves 6 degree.
 * while the minutes hand moves, the hour hand moves as well. So it moves 30 degree in an hour so that will be
 * 0.5 degree*/

int calcAngel(double h, double m){

    if (h < 0 || m < 0 || h > 12 || m > 60){
        printf("wrong time, please check how you typed the time.");

    }
    int angel= (30*h - 5.5*m);

    return angel;
}

int main(){
    double h, m;
    std::cout <<"Enter the hour(i.e: 12:00 will be 12): ";
    cin >> h;

    std::cout <<"Enter the minute(s)(i.e: 12:00 will be 00): ";
    cin >> m;

    printf("%d", calcAngel(12, 00));
    return 0;
}