#include<stdio.h>
int main()
{
int n,m,a,exit,exi;
printf("WELCOME TO THE MODERN PERIODIC TABLE\n\n");
printf("ENTER 1 TO KNOWN ABOUT ELEMENT\n");
printf("ENTER 0 TO EXIT\n");
printf("ENTER \n");
scanf("%d",&n);
if(n==1)
{

    printf("ENTER THE ATOMIC NUMBER OF ELEMENT\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Name: Hydrogen\nAtomic Number: 1\nElectronic Configuration:\nShorthand (Noble Gas Configuration): 1s1\nFull Configuration: 1s1\nDiscovery: Hydrogen was discovered by the British scientist Henry Cavendish in 1766.\nSpecific Features:\nHydrogen is the lightest and most abundant element in the universe.It is a colorless, odorless, and tasteless gas.Hydrogen has three isotopes: protium (most common), deuterium, and tritium.It plays a crucial role in fuel cells for clean energy production.\nCharge: In its natural state, hydrogen has no net charge (it is neutral).\n");
    }
}
else if(n==0)
{
    printf("ARE SURE TO EXIT THE APP\n");
    printf("ENTER 7 FOR START 8 FOR STOP\n");
    printf("ENTER\n");
    scanf("%d",&exit);
    if(exit==7)
    {
        printf("ENTER THE ATOMIC NUMBER OF ELEMENT\n");
        scanf("%d",&m);
        if(m==1)
        {
            printf("Name: Hydrogen\nAtomic Number: 1\nElectronic Configuration:\nShorthand (Noble Gas Configuration): 1s1\nFull Configuration: 1s1\nDiscovery: Hydrogen was discovered by the British scientist Henry Cavendish in 1766.\nSpecific Features:\nHydrogen is the lightest and most abundant element in the universe.It is a colorless, odorless, and tasteless gas.Hydrogen has three isotopes: protium (most common), deuterium, and tritium.It plays a crucial role in fuel cells for clean energy production.\nCharge: In its natural state, hydrogen has no net charge (it is neutral).\n");

        }
    }
    else if(exit==8)
    {
        printf("YOUR ARE EXIT THE APP\n");

    }
    else
    {
        printf("INVALID CHOICE\n");

    }
}
else
{
    printf("INVALID CHOICE\n");

}
}
