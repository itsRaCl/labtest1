#include <stdio.h>

int date_check(int day,int month, int year){
        if (year>=1900 && year<=2022){
            if (month>=1 && month <=12){
                if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
                    if (day>=1 && day<=31){
                        return 1;
                    }
                    else {return -1;}
                }else if (month==4||month==6||month==9||month==11){
                    if (day>=1 && day<=30){
                        return 1;
                    }else {return -1;}
                }else if (month==2){
                    if ((year %4 ==0 && year%100!=0)||(year%400==0)){
                        if (day>=1 && day<=29){
                        return 1;
                        }else {return -1;}
                    }else {
                        if (day>=1 && day<=28){
                        return 1;
                        }else {return -1;}
                    }
                }
            }else {return -1;}
        }else {return -1;}
}

int main(){
    int day, month, year;
    printf("Enter the date in the format(DD-MM-YYYY): ");
    scanf("%02d-%02d-%04d", &day, &month, &year);
    int x= date_check(day, month, year);
    if (x==1){
        printf("The date is valid\n");
    }else if (x==-1){
        printf("Enter a valid date\n");
    }
    return 0;
}