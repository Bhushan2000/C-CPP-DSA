#include <stdio.h>
int main()
{   // (MSEDCL)total bill = (fixed charge + electricity charge(According to units used) +
    //              wheeling charge @ 1.17 Rs/U + fuel charge) + Electricity tarrif 16.00%
    int unit = 260;
    double first50UnitCharge,
        next100unitCharge1,
        next100unitCharge2,
        total_bill,
        surcharge,
        charge250above,
        remainUnit;
    // printf("Enter electricity unit :");
    // scanf("%d", &unit);

    switch (unit)
    {
    case 1 ... 50: // 0.50/unit
        first50UnitCharge = unit * 0.50;
        surcharge = first50UnitCharge * 0.2;
        total_bill = first50UnitCharge + surcharge;
        printf("Electricity Bill generated is %.2lf", total_bill);
        break;
    case 51 ... 150: // 0.75/unit
        first50UnitCharge = 25.00;
        remainUnit = unit - 50.00;
        next100unitCharge1 = remainUnit * 0.75;
        total_bill = first50UnitCharge + next100unitCharge1;
        surcharge = total_bill * 0.2;
        printf("Electricity Bill generated is %.2lf Rs/-", total_bill + surcharge);
        break;
    case 151 ... 250: // 1.20/unit
        first50UnitCharge = 25;
        next100unitCharge1 = 75;
        remainUnit = unit - 150;
        next100unitCharge2 = remainUnit * 1.20;
        total_bill = first50UnitCharge + next100unitCharge1 + next100unitCharge2;
        surcharge = total_bill * 0.2;
        printf("Electricity Bill generated is %.2lf Rs/-", total_bill + surcharge);
        break;
    default: // 1.50/unit
        charge250above = unit * 1.50;
        surcharge = charge250above * 0.2;
        total_bill = charge250above + surcharge;
        printf("Electricity Bill generated is %.2lf Rs/-", total_bill);
        break;
    }
    return 0;
}