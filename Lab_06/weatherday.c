#include<stdio.h>
#include<stdlib.h>
struct w_type{
    int highTemp;
    int lowTemp;
    double precipitation;
};
typedef struct w_type WeatherDay;
void printWD(WeatherDay *day){
    printf("Our weather day: \nHighest Temperature: \t\t %d \nLowest Temperature: \t\t %d \nPrecipitation: \t\t\t %lf \n", day->highTemp, day->lowTemp, day->precipitation);
}
void intialize(WeatherDay * day){
    day->highTemp = 0;
    day ->lowTemp = 0;
    day -> precipitation =0;
// void intialize(WeatherDay day){
    // day.highTemp = 0;
    // day.lowTemp = 0;
    // day.precipitation =0;
}
float avgTemp(WeatherDay * Day){
    float average;
    average = (Day->lowTemp + Day->highTemp)/2;
    return average;
}
int main() {
    //TO-DO

    struct w_type day1;
    WeatherDay* dayptr;
    dayptr = &day1;

    // day1.highTemp = 142;
    // day1.lowTemp = 39;
    // day1.precipitation = 12.7;
    

    printf("Enter the highest temperature of the day: ");
    scanf("%d", &dayptr->highTemp);
    printf("Enter the lowest temperature of the day: ");
    scanf("%d", &dayptr->lowTemp);
    printf("Enter the precipitation of the day: ");
    scanf("%lf", &dayptr->precipitation);


    printWD(dayptr);
    printf("The average Temperature is: \t %f\n",avgTemp(dayptr));

    // intialize(day1);
    intialize(dayptr);
    printWD(dayptr);

    WeatherDay * dayArray;
    dayArray= malloc(5 * sizeof(WeatherDay));
    dayArray[2] = day1;

    printWD(&day1);

    return 0;
}