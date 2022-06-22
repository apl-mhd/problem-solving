#include<stdio.h>

int daysInmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

char *daysNameArray[]={"Sunday","Sat","Monday", "Tuesday", "Wednesday", "thusDat","Friday"};


void leapyearCheck(int year){

    if((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0)){


           daysInmonth[1] = 29;
    }

}


void printCelender(int year, int month, int userDay){

        int firstDayArray[12], firstDay, i, d1, d2, d3, day, daySpace, dayName;

        d1 = (year - 1) / 4.0;
        d2 = (year - 1) / 100.0;
        d3 = (year - 1) / 400.0;


        firstDay = (year + d1 - d2 + d3) % 7;
        firstDayArray[0] = firstDay;

        for(i = 1; i<12; i++){

                firstDayArray[i] =(firstDayArray[i-1] + daysInmonth[i-1]) % 7;


        }



        printf("Sun  Mon  Tue  Wed  Thus  Fri  Sat\n");



            for(daySpace = 1; daySpace <  firstDayArray[month-1] * 5; daySpace++ ){

                printf(" ");


              }



        for( day = 1; day <= daysInmonth[month-1]; day++){

            if(day == userDay)
                printf(" [%d] ", day);

            else
                printf(" %d ", day);


            if((day + firstDayArray[month-1]) % 7 > 0){

                printf(" ");

            }

            else{

                printf("\n");

            }

        }
        printf("\n");

        dayName = ( firstDayArray[month-1] + userDay ) % 7;

        printf("\n%d-%d-%d is %s \n\n", userDay, month, year, daysNameArray[dayName]);

}//end caledner function



int main(){


    int year, month, userDay;
    printf("Please Input Date Month Year like:  1 1 2016 \n");
    scanf("%d%d%d",&userDay, &month, &year);
    leapyearCheck(year);
    printCelender(year, month,userDay);

    return 0;
}