#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j, vc, vb, dc, db, k=0, m, t,cont;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        j=0; vc=0; vb=0; dc=0; db=0; k=0; m=0; t=0, cont=0;
        scanf("%d %d %d %d", &vc, &vb, &dc, &db);
        //k=(sqrt(((dc*db-50*vb)/db)*((dc*db-50*vb)/db)+200*((db*vb-vb*dc)/db))-(50*vc+db*dc)/db)/100 +1;
        //m=(vc/db) - k;
        if(vc%db==0)m=vc/db;
        else m=vc/db +1;
        for(j=0;j<m;j++){
            if(dc*(m-(j))>=vb){k=1;j=m;}
            dc=dc+50;
            
        }
        if(k==0)
        printf("Bezaliel\n");    
        else  printf("Clodes\n");
    }
	return 0;
}