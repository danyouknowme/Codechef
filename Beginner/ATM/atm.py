withdraw, balance = map(float,  input().split() )

if withdraw%5==0 and withdraw+0.50<=balance:
    balance -= (withdraw+0.50)
print(balance)
