//This program finds the richest customer with the most wealthy bank account.
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxWealth = 0;
    for (int i = 0;i<accountsSize;i++){
        int wealth = 0; //Updating wealth to  zero after each loop so we get the wealth for each customer not the sum of all accounts.
        for(int j = 0;j<accountsColSize[i];j++){ //Using accountsColSize[i] because ColSize is a pointer not a direct integer.
            wealth += accounts[i][j];
            if (wealth > maxWealth){
                maxWealth = wealth;
            }
        }
    }
    return maxWealth;
}
