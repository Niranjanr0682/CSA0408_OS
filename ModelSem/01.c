#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int calculateHeadMovement(int queue[], int head, int size) 
{int totalMovement = 0; 
for (int i = 0; i < size; i++) 
{totalMovement += abs(queue[i] - head); 
head = queue[i];} 
return totalMovement;} 
 
int main() 
{int n, initialHead,totalHeadMovement; 
printf("Enter number of disk requests: "); 
scanf("%d", &n); 
int requestQueue[n];
printf("Enter disk request queue:\n"); 
for (int i = 0; i < n; i++)
{scanf("%d", &requestQueue[i]);} 
printf("Enter header point : "); 
scanf("%d", &initialHead); 
totalHeadMovement = calculateHeadMovement(requestQueue, initialHead, n);
printf("Total head movement: %d cylinders\n", totalHeadMovement); 
return 0;} 
