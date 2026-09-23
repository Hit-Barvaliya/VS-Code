#include <stdio.h>
#include <string.h>  // for strcmp

struct storage {
    char word[20];  // Increased to 20 for safety
};

int Final_Number = 0,temp=0;

void once(struct storage number[], int a) {
    for (int i = 0; i <= a; i++) {
        if (strcmp(number[i].word, "one") == 0) temp += 1;
        else if (strcmp(number[i].word, "two") == 0) temp += 2;
        else if (strcmp(number[i].word, "three") == 0) temp += 3;
        else if (strcmp(number[i].word, "four") == 0) temp += 4;
        else if (strcmp(number[i].word, "five") == 0) temp += 5;
        else if (strcmp(number[i].word, "six") == 0) temp += 6;
        else if (strcmp(number[i].word, "seven") == 0) temp += 7;
        else if (strcmp(number[i].word, "eight") == 0) temp += 8;
        else if (strcmp(number[i].word, "nine") == 0) temp += 9;
        else if (strcmp(number[i].word, "ten") == 0) temp += 10;
        else if (strcmp(number[i].word, "eleven") == 0) temp += 11;
        else if (strcmp(number[i].word, "twelve") == 0) temp += 12;
        else if (strcmp(number[i].word, "thirteen") == 0) temp += 13;
        else if (strcmp(number[i].word, "fourteen") == 0) temp += 14;
        else if (strcmp(number[i].word, "fifteen") == 0) temp += 15;
        else if (strcmp(number[i].word, "sixteen") == 0) temp += 16;
        else if (strcmp(number[i].word, "seventeen") == 0) temp += 17;
        else if (strcmp(number[i].word, "eighteen") == 0) temp += 18;
        else if (strcmp(number[i].word, "nineteen") == 0) temp += 19;
        else if (strcmp(number[i].word, "twenty") == 0) temp += 20;
        else if (strcmp(number[i].word, "thirty") == 0) temp += 30;
        else if (strcmp(number[i].word, "forty") == 0) temp += 40;
        else if (strcmp(number[i].word, "fifty") == 0) temp += 50;
        else if (strcmp(number[i].word, "sixty") == 0) temp += 60;
        else if (strcmp(number[i].word, "seventy") == 0) temp += 70;
        else if (strcmp(number[i].word, "eighty") == 0) temp += 80;
        else if (strcmp(number[i].word, "ninety") == 0) temp += 90;

        else if (strcmp(number[i].word, "hundred") == 0) {
            temp *= 100;
        }
        else if (strcmp(number[i].word, "thousand") == 0) {
            Final_Number += temp * 1000;
            temp = 0;
        }
        else if (strcmp(number[i].word, "lakh") == 0) {
            Final_Number += temp * 100000;
            temp = 0;
        }
        else if (strcmp(number[i].word, "crore") == 0) {
            Final_Number += temp * 10000000;
            temp = 0;
        }        
    }
    Final_Number += temp; 
    printf("Final number is: %d\n", Final_Number);
}

int main() {
    struct storage number[20];
    char num[200];
    int a = 0, b = 0, i = 0;

    printf("Write number in words: ");
    gets(num);  

    while (num[i] != '\0') {
        if (num[i] == ' ') {
            number[a].word[b] = '\0';
            a++;
            b = 0;
        } else {
            number[a].word[b++] = num[i];
        }
        i++;
    }
    number[a].word[b] = '\0';  

   
    for (int i = 0; i <= a; i++) {
        puts(number[i].word);
    }

    once(number, a);

    return 0;
}