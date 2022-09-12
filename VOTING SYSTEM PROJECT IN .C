#include <stdio.h>

int Ncp=0, congress=0, cp=0, xyz=0;
void electionResult()
{
    int wonByVote;
    if (Ncp > congress && Ncp > cp && Ncp > xyz)
    {
        printf("\n***Ncp won the election***\n\n");
        printf("Total vote of Ncp : %d\n",Ncp);
        wonByVote=Ncp-congress;
        printf("Ncp won by %d votes to Congress\n",wonByVote);
        wonByVote=Ncp-cp;
        printf("Ncp won by %d votes to cp\n",wonByVote);
        wonByVote=Ncp-xyz;
        printf("Ncp won by %d votes to xyz\n",wonByVote);
    }
     else if (congress > Ncp && congress > xyz)
    {
        printf("\n***Congress won the election***\n\n");
        printf("Total vote of Congress : %d\n",congress);
        wonByVote=congress-Ncp;
        printf("Congress won by %d votes to ncp\n",wonByVote);
        wonByVote=congress-cp;
        printf("Congress won by %d votes to cp\n",wonByVote);
        wonByVote=congress-xyz;
        printf("Congress won by %d votes to xyz\n",wonByVote);
    }
    else if (cp > xyz)
    {
        printf("\n***AAP won the election***\n\n");
        printf("Total vote of AAP : %d\n",cp);
        wonByVote=cp-congress;
        printf("AAP won by %d votes to Congress\n",wonByVote);
        wonByVote=cp-Ncp;
        printf("AAP won by %d votes to Ncp\n",wonByVote);
        wonByVote=cp-xyz;
        printf("AAP won by %d votes to xyz\n",wonByVote);
    }
    else if(Ncp == congress && Ncp == cp && Ncp == xyz)
    {
        printf("\nNo one won the election\n\n");
        printf("            BJP---Congress---AAP---xyz\n");
        printf("Total Vote   %d       %d        %d     %d\n",Ncp,congress,cp,xyz);
    }
    else
    {
        printf("\n***BSP won the election***\n\n");
        printf("Total vote of BSP : %d\n",xyz);
        wonByVote=xyz-congress;
        printf("BSP won by %d votes to Congress\n",wonByVote);
        wonByVote=xyz-cp;
        printf("xyz won by %d votes to cm\n",wonByVote);
        wonByVote=xyz-Ncp;
        printf("BSP won by %d votes to ncp\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        Ncp+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        cp+=1;
        break;
    case 4:
        xyz+=1;
        break;
    }
    }
void main()
{
    int choose;
    
    
        printf("\n*********Welcome to the simple voting system project*********\n\n");
        printf("                         Nepal election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.Ncp            |          2.Congress         |\n");
        printf("*************************************************************\n");
        printf("|           3.cp             |          4.xyz              |\n");
        printf("*************************************************************\n\n");
    do
    {    
        printf("Press 1 to vote Ncp\n");
        printf("Press 2 to vote Congress\n");
        printf("Press 3 to vote cp\n");
        printf("Press 4 to vote xyz\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
}