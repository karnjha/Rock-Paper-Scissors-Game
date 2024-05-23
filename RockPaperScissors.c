//Rock Paper Scissors Game

#include<stdio.h>
#include<Stdlib.h>
#include<time.h>

void gameRule(int,int);

int main()
{
	while(1){
	//person -1
	int person1;
	printf("Enter 1.Rock 2.paper 3.scissors 4.exit");
	scanf("%d",&person1);
	
	//person -2 random value generate
	srand(time(NULL));
	int person2=rand()%3 +1;
	 
	printf("person 2:%d",person2);
	
	//function call
	printf("\n");
	gameRule(person1,person2);
	return 0;

}
}

void gameRule(int person1 ,int person2)
{
	if(person1==1 && person2==1){
		printf("Draw");
	}	
	else if(person1==1 && person2==2){
		printf("person2 - win");
	}
	else if(person1==3 && person2==2){
		printf("person2 - win");
	}
	else if(person1==1 && person2==3){
		printf("person2 - win");
	}
	else if(person1==2 && person2==2){
		printf("Draw");
	}
	else if(person1==2 && person2==1){
		printf("person1 - win");
	}
	else if(person1==2 && person2==3){
		printf("person1 - win");
	}
	else if(person1==3 && person2==1){
		printf("person1 - win");
	}
	else if(person1==3 && person2==3){
		printf("Draw");
	}
	else{
		printf("Invalid number is input !");
	}
}
