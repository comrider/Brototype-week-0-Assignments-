// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//      int count =7;
//      for (int i =0 ; i<count; i++){
//           for (int j=0 ; j<i; j++){
//                if((i==0)||(i==j)||(i==count)){
//                printf("*");
//                }else {printf(" ");}
//           }printf("\n");
//      }
 
// }


#include <stdio.h>
#include <stdlib.h>
int main(){
     int count =7;
     for (int i =0 ; i<count; i++){
          for (int j=0 ; j<=i; j++){
               if((i==0)||(i==j)||(i==count-1)||(j==0)){
               printf("*");
               }else {printf(" ");}
          }printf("\n");
     }
 
}

