  #include <stdio.h>
  #include <stdlib.h>

  int main(void)
  {
     int *numbers1 = NULL;
     int *numbers2;

     numbers1 = malloc(sizeof(int));
    numbers2 = malloc(sizeof(int) * 12);

    *numbers1 = 0;
    numbers2 = numbers1;
    numbers1 = malloc(sizeof(int) * 40);

    return 0;
 }