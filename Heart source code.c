// Online C compiler to run C program onlin
#include <stdio.h>
#include <string.h>

int main()
{
  int i,j,x,k,l,m;
  int len,le;
  char name [20] ,nam [20];
  printf ("enter your name ");
   scanf ("%s",name);
   printf ("enter your beloved name ");
   scanf ("%s",nam);
   printf ("enter the number of rows");
   scanf ("%d",&x);
   len = strlen (name);
   le = strlen (nam);// taking length of name 
    for (i=x/2;i<=x;i+=2){


        for (j=1;j<x-i;j+=2){ // j+=2 means j= j+2

           printf ("  ");
        }
         for (j=1;j<=i;j++){

             printf ("❤️");
         }
           for (j=1;j<x-i;j++){

           printf ("  ");
        }
         for (j=1;j<=i;j++){

             printf ("❤️");
         }
       printf ("\n");
    }
      // printing lower part 
      for (i=x;i>=1;i--){

         for (j=1;j<=x-i;j++){
            printf ("  ");
         } 
         if (i==x)
         {
           for (j=1;j<= (x*2-len)/2;j++)
           {
             printf ("❤️");
           }
           printf ("%s",name);
           for (j=1;j<i;j++)
           {
             printf ("❤️");
           }



         }

         else if (i==x-1) // this is used for your 2nd name or crush name
         {
           // here -1 means below the upper row in whichh first name have printied 

              for (j=1;j<= (x*2-le)/2;j++) // le is the lenght of 2nd name 
           {
             printf ("❤️");
           }
           printf ("%s",nam);
           for (j=1;j<i-1;j++) // i have here did i -1 because here i had to print 
           { 
             // name but one ❤️ got outside from column so i did - 1 ;
             printf ("❤️");
           }
         }
         else
         {
           for (j=1;j<=2 *i-1;j++){


               printf ("❤️");
           }
         }


          

           printf ("\n");
           
      }
    
printf("\n\n\t\t crafted by Aadityansha with ❤️");
  return 0;
}
