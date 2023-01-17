#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE* ptr;
    FILE* ptr_new;
    char b[9];
    strcpy(b,"Banglore"); 
    char ch[50];
    char ch_new[20000];
    int i=0;
    // 1. open blg_essay file
    ptr = fopen("blg_essay.txt","r");
    if(ptr == NULL)
    {
        printf("\n file can not be opened \n");
    }
    printf("\n content of this file are \n");
    // fgets() reads one string at a time from the file. 
    // fgets() returns a string if it is successfully 
    // read by function or returns NULL if can not read.

    // 2. read banglore keyword from blg_eassy file 
    while(fgets(ch,1000,ptr)!= NULL)
    {
        ch_new[i] = *ch;
        // 3. Apply condition at banglore keyword and provide new line after that    
        if(strncmp(b,ch,10))
        {
          ch_new[i+1] = '\n';
          i++;   
        }
        i++;
    }
    ptr_new = fopen("blg_eassy_new.txt","w");
    if(ptr_new == NULL)
    {
        printf("\n failed to create blg-eassy_new.txt \n");
    }
    // 4. save the new content in another file
    if ( strlen (ch) > 0 )
    {
        fputs(ch_new, ptr_new) ;
    }       
    fclose(ptr);
    return(0);
}