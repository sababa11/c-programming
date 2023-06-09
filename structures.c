#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
    tomorrow = advanceDay(today);
	printDate(tomorrow);

    printf("Size of struct date is %zu.\n", sizeof(struct date));
    printf("Size of year is %zu.\n", sizeof(today.year));
    printf("Size of month is %zu.\n", sizeof(today.month));
    printf("Size of day is %zu.\n", sizeof(today.day));
    
	return 0;
}

void readDate(struct date *dat) {
    scanf("%d %d %d", &dat->year, &(*dat).month, &(*dat).day);
}

void printDate(struct date dat) {
    printf("%.2d/%.2d/%.4d\n", dat.month, dat.day, dat.year);
}

struct date advanceDay(struct date dat) {
    if (dat.month == 1 || dat.month == 3 || dat.month == 5 || dat.month == 7 || dat.month == 8 || dat.month == 10) {
        if (dat.day == 31){
            dat.month++;
            dat.day = 1;
        } else {
            dat.day++;
        }
    } else if (dat.month == 2) {
        if (dat.day == 28) {
            dat.day = 1;
            dat.month++;
        } else {
            dat.day++;
        }
    } else if (dat.month == 4 || dat.month == 6 || dat.month == 9 || dat.month == 11 ) {
        if (dat.day == 30) {
            dat.day = 1;
            dat.month++;
        } else {
            dat.day++;
        }
    } else if (dat.month == 12) {
        if (dat.day == 31){
            dat.year++;
            dat.month = 1;
            dat.day = 1;
        } else {
            dat.day++;
        }
    }
    return dat;
}
