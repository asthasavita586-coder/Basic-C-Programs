#include<stdio.h>
#include<string.h>
int main()
{
    char str[5];//character arrray (string)
    char rev[5];//array to store reversed string
    int i,len= 5;//manually setting length=5
    printf("Enter a string (max 5 character):");
    gets(str);//read input string
    //reverse the string using len=5
    for(i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    rev[len]='\0'; //end the reversed string properly
    printf("\nOriginal string:%s\n",str);
    printf("Reversed string:%s\n",rev);

}
