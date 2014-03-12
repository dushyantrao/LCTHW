#include <stdio.h>

int main (int argc, char const *argv[])
{
    //go through each string in argv

    int i =0;
    while (i< argc){
        printf("arg %d: %s\n", i, argv[i] );
        i++;
    }

    //let's make our own array of strings
    char *states[] = {
        "California","Oregon",
        "Washington","Texas"
    };

    int num_states = 4;
    i = 0; //watch for this. need of a reset.

    while(i < num_states){
        printf("state %d: %s\n",i, states[i] );
        i++;
    }

    //extra credit.
    //copy the argv to states
    i = 1;
    while (i < argc){
        states[i] = argv[i]; //this is just copying pointers
        i++;
    }

    num_states = argc;
    i = 0; //watch for this. need of a reset.

    while(i < num_states){
        printf("state %d: %s\n",i, states[i] );
        i++;
    }

	return 0;
}
