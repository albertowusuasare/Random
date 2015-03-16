#include <stdio.h>

int gcd( int a , int b){
  if(a == 0)
   return  b;
  if( b==0)
    return a;
  return gcd( b, a % b);

}//gcd(int, int)
int main(){

  int a = 20;
  int b = 100;
  int result = gcd(a,b);
  printf("%d\n",result);
  printf("%d\n",sizeof(int));
  return 0;
}
