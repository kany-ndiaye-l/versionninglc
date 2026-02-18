#include <stdio.h>
int main() {
    int x,n,i,somme=0,cpt=0;
    float moy;
    do{
        printf("saisir n entier");
        scanf("%d",&n);
    } while(n<0);
    for (i=0;i<n;i++) {
        do{
            puts("saisir un entier negatif");
            scanf("%d",&x);
        } while(x<0);
        if(x%2==0) {
            somme=+x;
            cpt++;
        }
    }
    moy=somme/cpt;
    if(moy%2==0) {
        printf("moyenne des nombres pairs est : %f",moy);

    } else {
        printf("moyenne des nombres impairs est : %f",moy);
    }

    }

    return 0 ;
}
