#include <stdio.h>
#include <stdlib.h>

int main(){

     int i, j;
     int count = 0;

//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

     printf("\nEnter the number of rows in the : ");
     scanf("%d", &count);
     for (i=1; i<=count; i++){
          for (j=1; j<=count; j++) {
               printf("*");
          }
          printf("\n");
     }



printf("\n\n");




//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *

    
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
                                             // (i <= j )

     for (i=1; i<=count; i++) {
          for(j=1; j<=count; j++) {
               if (j<=i){
               printf("*");
               }else { printf(" ");}
          }
          printf("\n");
     }
   

printf("\n\n");
    
    
    
    

//  *
//    *
//      *
//        *
//          *

    
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    ///
                              /// (i == j)

     for (i=1; i<=count; i++) {
          for(j=1; j<=count; j++) {
               if (j==i){
               printf("*");
               }else { printf(" ");}
          }
          printf("\n");
     }


printf("\n\n");




//          *
//        *
//      *
//    *
//  *

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///

                                        // ( j == (n-i) +1)

     for (i=1; i<=count; i++) {   // count =
          for(j=1; j<=count; j++) {
               if (j==(count -i)+1){
               printf("*");
               }else { printf(" ");}
          }
          printf("\n");
     }



printf("\n\n");



//      *
//     **
//    ***
//   ****
//  *****
// ******


    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


          for (i=1; i<=count; i++) {   //  j >= (count-1) +1;
          for(j=1; j<=count; j++) {
               if (j>=(count-i)+1){
               printf("*");
               }else
               printf(" ");
          }
          printf("\n");
     }



printf("\n\n");




// *****
// ****
// ***
// **
// *

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          for (i=1; i<=count; i++) {   // j <= (count - i) +1
          for(j=1; j<=count; j++) {
               if (j<=(count -i)+1){
               printf("*"); }
          }
              printf("\n");
        }



 printf("\n\n");
    
    
    
//
//    *
//   *
//  *
// *
//*

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

           for (i=1; i<=count; i++) {   // count =
          for(j=1; j<=count; j++) {
               if (j==(count -i)+1){
               printf("*");
               }else printf(" ");
          }
          printf("\n");
          }




 printf("\n\n");
    
    
    
    
//
//    *****
//     ****
//      ***
//       **
//        *
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    for (i=1; i<=count; i++) {   // count =
   for(j=1; j<=count; j++) {
        if (j>=i){
        printf("*");
        }else printf(" ");
   }
   printf("\n");
   }
    
    
    
 printf("\n\n");
    
    
    
    
    
//    *       *
//    **     **
//    ***   ***
//    **** ****
//    *********

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    for (i=1; i<=count; i++) {   // count =
   for(j=1; j<=2*count-1; j++) {
        if ((j<=i)||(j>=2*count-i)){
        printf("*");
        }else printf(" ");
   }
   printf("\n");
   }
    
    

printf("\n\n");


// *********
// **** ****
// ***   ***
// **     **
// *       *
    






for (i=1; i<=count; i++) {   // count =
for(j=1; j<=2*count-1; j++) {
     if ((j<=(count-i)+1)||(j>=(count+i)-1)){
         printf("*");
     }
     else {
         printf(" ");
         
     }
     
     }
printf("\n");
}



 printf("\n\n");







//
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   int n = 2 *count;
   if (n%2 == 0)
       n+=1;

 int  inc = count;

   for (i=1; i<=n; i++) {   // count =
   for(j=1; j<=n; j++) {

    // if ( i < (n/2) +1){
      if ((j<=(count-i)+1)||((j>=count+i)-1)){
       if ((j<=i)||(j>=2*count-i)){
       printf("*");
       }else printf(" ");}
//   }else{

//      if ((j <=i-n/2)||((count/2 +i) -1)){
//           printf("*");
//      }
//      else printf (" ");

//   }
  }
  printf("\n");
   }
    
    
    
    
    
// printf("\n\n");
// printf("\n\n");
// printf("\n\n");
// printf("\n\n");
// printf("\n\n");
// printf("\n\n");
// printf("\n\n");
// printf("\n\n");




     printf("\n");
}

