#include <stdio.h>

int isLoShu(int square[3][3]) 
{
  // check horizontal 
  for (int i = 0; i < 3; i++)
    if (square[i][0] + square[i][1] + square[i][2] != 15) return 0;
  // check vertical 
  for (int i = 0; i < 3; i++)
    if (square[0][i] + square[1][i] + square[2][i] != 15) return 0;
  // check diagonal
  if (square[0][0] + square[1][1] + square[2][2] != 15) return 0;
  if (square[2][0] + square[1][1] + square[0][2] != 15) return 0;
  return 1;
}

int main(void) {
  int arr[3][3] = {
    {4,9,2},
    {3,5,7},
    {8,1,6}
  };
  printf("%d", isLoShu(arr));
  return 0;
}