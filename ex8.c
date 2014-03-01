#include <stdio.h>

int main (int argc, char const *argv[])
{

    int areas[] = {10,12,13,14,20}; //20 bytes
    char name[] = "Zed";
    char full_name[] = {'Z','e','d',' ','A','.',' ','S','h','a','w','\0'};

    //extra cred

    areas[0] = 100;
    areas[1] = 2000;
    //name[4] = 'Z'; //this is causing something funny. must ask.
    name[0] = 'A';
    full_name[6] = 'F';
    areas[3] = name[2];

    //WARNING: On some systems you may have to change the %ld to %u since
    //it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int) ); //4 bytes
    printf("The size of areas (int[]): %ld\n", sizeof(areas) ); //20 bytes
    printf("The number of ints in areas: %ld\n", sizeof(areas)/sizeof(int) );
    printf("The first area is %d, the second area is %d\n",areas[0],areas[1]);
    //extra cred
    printf("The fourth area is %d\n",areas[3]); //ascii value of 'd' = 100
    //
    printf("The size of char: %ld\n", sizeof(char)); //1 byte
    printf("The size of name( char[]): %ld\n", sizeof(name) ); //4 bytes (/0)
    printf("The number of chars: %ld\n", sizeof(name)/sizeof(char) );
    printf("The size of full_name (char[]): %ld\n", sizeof(full_name) );
    printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char) );

    printf("name = \"%s\" and full_name = \"%s\" \n", name , full_name );
	return 0;
}
