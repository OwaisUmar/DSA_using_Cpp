#include<stdio.h>
int main(void)
{
	int winner = 0, player = 0, choice;
	char board[3][3] = {
						{'1','2','3'},
						{'4','5','6'},
						{'7','8','9'}
					   };
					  
	for(int i=0; i<9 && winner==0; i++)
	{
		printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
		
		player = i % 2 + 1;
		printf("Player %d's turn\n\n", player);
		do
		{
			printf("Where do you want to put your %c :   ", player==1?'X':'O');
			scanf("%d", &choice);
	    }
		while(choice<1||choice>9 || board[(choice-1)/3][(choice-1)%3]=='X' || board[(choice-1)/3][(choice-1)%3] =='O');
		board[(choice-1)/3][(choice-1)%3] = player==1?'X':'O';
		
		if(board[0][0]==board[1][1] && board[0][0]==board[2][2])
			{
			winner = player;
			break;
			}
		else
				for(int line=0; line<3; line++)
					if((board[line][0]==board[line][1] && board[line][1]==board[line][2]) || (board[0][line]==board[1][line] && board[1][line]==board[2][line]))
						{
							winner=player;
							break;
						}
	}
	
	if (winner)
		printf("\n\nHurrah! Player %d, you are the winner!\n\n", player);
	else
		printf("\n\nWhat a boring game. It's a tie.\n\n");
		
	
	printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
	return 0;
}
