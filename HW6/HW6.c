/*2020BY MARTIN QUIZWK11*/
#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];  /* the tic tac toe matrix */

char check(void);
void init_matrix(void);
void get_p1_move(void);
void get_p2_move(void);
void disp_matrix(void);

int main()
{
  char done;

  printf("This is the game of Tic Tac Toe.\n");

  done =  ' ';
  init_matrix();

  do {
    disp_matrix();
    get_p1_move();
    done = check(); /* see if winner */
    if(done!= ' ') break;
    get_p2_move();
    done = check(); /* see if winner */
  } while(done== ' ');

    if(done=='X') {disp_matrix();printf("P1 won!\n");}
    else {disp_matrix(); printf("P2 won!\n");}

  return 0;
}

/* Initialize the matrix. */
void init_matrix()
{
  int i, j;
  for(i=0; i<3; i++)
    for(j=0; j<3; j++) matrix[i][j] =  ' ';
}

/* Get a player's move. */
void get_p1_move()
{
  int x, y;

  printf("Enter X,Y coordinates for your move(X): ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    printf("Invalid move, try again.\n");
    get_p1_move();
  }
  else matrix[x][y] = 'X';
}

/* Get another player's move*/
void get_p2_move()
{
  int x, y;

  printf("Enter X,Y coordinates for your move(O): ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    printf("Invalid move, try again.\n");
    get_p2_move();
  }
  else matrix[x][y] = 'O';
}
/* Display the matrix on the screen. */
void disp_matrix()
{
  int t;

  for(t=0; t<3; t++) {
    printf(" %c %c %c ",matrix[t][0],
            matrix[t][1], matrix [t][2]);
    if(t!=2) printf("\n \n");
  }
  printf("\n");
}
/*Win check*/
char check()
{
  int i;

  for(i=0; i<3; i++)  /* check rows */
    if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
        return matrix[i][0];
  for(i=0; i<3; i++)  /* check columns */
    if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
        return matrix[0][i];
  /* check diagonals */
  if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])
       return matrix[0][0];
  if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}

