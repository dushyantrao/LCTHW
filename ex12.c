#include <stdio.h>

int main (int argc, char const *argv[])
{

    int i =0;

    if(argc == 1){
        printf("You only have no arguments. Not cool.\n" );
    } else if(argc > 1 && argc < 4){
        printf("Here are your arguments:\n" );

        for(i = 1; i < argc ; i++){
            printf("%s \n", argv[i] );
        }
    } else {
        printf("You have too many arguments. Still not cool.\n" );
    }



	return 0;
}
