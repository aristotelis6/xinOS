#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679

int abs(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

/*double pow(double base, int exp)
{
    if(base==0)
        {
            return 0;
        }
    if(base==1||exp==0)
        {
            return 1;
        }
    if(exp==1)
        {
            return (double)base;
        }
    if(exp>1)
    {
        int res=1;
        for(int i=0;i<exp;i++)
        {
            res=res*base;
        }
        return res;
    }
    if(exp<0)
    {
        double res=1;
        for(int i=0;i<exp;i++)
        {
            res=res*base;
        }
        return 1/res;
    }
}*/