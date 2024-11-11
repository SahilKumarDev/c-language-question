#include <stdio.h>

// 1. 5x5 Square Pattern
void squarePattern()
{
  printf("\n1. Square Pattern:\n");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// 2. Right-angled Triangle
void rightAngledTriangle()
{
  printf("\n2. Right-angled Triangle:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// 3. Inverted Right-angled Triangle
void invertedRightAngledTriangle()
{
  printf("\n3. Inverted Right-angled Triangle:\n");
  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// 4. Number Pattern
void numberPattern()
{
  printf("\n4. Number Pattern:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

// 5. Mirrored Right-angled Triangle
void mirroredRightAngledTriangle()
{
  printf("\n5. Mirrored Right-angled Triangle:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// 6. Pyramid Pattern
void pyramidPattern()
{
  printf("\n6. Pyramid Pattern:\n");
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 4 - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// 7. Diamond Pattern
void diamondPattern()
{
  printf("\n7. Diamond Pattern:\n");
  // Upper half
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= 4 - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
  // Lower half
  for (int i = 3; i >= 1; i--)
  {
    for (int j = 1; j <= 4 - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// 8. Hollow Square
void hollowSquare()
{
  printf("\n8. Hollow Square:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      if (i == 1 || i == 5 || j == 1 || j == 5)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

// 9. Hollow Right-angled Triangle
void hollowRightAngledTriangle()
{
  printf("\n9. Hollow Right-angled Triangle:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j == 1 || j == i || i == 5)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

// 10. Zigzag Pattern
void zigzagPattern()
{
  printf("\n10. Zigzag Pattern:\n");
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= 15; j++)
    {
      if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

// 11. Inverted Number Pattern
void invertedNumberPattern()
{
  printf("\n11. Inverted Number Pattern:\n");
  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

// 12. Number Pyramid
void numberPyramid()
{
  printf("\n12. Number Pyramid:\n");
  for (int i = 1; i <= 5; i++)
  {
    // Increasing sequence
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    // Decreasing sequence
    for (int j = i - 1; j >= 1; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

// 13. Alphabet Triangle
void alphabetTriangle()
{
  printf("\n13. Alphabet Triangle:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("%c", 'A' + j);
    }
    printf("\n");
  }
}

// 14. Hollow Pyramid
void hollowPyramid()
{
  printf("\n14. Hollow Pyramid:\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      if (i == 5 || k == 1 || k == 2 * i - 1)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

// 15. Reversed Right-angled Triangle
void reversedRightAngledTriangle()
{
  printf("\n15. Reversed Right-angled Triangle:\n");
  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

int main()
{
  squarePattern();
  rightAngledTriangle();
  invertedRightAngledTriangle();
  numberPattern();
  mirroredRightAngledTriangle();
  pyramidPattern();
  diamondPattern();
  hollowSquare();
  hollowRightAngledTriangle();
  zigzagPattern();
  invertedNumberPattern();
  numberPyramid();
  alphabetTriangle();
  hollowPyramid();
  reversedRightAngledTriangle();

  return 0;
}
