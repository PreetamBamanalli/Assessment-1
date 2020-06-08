/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Preetam Bamanalli>
 * @date <A06/07/2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test);//prints the array 5x8 format
  sort_array(test);//Sorts the array and prints in 5x8 format
  print_statistics(test);
}

/* Add other Implementation File Code Here */

void sort_array(unsigned char *test){

  int i,j;
  unsigned char min=test[0];
  printf("Array After Sorting\n");
  for(i=0;i<SIZE;i++){
  	for(j=0;j<SIZE;j++){
  		if(test[i]>test[j]){
  			unsigned char temp = test[i];
  			test[i]=test[j];
  			test[j]=temp;
		  }
	  }
  }
  
  for(i=0;i<SIZE;i++){
  	if(i%8==0){
  		printf("\n");
	  }
  	printf("%u\t",test[i]);
  }

}

unsigned char find_minimum(unsigned char *test){
  int i,j;
  unsigned char min=test[0];
  for(i=0;i<SIZE;i++){
  	if(min>test[i]){
  		min = test[i];
	  }
  }
  return min;
}


unsigned char find_maximum(unsigned char *test){
  int i,j;
  unsigned char max=test[0];
  for(i=0;i<SIZE;i++){
  	if(max<test[i]){
  		max = test[i];
	  }
  }
  return max;
}

float find_mean(unsigned char *test){
  int i,j,sum=0; 
  float mean;
  for(i=0;i<SIZE;i++){
  	sum += test[i];
	  }

  mean = (float)sum/SIZE;
  return mean;
}

float find_median(unsigned char *test){
  int i,j;
  float median;
  for(i=0;i<SIZE;i++){
  	for(j=0;j<SIZE;j++){
  		if(test[i]<test[j]){
  			unsigned char temp = test[i];
  			test[i]=test[j];
  			test[j]=temp;
		  }
	  }
  }
  
  if(SIZE%2 == 0){
  	int n = SIZE/2;
  	median  = (float)(test[n-1]+test[n])/2;
  }
  else{
  	int n = SIZE/2;
  	median = test[n];
  }
  return median;
}

void print_array(unsigned char *test){
  printf("Array Before sorting\n");
  for(int i=0;i<SIZE;i++){
  	if(i%8==0){
  		printf("\n");
	  }
  	printf("%u\t",test[i]);
  }
  printf("\n");
}


void print_statistics(unsigned char *test){
  printf("\n");
  printf("The Minimum Value of the array is %u\n",find_minimum(test));
  printf("The Maximum Value of the array is %u\n",find_maximum(test));
  printf("The Mean Value of the array is %f\n",find_mean(test));
  printf("The Median Value of the array is %f\n",find_median(test));
  printf("\n");
}
