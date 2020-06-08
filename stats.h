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
 * @date <06/07/2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void sort_array(unsigned char *test);
/* sort_array function sorts the array in descending order with input parameter as the address of the array given*/
unsigned char find_minimum(unsigned char *test);
/* find_maximum function returns maximum of the array with the same return type as the array i.e unsigned char input parameter as the address of the array given*/
unsigned char find_maximum(unsigned char *test);
/* find_maximum function returns minimum of the array with the same return type as the array i.e unsigned char input parameter as the address of the array given*/
float find_mean(unsigned char *test);
/* find_mean function returns mean of the array with the return type as float input parameter as the address of the array given*/
float find_median(unsigned char *test);
/* find_median function returns median of the array with the return type as float input parameter as the address of the array given*/
void print_array(unsigned char *test);
/* print_array prints the given array in 5X8 format*/
void print_statistics(unsigned char *test);
/* print_statistics prints the maximum,mininum,mean and median of the given array*/

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
