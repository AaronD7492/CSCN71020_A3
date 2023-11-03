#include <stdio.h>
#include <stdlib.h>
#include "main.h"
//REQ_001: the system shall be capable of determing if a players input value is valid and returning a winner
int main() {

	printf("This is where the game would go\n");

	return 1;
}

char* OutcomeDecider(char* player1Input, char* player2Input) {
	char* scisscors;
	scisscors = malloc(sizeof(char) * 15);
	strcpy(scisscors, "Scissors");
	
	char* paper;
	paper = malloc(sizeof(char) * 15);
	strcpy(paper, "Paper");

	char* rock;
	rock = malloc(sizeof(char) * 15);
	strcpy(rock, "Rock");

	char* winner;
	winner = malloc(sizeof(char) * 15);
	strcpy(winner, "");

	if (strcmp(player1Input, rock) == 0 && strcmp(player2Input, scisscors) == 0) {
		strcpy(winner, "Player1");
		return winner;
	}
	if (strcmp(player1Input, paper) == 0 && strcmp(player2Input, rock) == 0) {
		strcpy(winner, "Player1");
		return winner;
	}
	if (strcmp(player1Input, scisscors) == 0 && strcmp(player2Input, paper) == 0) {
		strcpy(winner, "Player1");
		return winner;
	}
	if (strcmp(player2Input, rock) == 0 && strcmp(player1Input, scisscors) == 0) {
		strcpy(winner, "Player2");
		return winner;
	}
	if (strcmp(player2Input, paper) == 0 && strcmp(player1Input, rock) == 0) {
		strcpy(winner, "Player2");
		return winner;
	}
	if (strcmp(player2Input, scisscors) == 0 && strcmp(player1Input, paper) == 0) {
		strcpy(winner, "Player2");
		return winner;
	}
	if (strcmp(player1Input, rock) == 0 && strcmp(player2Input, rock) == 0) {
		strcpy(winner, "Draw");
		return winner;
	}
	if (strcmp(player1Input, paper) == 0 && strcmp(player2Input, paper) == 0) {
		strcpy(winner, "Draw");
		return winner;
	}
	if (strcmp(player1Input, scisscors) == 0 && strcmp(player2Input, scisscors) == 0) {
		strcpy(winner, "Draw");
		return winner;
	}
	else {
		strcpy(winner, "Invalid");
		return winner;
	}
}