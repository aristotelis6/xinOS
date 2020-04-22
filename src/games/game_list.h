#include <games/XinSnake/xa_main.c>
#include <games/XinMusic/xm_main.c>
#include <games/XinTetris/xt_main.c>

struct game {
    char *name;
    char *author;
    int (*init)();
};

struct game games[] = {
        {.name = "xinSnake", .author = "pepsipu", .init = xs_main},
        {.name = "xinMusic", .author = "pepsipu", .init = xm_main},
        {.name = "xinTetris", .author = "rsttls", .init = xt_main}
};