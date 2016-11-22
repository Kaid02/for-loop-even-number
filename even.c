/*
Student name : Kabir Shrestha
Subjeect : Programming Fundamental
Lab No. : 16
Program : Write a program to generate first n even terms and find their sum also.
Date : 2016-11-22
*/
#include<stdio.h>
#include<conio.h>
	int main(){
		int a,i,sum=0;
		
		printf("\nEnter a number : ");
		scanf("%d",&a);
		
		for(i=0;i<=a;i++){
			if (i%2==0){
				sum=sum+i;	
			}
				
		
				
			//printf("\n%d",sum);
				
		}
		printf("\nThe sum of the even number is : %d",sum);
		
		getch();
	}