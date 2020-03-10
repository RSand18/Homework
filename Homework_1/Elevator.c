#include <stdio.h>
#include <stdlib.h>


int floorrange[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }; // The array of floors the elevator can access
int currentfloor = 1;
int playerfloor; // The floor the player wants to go to
int flooradd = 1;
char flooryorn[];


int RunElevator() 
{
    printf("What floor would you like to go to? The current floor is %d, and the max floor is 15.", currentfloor);
    scanf("%d", &playerfloor);	//Player input
    playerfloor = currentfloor;
    ChangeFloor();
}

void ChangeFloor()
{
    int i;
    for (int i; i < currentfloor; i++)
    {
        printf("Enter the number of the floor you'd like to go to: %d\n", i);
        scanf("%d", &playerfloor);
        AskFloorChange();
    }
}

void AskFloorChange()
{
    printf("Would you like to go to a floor?%nPlease type 'y' for yes or 'n' for no.");
    gets(flooryorn);
    if (strcmp(flooryorn, yes) == 0)
    {
        FloorChange();
    }
    else if (strcmp(flooryorn, no) == 0)
    {
        exit(0);
    }

}

int main()
{
    RunElevator();
    return 0;
}

