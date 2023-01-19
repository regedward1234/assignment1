/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : Reginald Edwrad
Student ID#: 149047227
Email      : redward7@myseneca.ca
Section    : G

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double s, m, l;
    int patShirts, tomShirts, salShirts, taxessP, taxessT, taxessS, totalsP, totalsT, totalsS, taxesss, totalss;
    double subTotalP, subTotalT, subTotalS, totalP, totalT,totalS, taxesP, taxesT, taxesS, subTotal, total, taxes;

        printf("Set Shirt Prices\n");
        printf("================\n");

        printf("Enter the price for a SMALL shirt: $");
        scanf("%lf", &s);

        printf("Enter the price for a MEDIUM shirt: $");
        scanf("%lf", &m);

        printf("Enter the price for a LARGE shirt: $");
        scanf("%lf", &l);

        printf("Shirt Store Price List\n");
        printf("======================\n");
        printf("SMALL  : $%.2lf\n", s);
        printf("MEDIUM : $%.2lf\n", m);
        printf("LARGE  : $%.2lf\n\n", l);

        printf("Patty's shirt size is '%c'\n", patSize);
        printf("Number of shirts Patty is buying: ");
        scanf("%d", &patShirts);
        printf("\n");

        printf("Tommy's shirt size is '%c'\n", tomSize);
        printf("Number of shirts Tommy is buying: ");
        scanf("%d", &tomShirts);
        printf("\n");

        printf("Sally's shirt size is '%c'\n", salSize);
        printf("Number of shirts Sally is buying: ");
        scanf("%d", &salShirts);
        printf("\n");

        // Calculations for PAT
        subTotalP = (s * patShirts);
        taxesP = (subTotalP * TAX);
        taxessP = ((taxesP + 0.005) * 100);
        totalP = (taxesP + subTotalP);
        totalsP = ((totalP + 0.005) * 100);

        // Calculations for Tommy
        subTotalT = (l * tomShirts);
        taxesT = (subTotalT * TAX);
        taxessT = ((taxesT + 0.005) * 100);
        totalT = (taxesT + subTotalT);
        totalsT = ((totalT + 0.005) * 100);

        // Calculations for Sally
        subTotalS = (m * salShirts);
        taxesS = (subTotalS * TAX);
        taxessS = ((taxesS + 0.005) * 100);
        totalS = (taxesS + subTotalS);
        totalsS = ((totalS + 0.005) * 100);

        subTotal = (subTotalP + subTotalS + subTotalT);
        taxes = (taxesP + taxesS + taxesT);
        taxesss = ((taxes + 0.005) * 100);
        total = (totalP + totalS + totalT);
        totalss = ((total + 0.005) * 100);
        printf("Customer Size Price Qty Sub-Total       TAX     Total\n");
        printf("-------- ---- ----- --- --------- --------- ---------\n");

        printf("Patty   %-4c %5.2lf %3d  %9.4lf  %9.4lf %9.4lf\n", patSize, s, patShirts, subTotalP, taxessP/100.0, totalsP/100.0);
        printf("Sally   %-4c %5.2lf %3d  %9.4lf  %9.4lf %9.4lf\n", salSize, m, salShirts, subTotalS, taxessS/100.0, totalsS/100.0);
        printf("Tommy   %-4c %5.2lf %3d  %9.4lf  %9.4lf %9.4lf\n", tomSize, l, tomShirts, subTotalT, taxessT/100.0, totalsT/100.0);

        printf("                        %9.4lf  %9.4lf %9.4lf\n\n", subTotal, taxesss/100.0, totalss/100.0);
       
        printf("Daily retail sales represented by coins\n");
        printf("=======================================\n\n");

        //determine the toonies
        int sub = subTotal * 100;
        int toonies = sub / 200;
        float remainder1 = sub % 200;
        int remainders1 = ((remainder1 + 0.005) * 100);
        
        printf("Sales EXCLUDING tax\n");
        printf("Coin     Qty   Balance\n");
        printf("-------- --- ---------\n");
        printf("%22.4lf\n", subTotal);
        printf("Toonie   %d    %.4f\n",toonies,remainders1/100.0);

       
      /*  int loonies = remainders1 / 10000.0 / 1;
        int remainder2 = (int)remainder1 % 1;


        printf("Loonies %d %.4d\n", loonies, remainder1/100);
        */







     


        return 0;
}