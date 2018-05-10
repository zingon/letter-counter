#include <stdio.h>
#include "letters.h"

int main(int argc,char ** argv) {
    FILE * input;

    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int count[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int total_letters = sizeof(letters)/ sizeof(letters[0]);

    int c;

    if(argc == 2) {
        input = fopen(argv[1],"r");
    } else {
        input = stdin;
    }

    while((c = fgetc(input)) != EOF && c != '#') {
        if(!Letter_Exists(letters,c)) {
            continue;
        }

    	int index = Letter_Index(letters,c, total_letters);

    	if(index < total_letters) {
		    count[index]++;
	    }

    }

    int total = Total_Letters(count,total_letters);
    int max = Index_of_Max(count, total_letters);
    int min = Index_of_Min(count, total_letters);
    int avg = 0;

    avg = total/total_letters;

    printf("Celkovy pocet znaku: %d\n",total);
    printf("Nejcastejsi znak: %c\n",letters[max]);
	printf("Nejmene casty znak: %c\n",letters[min]);
	printf("Prumerna cetnost znaku: %d\n\n",avg);

	printf("Cetnost jednotlivych znaku:\n");
	int index = 0;
	while(index < total_letters) {
		printf("%c - %d\n",letters[index],count[index]);
		index++;
	}
    return 0;
}