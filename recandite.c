#include <stdio.h>

void ite(void);

// recursion
void rec(int max, int array[], int count, int value){
  
  if ( max > 0){
    value += 2;
    array[count] = value;
    printf("Element %d : %d\n", count, value);
    count += 1;
    
    rec(max - 1, array, count, value); // calls itself!
    
  }
}

void recprint(int max ,int count, int array[]){
  
  if ( max > 0 ){
    printf(" %d", array[count]);
    count += 1;
    recprint(max - 1, count, array);
  }
  
}



int main(){
  int count = 0;
  int value = 0;
  int max = 0;
  
  printf("max elements: "); scanf("%d", &max);
  
  int myarray[max];
  
  rec(max, myarray, count, value);
  
  printf("\nThe elements in the array are: ");
  recprint(max,count,myarray);
  printf("\n");
  

  //ite();

  return 0;
}

// iteration
void ite (){
  
  int max = 0; int count = 0;
  printf("max elements: ");
  scanf("%d",&max);
  int myarray[max];

  for(int i = 0; i < max; i++){
    
    myarray[i] = 0;
    
  }

  for(int i = 0; i < max; i++){
    count +=2;
    myarray[i] += count;
    printf("element %d : %d\n",i,myarray[i]);
    
  }

  printf("The elements in the array are: ");
  
  for(int i = 0; i < max; i++){
    printf(" %d", myarray[i]);
  } printf("\n");

}
