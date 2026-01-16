int maxProfit(int* prices, int pricesSize) {
    int min = 0;
    int minele = prices[0];
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i]<minele)
        minele = prices[i];
        else if(prices[i]-minele>min)
        min=prices[i]-minele;
    }
    return min;
}