#include <stdio.h>

int main(int argc,char ** argv) {
    FILE * input;
    int total_letters = 26;
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int count[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int c;

    if(argc == 2) {
        input = fopen(argv[1],"r");
    } else {
        input = stdin;
    }

    while((c = fgetc(input)) != EOF && c != '#') {
    	int index = 0;
    	while(index <= total_letters && letters[index] != c) {
    		index++;
    	}
    	if(index < total_letters) {
		    count[index]++;
	    }
    }

    int total = 0;
    int max = 0;
    int min = 0;
    int avg = 0;

	int index = 0;


    while(index<total_letters) {
    	if(count[index]) {
		    total += count[index];
	    }
        if(count[max]<count[index]) {
        	max = index;
        }
        if(count[min]>count[index]) {
        	min = index;
        }
    	index++;
    }
    avg = total/total_letters;

    printf("Celkovy pocet znaku: %d\n",total);
    printf("Nejcastejsi znak: %c\n",letters[max]);
	printf("Nejmene casty znak: %c\n",letters[min]);
	printf("Prumerna cetnost znaku: %d\n",avg);

	printf("Cetnost jednotlivych znaku:\n");
	index = 0;
	while(index < total_letters) {
		printf("%c - %d\n",letters[index],count[index]);
		index++;
	}
    return 0;
}