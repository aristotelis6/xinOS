#include "../beep_structure.c"

const int bpm=250;
const int betweenPause=0;

struct beep tetris[] = {

//part one
   { .freq = E4, .len =  2*bpm },
   { .freq = H3, .len =  bpm },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  2*bpm },
   { .freq = C4, .len =  bpm },
   { .freq = H3, .len =  bpm },
//part two
   { .freq = A3, .len =  2*bpm, .delay=betweenPause },
   { .freq = A3, .len =  bpm },
   { .freq = C4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = D4, .len =  bpm },
   { .freq = C4, .len =  bpm },
//part three
   { .freq = H3, .len =  2*bpm , .delay=betweenPause},
   { .freq = H3, .len =  bpm/2 ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
//part four
   { .freq = C4, .len =  2*bpm },
   { .freq = A3, .len =  2*bpm, .delay=betweenPause },
   { .freq = A3, .len =  4*bpm },
//part five
   { .freq = D4, .len =  2*bpm ,.delay=betweenPause},
   { .freq = D4, .len =  bpm },
   { .freq = F4, .len =  bpm },
   { .freq = A4, .len =  2*bpm },
   { .freq = G4, .len =  bpm },
   { .freq = F4, .len =  bpm },
//part six
   { .freq = E4, .len =  3*bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = D4, .len =  bpm },
   { .freq = C4, .len =  bpm },
//part seven
   { .freq = H3, .len =  2*bpm ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
//part eigth
   { .freq = C4, .len =  2*bpm },
   { .freq = A3, .len =  2*bpm, .delay=betweenPause },
   { .freq = A3, .len =  4*bpm },
//part nine 
   { .freq = E4, .len =  2*bpm },
   { .freq = H3, .len =  bpm },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  bpm },
   { .freq = E4, .len =  bpm/2 },
   { .freq = D4, .len =  bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = H3, .len =  bpm },
//part ten
   { .freq = A3, .len =  2*bpm },
   { .freq = A3, .len =  bpm },
   { .freq = C4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = D4, .len =  bpm },
   { .freq = C4, .len =  bpm },
//part eleven
   { .freq = H3, .len =  2*bpm },
   { .freq = H3, .len =  bpm },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
//part twelve
   { .freq = C4, .len =  2*bpm },
   { .freq = A3, .len =  2*bpm, .delay=betweenPause },
   { .freq = A3, .len =  4*bpm },
//part 13
   { .freq = D4, .len =  2*bpm ,.delay=betweenPause},
   { .freq = D4, .len =  bpm },
   { .freq = F4, .len =  bpm },
   { .freq = A4, .len =  2*bpm },
   { .freq = G4, .len =  bpm },
   { .freq = F4, .len =  bpm },
//part 14
   { .freq = E4, .len =  3*bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = D4, .len =  bpm },
   { .freq = C4, .len =  bpm },
//part 15
   { .freq = H3, .len =  2*bpm ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
//part 16
   { .freq = C4, .len =  2*bpm },
   { .freq = A3, .len =  2*bpm, .delay=betweenPause },
   { .freq = A3, .len =  4*bpm },
//part 17-22
   { .freq = G3, .len =  5*bpm },
   { .freq = E3, .len =  5*bpm },
   { .freq = F3, .len =  5*bpm },
   { .freq = D3, .len =  5*bpm },
   { .freq = E3, .len =  5*bpm },
   { .freq = C3, .len =  5*bpm },
   { .freq = H2, .len =  5*bpm },
   { .freq = D3, .len =  5*bpm },
   { .freq = H3, .len =  5*bpm },
   { .freq = E3, .len =  5*bpm },
   { .freq = F3, .len =  5*bpm },
   { .freq = D3, .len =  5*bpm },
//custom part
   { .freq = D3, .len =  bpm,.delay=betweenPause},
   { .freq = D3, .len =  bpm,.delay=2*bpm },


//part 23
   { .freq = D4, .len =  2*bpm ,.delay=betweenPause},
   { .freq = D4, .len =  bpm },
   { .freq = F4, .len =  bpm },
   { .freq = A4, .len =  2*bpm },
   { .freq = G4, .len =  bpm },
   { .freq = F4, .len =  bpm },
//part 24
   { .freq = E4, .len =  3*bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = D4, .len =  bpm },
   { .freq = C4, .len =  bpm },
//part 25
   { .freq = H3, .len =  2*bpm ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 ,.delay=betweenPause},
   { .freq = H3, .len =  bpm/2 },
   { .freq = C4, .len =  bpm },
   { .freq = D4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
//part 26
   { .freq = C4, .len =  2*bpm },
   { .freq = A3, .len =  2*bpm, .delay=betweenPause },
   { .freq = A3, .len =  4*bpm }














    /*
   { .freq = H4, .len =  2*bpm },
   { .freq = F4, .len =  bpm },
   { .freq = G4, .len =  bpm },
   { .freq = A4, .len =  bpm },
   { .freq = H4, .len =  bpm/2 },
   { .freq = A4, .len =  bpm/2 },
   { .freq = G4, .len =  bpm },
   { .freq = F4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = E4, .len =  bpm },
   { .freq = G4, .len =  bpm },
   { .freq = H4, .len =  2*bpm },
   { .freq = A4, .len =  bpm },
   { .freq = G4, .len =  bpm },
   { .freq = F4, .len =  3*bpm/2 },
   { .freq = G4, .len =  bpm },
   { .freq = A4, .len =  2*bpm },
   { .freq = H4, .len =  2*bpm },
   { .freq = G4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = E4, .len =  4*bpm, .delay=bpm },
   { .freq = A4, .len =  2*bpm },
   { .freq = C4, .len =  bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = D4, .len =  bpm },
   { .freq = C4, .len =  bpm },
   { .freq = H4, .len =  3*bpm/2 },
   { .freq = G4, .len =  bpm },
   { .freq = H4, .len =  2*bpm },
   { .freq = A4, .len =  bpm },
   { .freq = G4, .len =  bpm },
   { .freq = F4, .len =  2*bpm },
   { .freq = F4, .len =  bpm },
   { .freq = G4, .len =  bpm },
   { .freq = A4, .len =  2*bpm },
   { .freq = H4, .len =  2*bpm },
   { .freq = G4, .len =  2*bpm },
   { .freq = E4, .len =  2*bpm },
   { .freq = E4, .len =  4*bpm },
   { .freq = H4, .len =  4*bpm },
   { .freq = G4, .len =  4*bpm },
   { .freq = A4, .len =  4*bpm },
   { .freq = F4, .len =  4*bpm },
   { .freq = G4, .len =  4*bpm },
   { .freq = E4, .len =  4*bpm },
   { .freq = D4, .len =  4*bpm },
   { .freq = F4, .len =  4*bpm },
   { .freq = H4, .len =  4*bpm },
   { .freq = G4, .len =  4*bpm },
   { .freq = A4, .len =  4*bpm },
   { .freq = F4, .len =  4*bpm },
   { .freq = G4, .len =  2*bpm },
   { .freq = H4, .len =  2*bpm },
   { .freq = E4, .len =  4*bpm },
   { .freq = D4, .len =  4*bpm,.delay= 4*bpm }
*/












    
 /*{ .freq = E4, .len =  bpm },
 { .freq = H3, .len =  bpm },
 { .freq = C4, .len =  bpm },
 { .freq = D4, .len =  bpm },
 { .freq = E4, .len =  bpm },
 { .freq = C4, .len =  bpm },
 { .freq = H3, .len =  bpm },
 { .freq = A3, .len =  2*bpm},
 { .freq = A3, .len =  bpm },
 { .freq = C4, .len =  bpm },
 { .freq = E4, .len =  2*bpm },
 { .freq = D4, .len =  bpm },
 { .freq = C4, .len =  bpm },
 { .freq = H3, .len =  2*bpm},
 { .freq = H3, .len =  bpm},
 { .freq = C4, .len =  bpm},
 { .freq = D4, .len =  2*bpm},
 { .freq = E4, .len =  2*bpm},
 { .freq = C4, .len =  2*bpm},
 { .freq = A3, .len =  2*bpm},
 { .freq = A3, .len =  4*bpm, .delay=bpm},
 //pause
 { .freq = E4, .len =  bpm},
 { .freq = D4, .len =  2*bpm},
 { .freq = F4, .len =  bpm},
 { .freq = A4, .len =  2*bpm},
 { .freq = G4, .len =  bpm},
 { .freq = F4, .len =  bpm,},
 //pause
 { .freq = H4, .len =  bpm},
 { .freq = E3, .len =  2*bpm},
 { .freq = C4, .len =  bpm},
 { .freq = E3, .len =  2*bpm},
 { .freq = D4, .len =  bpm},
 { .freq = C4, .len =  bpm},
 { .freq = H3, .len =  2*bpm},
 { .freq = H3, .len =  bpm},
 { .freq = C4, .len =  bpm},
 { .freq = D4, .len =  2*bpm},
 { .freq = E4, .len =  2*bpm},
 { .freq = C4, .len =  2*bpm},
 { .freq = A3, .len =  2*bpm},
 { .freq = A3, .len =  4*bpm}*/
};
