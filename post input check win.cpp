#include <stdio.h>

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

int current_Player = 1;
 
void display_board(){
	
	printf(" %c | %c | %c \n",board[0][0], board[0][1],board[0][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n",board[1][0], board[1][1],board[1][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n",board[2][0], board[2][1],board[2][2]);
	printf("---|---|---\n");
}

int is_move_valid(int row, int col){
	if (row >= 0 && row <= 2 && col >= 0 && col <= 2 && board[row][col] == ' ') {
		return 1; // valid move
	}
	return 0; // invalid move 
}

int check_game_over(){
	
	if (check_win(X)) {
		printf("player 1 (X) wins \n ");
		return 0;
	} else (check_win(O)) {
		printf("player 2 (O) wins \n");
	}
	if (is_board_full){
		printf("its a draw")
		return 1;
	}
	return 0; 	
}

int check_win(char symbol){
	return (check_rows(symbol) || check_col(symbol) || check_diagonals(symbol));
}


int main(){
	int row, col;
	int game_over = 0; // game not over initially 
	
	while (!game_over){
		display_board;
		
		printf("player %d Enter your move (row col)", current_player);
		scanf("%d %d ", row, col);
		
		if(is_move_valid){
			board[row][col] = (current_player == 1) ? 'X' : 'O';
		
		game_over = check_game_over();
		
		current_player = (current_player == 1) ? 2 : 1;
		} else {
			printf("Invalid move try again \n");
		}
	}
	
	display_Board();
 return 0;
	}



















