#include <stdio.h>

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};
 
void display_Board(){
	
	printf(" %c | %c | %c \n",board[0][0], board[0][1],board[0][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n",board[1][0], board[1][1],board[1][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n",board[2][0], board[2][1],board[2][2]);
	printf("---|---|---\n");
}

int main(){
	display_Board();
	return 0;
}
