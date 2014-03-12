#include <stdio.h>

int main (int argc, char const *argv[])
{
    //make our own array of strings
    char *states[] = {
        "California","Oregon",
        "Washington","Texas"
    };

    //argv[0] = states[3]; doesn't work
    //states[0] = argv[3]; works
    int i = 0;

    //go through each string in argv
    //why am I skipping argv[0]

    for( i = 1; i < argc; i++) //interesting. the 0th index is for the ./ex10.
    {
        printf("arg :%d %s\n",i, argv[i] );
    }


    int num_states = 5; //higher number causes seg fault ^_^

    for(i = 0; i < num_states ; i++)
    {
        printf("state %d: %s\n", i, states[i] );
    }

    return 0;
}
