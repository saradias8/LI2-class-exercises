#include <string.h>

char *main(int dia, int mes) {
  char static buffer[25];
  switch (mes) {
    case 1:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 2:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 3:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 4:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 5:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 6:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 7:
      strcpy(buffer, dia < 23 ? "Caranguejo" : "Leao");
      break;
    case 8:
      strcpy(buffer, dia < 23 ? "Leao" : "Virgem");
      break;
    case 9:
      strcpy(buffer, dia < 23 ? "Virgem" : "Libra");
      break;
    case 10:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 11:
      strcpy(buffer, dia < 20 ? "Capricornio" : "Aquario");
      break;
    case 12:
      strcpy(buffer, dia < 22 ? "Sagitario" : "Capricornio");
      break;
    default:
      strcpy(buffer, "desconhecido");
      break;
    }
    return buffer;
}
