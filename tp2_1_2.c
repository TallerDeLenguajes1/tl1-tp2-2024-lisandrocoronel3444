#include <stdio.h>

int main(){
#define N 20
int i;
double vt[N];
double *pPunt = vt;

for(i = 0;i < N; i++)
{
vt[i] = 1 + rand() % 100;
printf("%f", *(pPunt));
pPunt++;
}

return 0;

}