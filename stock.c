#include <stdio.h> 

const float MAX = 1;

int main()
{
    //variables 
    char StockName[5];
    int NumShares;
    double PriceBought, CurrentPrice, BrokerFee, GLRatio, GL, TotalCost, Value; 

    //user input
    printf("Enter Stock Name (Ticker): ");
    scanf("%s", &StockName);
    printf("Enter Number of Shares: ");
    scanf("%d", &NumShares);
    printf("Enter Brokerage Fees: ");
    scanf("%lf", &BrokerFee);
    printf("Enter Price Bought of Stock: ");
    scanf("%lf", &PriceBought);
    printf("Enter Current Price of Stock: ");
    scanf("%lf", &CurrentPrice);

    //algorithm 
    TotalCost = (NumShares * PriceBought) + BrokerFee;
    Value = (NumShares * CurrentPrice);
    GLRatio = (Value / TotalCost) - MAX; 
    GL = Value - TotalCost; 

    //Outcomes 
    printf("----------------------------------------\n");
    printf("Stock: %s\n", StockName);
    printf("No. of Shares: %d\n", NumShares);
    printf("Total Cost of Stock (Including Fees): %.2lf\n", TotalCost);
    printf("Value of Stock: %.2lf\n", Value);

    //for GL Ratio
    if (GLRatio >= 1)
    {
        printf("GL Ratio: You Gained %.4lf%%\n", GLRatio);
    }
    else 
    {
        printf("GL Ratio: You Loss %.4lf%%\n", GLRatio);
    }

    //for GL
    if (GL >= 1)
    {
        printf("You Gained %.2lf\n", GL);
    }
    else 
    {
        printf("You Loss %.2lf\n", GL);
    }

return 0;
}