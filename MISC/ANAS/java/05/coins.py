def min_coins(coins, target):
    # Initialize an array to store the minimum number of coins for each amount
    dp = [float('inf')] * (target + 1)
    dp[0] = 0  # It takes 0 coins to make change for 0

    # Iterate through each coin denomination
    for coin in coins:
        # Update the minimum number of coins for each possible amount
        for amount in range(coin, target + 1):
            dp[amount] = min(dp[amount], dp[amount - coin] + 1)

    return dp[target] if dp[target] != float('inf') else -1  # Return -1 if it's not possible to make change

# Example usage:
coins = [1, 3, 4, 5]
target = 7
result = min_coins(coins, target)
print(f"Minimum number of coins needed to make change for {target} using {coins}: {result}")
