#include <stdio.h>
#include <assert.h>
int binarySearch(int ar [], int val);
int binarySearch(int * ar, int val, int lb, int ub);


)


int main(){
  return 0;
}//main



int binarySearch(int ar [], int val){
 int length = (sizeof (ar))/ sizeof(int);
int results = binarySearch(ar,val,0,length);
return results;
}//binarySearch(int [], int)

 int binarySearch(int * ar, int val, int lb, int ub){
  if(lb>=ub)
    return -1;
  int mid = (ub-lb -1)/2;
  if(ar[mid] == val) 
    return mid;
  if(ar[mid] < val)
    return binarySearch(ar,val,mid,ub);
  else 
    return binarySearch(ar,val,0,mid +1);
}//binarySearch(int [], int,int ,ub
