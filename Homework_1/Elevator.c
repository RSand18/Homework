#include <stdio.h>
#include <stdlib.h>


int floorrange[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }; // The array of floors the elevator can access
int currentfloor;	//The floor the player is currently on
int playerfloor;
char flooryorn[] = "Would you like to go to a floor?%nPlease type 'y' for yes or 'n' for no.";	//Asks the player if they would like to move floors

void changeFloor()
{
	int i;
	for (int i; i < currentfloor; i++)
	{
		printf("This is Floor: %d\n", i);
	}
}

int main()
{
	printf("What floor would you like to go to? The current floor is %d, and the max floor is 15.", currentfloor);
	scanf("%d", &playerfloor);	//Player input
	playerfloor = currentfloor;
	changeFloor();
	
	
	return 0;
}
