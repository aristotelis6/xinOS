#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679

int abs(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}
/*
int fact(int num)
{
    int res=1;
    //-1=error
    if(num<0)return -1;
    if(num==0)return 1;
    for(int i=1;i=<num;i++)
    {
        res=res*i;
    }
    return res;
}
double pow(double base, int exp)
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
}
double sin(double x){
  double sign=1;
  if (x<0){
    sign=-1.0;
    x=-x;
  }
  if (x>360) x -= int(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=x;
  int k=1;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }

  return sign*res;
}

double cos(double x){
  if (x<0) x=-x;
  if (x>360) x -= int(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=1;
  int k=0;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }  
  return res;
}
*/