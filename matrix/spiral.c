#include <stdio.h>

int main(void)
{
  int n = 0;
  int m = 0;
  
  scanf("%d %d", &n, &m);

  int top = 0, bottom = n - 1;
  int left = 0, right = m - 1;
  
  int x = 1;
  int arr[n][m];

  while (1)
  {
      for (int j = left; j <= right; j++)
      {
        arr[top][j] = x++;
      }

      if (x > n * m){
        break;
      }
      for (int i = top + 1; i <= bottom; i++)
      {
        arr[i][right] = x++;
      }

      if (x > n * m)
      {
        break;
      }

      for (int j = right - 1; j >= left; j--)
      {
        arr[bottom][j] = x++;
      }

      if (x > n * m)
      {
        break;
      }

      for (int i = bottom - 1; i > top; i--){
        arr[i][left] = x++;
      }

      if (x > n * m)
      {
        break;
      }

      right--;
      top++;
      left++;
      bottom--;   
  }

  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < m; j++)
          printf("%3.d", arr[i][j]);
      printf("\n");
  }
  return 0;
}