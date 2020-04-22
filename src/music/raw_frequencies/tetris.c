#include "../beep_structure.c"

// sounds a bit weird, but still great
const int bpm=250;


struct beep tetris[] = {
 { .freq = E4, .len =  2*bpm },
 { .freq = H3, .len =  bpm },
 { .freq = C4, .len =  bpm },
 { .freq = D4, .len =  bpm },
 { .freq = E4, .len =  bpm },
 { .freq = C4, .len =  bpm },
 { .freq = H3, .len =  2*bpm },
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
 { .freq = A3, .len =  4*bpm,},
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
 { .freq = A3, .len =  4*bpm}
};
