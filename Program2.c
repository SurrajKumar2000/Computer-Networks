#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
 int main()
 {
   char ip1[25],ip2[25],ip3[25],ip4[25],ip5[25];

    char destn[25];
    FILE *fp; 
    printf("\n tracerroute");
    scanf("%s",&destn); 
    fp=fopen("path.txt","r");
    while(!feof(fp))
        {
          fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%s\n",&ip1,&ip2,&ip3,&ip4,&ip5);
            if((strcmp(destn,ip4)==0)||(strcmp(destn,ip5)==0))
              {

                printf("\n tracing route to %s\n over a maximum of 30hops",ip4);

                printf("\n]%s\n2]%s[%s]\n",ip2,ip3,ip4,ip5);

                printf("\n trace complete"); 
                exit(0); 
               }
 
         }
           return 0;

 }
