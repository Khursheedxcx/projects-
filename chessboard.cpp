#include <stdio.h>


void displaychessboard(char board[8][8] ) { 
	 printf("\n   a  b  c  d  e  f  g  h\n");  // header row with column labels
	
	// loop through each row of the chess board 
	for(int row = 0; row < 8; row ++ ){
		printf(" %d",  8 - row); // print row number
		
		// loop through coloumn 
	for(int col = 0; col < 8; col++ ){
			
			// print the chess pieces at current square
			printf(" %c ", board[row][col]);
			 
		}
		printf(" %d\n", 8 - row); // print row number  again and move to a new line 
	}
	printf("   a  b  c  d  e  f  g  h\n"); // footer row with col
}	





int main(){
	
	char  board[8][8] = {
		
	{'R', 'N',' B', 'Q', 'K', 'B', 'N', 'R',},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',},		
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',},		
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',},		
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',},			
	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',},
	{'r', 'n',' b', 'q', 'k', 'b', 'n', 'r',},
		
		};	
		
		displaychessboard(board);
		
	return 0;	
	}

	

