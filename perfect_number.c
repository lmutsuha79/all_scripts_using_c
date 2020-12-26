#include <stdio.h>

int main(void) {
  int s=0;

  

  while(s == 0){
    printf("Welcom user choose from these options\n");
    printf("1-----> run 'Perfect Number Finder'\n");
    printf("2-----> options \n");
    printf("3-----> Exite from programe\n");
    int user_choise;

    scanf("%d",&user_choise);
    if (user_choise == 1){
      int num; /* var for user Entre his number */

      int y=0; /* 
      */
      int decide = 1; /*input value to deside
      to break from infinity loop (ecite from scripte)
      or note
      */

      while (decide<2){

        printf("Pelse Entre a number to check if is a Perfect number or not-->");
        scanf("%d",&num);
        int x;
        int result=0;
        for(x=1;x<num;x++){
          if (num % x == 0) {
            result = result + x;
          }
        }
        if (result == num){
          printf("yes %d is a Perfect number \n",num);
        }
        else printf("No %d is not a Perfect number\n",num);
        printf("Press 0 to retry or any number else to to exite form checking if number is Perfect or not--> ");
        scanf("%d",&decide);
      

        }
      }
    else if (user_choise ==2){}
    else if (user_choise ==3){
      s=1;
      printf("Succsseful exited form the programe");
      }

    else {
      printf("you Entre a roung value please TRy Arain");
    }
  }




  
  return 0;

}
