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

float round_lab(float num) {
    int d = (num + 0.005) * 100;
    return d / 100.0;
}

float toMoney(float num){
    return num / 100;
}

int toFloatInt(float num){
    return num * 100;
}


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
        //scanf("%lf", &s);
        s = 17.96;
        printf("Enter the price for a MEDIUM shirt: $");
        //scanf("%lf", &m);
        m = 26.96;
        printf("Enter the price for a LARGE shirt: $");
        //scanf("%lf", &l);
        l = 35.97;

        printf("Shirt Store Price List\n");
        printf("======================\n");
        printf("SMALL  : $%.2lf\n", s);
        printf("MEDIUM : $%.2lf\n", m);
        printf("LARGE  : $%.2lf\n\n", l);

        printf("Patty's shirt size is '%c'\n", patSize);
        printf("Number of shirts Patty is buying: ");
        //scanf("%d", &patShirts);
        patShirts = 6;
        printf("\n");

        printf("Tommy's shirt size is '%c'\n", tomSize);
        printf("Number of shirts Tommy is buying: ");
        //scanf("%d", &tomShirts);
        tomShirts = 3;
        printf("\n");

        printf("Sally's shirt size is '%c'\n", salSize);
        printf("Number of shirts Sally is buying: ");
        //scanf("%d", &salShirts);
        salShirts = 4;
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
        int toonies = round_lab(subTotal / 2);
        int sub = round_lab(subTotal) * 100;
        int remainder = sub % 200;
        
        printf("Sales EXCLUDING tax\n");
        printf("Coin     Qty   Balance\n");
        printf("-------- --- ---------\n");
        printf("%22.4lf\n", subTotal);
        printf("Toonie   %d    %.4f\n",toonies, toMoney(remainder));

       //Loonies
        int loonies = toMoney(remainder);
        remainder = remainder - toFloatInt(loonies);
    
        printf("Loonies %d %.4f\n", loonies, toMoney(remainder));

        //quarters
        int quarters = remainder / 25;
        remainder = remainder - (quarters * 25);

        printf("Quaerters   %d    %.4f\n", quarters, toMoney(remainder));

        //Dimes
        int dimes = remainder / 10;
        remainder = remainder - (dimes * 10);
        printf("Dimes %d     %.4f\n", dimes, toMoney(remainder));

        //Nickels
        int nickels = remainder / 5;
        remainder = remainder - (nickels * 5);
        printf("Nickels %d    %.4f\n", nickels, toMoney(remainder));

        //Pennies
        int pennies = remainder;
        remainder = 0;

        printf("Pennies %d   %9.4f\n", pennies, toMoney(remainder));
        
        return 0;
}