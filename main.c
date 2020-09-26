#include <stdio.h>
int main(void) {
  float score;
  printf("Enter Your Score : ");
  scanf("%f",&score);
  int grade;
  grade = (int)score;
  grade = grade / 5;
  switch(grade){
    case 20 :
      if (score > 100)break;
      printf("Your Score %.2f Grade A",score);break;
    case 19 :
      printf("Your Score %.2f Grade A",score);break;
    case 18 :
      printf("Your Score %.2f Grade A",score);break;
    case 17 :
      printf("Your Score %.2f Grade A",score);break;
    case 16 :
      printf("Your Score %.2f Grade A",score);break;
    case 15 :
      printf("Your Score %.2f Grade B+",score);break;
    case 14 :
      printf("Your Score %.2f Grade B",score);break;
    case 13 :
      printf("Your Score %.2f Grade C+",score);break;
    case 12 :
      printf("Your Score %.2f Grade C",score);break;
    case 11 :
      printf("Your Score %.2f Grade D+",score);break;
    case 10 :
      printf("Your Score %.2f Grade D",score);break;
    default :
      if (score >= 0 && score < 50){
      printf("Your Score %.2f Grade F",score);break;
      }
      else{
        break;
      }
  }
  return 0;
}


