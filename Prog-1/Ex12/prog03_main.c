#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog03.h"

int main() {
  int i;
  Planet solsys[NPLANETS];
  
  if( input_planet( solsys ) != 0 ){
      fprintf(stderr, "Input Error!\n");
      exit(3);
  }

  for (i = 0; i < NPLANETS; i++) {
    printf("Name: %s\n", solsys[i].name);
    printf("  Radius: %.0f [km]\n", solsys[i].radius);          /* 蜊雁ｾ� */
    printf("  Density: %.2f [g/cm3]\n", solsys[i].density);     /* 蟇�ｺｦ */
    printf("  Orbital Radius: %.3e [km]\n", solsys[i].orbital_radius);   /* 霆碁％蜊雁ｾ� */
  }

  return 0;
}

#ifdef TEST0 /* 蜊倅ｽ薙ユ繧ｹ繝育畑 input_planet 豁｣蟶ｸ蜍穂ｽ懶ｼ域綾繧雁､ 0 �峨�蝣ｴ蜷� */
int input_planet(Planet *planet) {
  int i;
  for (i = 0; i < NPLANETS; i++) {
    strcpy(planet[i].name, "Sample");     /* 繝�せ繝育畑縺ｮ繧ｵ繝ｳ繝励Ν繝��繧ｿ */
    planet[i].radius = 1000;
    planet[i].density = 1.00;
    planet[i].orbital_radius = 100000000;
  }
  return 0;
}
#elif TEST1 /* 蜊倅ｽ薙ユ繧ｹ繝育畑 input_planet 逡ｰ蟶ｸ蜍穂ｽ懶ｼ域綾繧雁､ -1 �峨�蝣ｴ蜷� */
int input_planet(Planet *planet) {
  return -1;
}
#endif

