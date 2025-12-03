#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    //Allocate memory for a small string
    str=(char*) malloc(20*sizeof(char));
    if(str == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    //storing small string
    printf("ENTER A SMALL STRING:");
    fgets(str,20,stdin);
    printf("String stored in memory:%s",str);
    //reallocate memory for a larger string
    str=(char*)realloc(str,50*sizeof(char));
    if(str==NULL)
    {
        printf("Memory reallocation failed");
        return 1;
    }
    //modify stored a string to a larger one
    printf("\nEnter a lager string:");
    fgets(str,50,stdin);
    printf("New string stored in memory:%s",str);
    // Free allocated memory
    free (str);
    return 0;
}
