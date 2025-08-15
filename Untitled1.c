#include <TXLib.h>
#include <stdio.h>
#include <cmath>
int main()
{
    printf("%f", 0.1+0.2);
    float a,b,c;
    printf("Введите коэффициенты уравнения. \n");
    scanf("%f %f %f", &a,&b,&c);
    float D = b*b - 4*a*c;
    if (!a){
        if (!b) {
            if (!c)
            {
                printf("Любое число будет являться корнем.\n");
            }
            else
            {
                printf("Решений нет.\n");
            }
        }
        else
        {
            float ans = -c/b;
            (!ans) ? printf("0\n") : printf("%f\n", ans);
        }
    }
    else if (D>0)
    {
        float ans1 = (-b+sqrt(D))/(2*a);
        (!ans1) ? printf("0, ") : printf("%f, ", ans1);
        float ans2 = (-b-sqrt(D))/(2*a);
        (!ans2) ? printf("0\n") : printf("%f\n", ans2);
    }
    else if (!D)
    {
        float ans = -b/(2*a);
        (!ans) ? printf("0\n") : printf("%f\n", ans);
    }
    else
    {
        printf("Решений нет.\n");
    }
}
