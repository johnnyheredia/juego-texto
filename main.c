#include <stdio.h>

int main(void) {
  int option;
  printf("Te encuentras en un sueno y tiens 3 caminos. \n");

  printf("Escribe 1 si quieres ir por el camino de los dulces\nEscribe 2 si quieres ir por el caminio de madera\nEscribe 3 si quieres ir por el camino de los perros\n");
  scanf("%i", &option);

  switch(option)
  {
    case 1:
    printf("Sigues dormido");
    break;

    case 2:
    printf("Sigues dormido");
    break;

    case 3:
    printf("Los perros te llevan a una puerta y despiertas");
    break;

    default:
    printf("Sigues durmiendo");
    break;
  }
  return 0;
}