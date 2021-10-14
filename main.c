#include <stdio.h>

int add(int first, int second){
 return first+second;
}
int sub(int first, int second){
return first-second;
}
int mul(int first, int second){
return first*second;
}
int div(int first, int second){
return first/second;
}

int main() {

  char op;
  int first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%d %d", &first, &second);

  switch (op) {
    case '+':
      printf("%d",add(first,second));
      break;
    case '-':
      printf("%d",sub(first,second));
      break;
    case '*':
      printf("%d",mul(first,second));
      break;
    case '/':
      printf("%d",div(first,second));
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
};