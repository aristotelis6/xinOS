#include <kernel/vesa/graphics.c>
#define XT_BACKGROUND_COLOR_888 0x202020

#define XT_RED_COLOR_888 0xff0000
#define XT_BLUE_COLOR_888 0x0000ff
#define XT_GREEN_COLOR_888 0x00ff00
#define XT_PURPLE_COLOR_888 0xff00ff
#define XT_YELLOW_COLOR_888 0xffff00
#define XT_ORANGE_COLOR_888 0xff8f00
#define XT_CYAN_COLOR_888 0x00ffff
//functions declarations
int rgb565(int rgb888);
void xt_key_down(char);
//variables declarations
int gameActive=1;
//main function

int xt_main()
{
    draw_background(rgb565(XT_BACKGROUND_COLOR_888));
    draw_square_coords(100,100,200,200,rgb565(XT_ORANGE_COLOR_888));
    key_down_handler=xt_key_down;
    play_song("tetris");
    play_song("tetris");
}

//function extensions
int rgb565(int rgb888)
{
    return (((rgb888&0xf80000)>>8) + ((rgb888&0xfc00)>>5) + ((rgb888&0xf8)>>3));
}
void xt_key_down(char key)
{
    switch (key)
    {
        case 'q':gameActive=0;
        break;
    }
}