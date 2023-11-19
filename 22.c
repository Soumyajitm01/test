#include <stdio.h>  
#include <string.h>  
  
// function definition of the revstr()  
void revstr(char *str1)  
{  
    // declare variable  
    int i, len, tstr;  
    len = strlen(str1); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // tstr variable use to temporary hold the string  
        tstr = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = tstr;  
    }  
}  
      
    int main()  
    {  
        char str[50]; // size of char string  
        printf (" Enter the string: ");  
        gets(str); // use gets() function to take string  
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        // call revstr() function   
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  
