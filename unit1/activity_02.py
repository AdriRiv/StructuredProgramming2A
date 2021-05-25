bank = int(input("Enter your balance "))

order = int(input("What is the cost of the product? "))


if ( order <= bank ):
    print( "Transaction Accepted" )
    balance= bank - order

else: 
    print("Transaction Rejected")
    balance= bank
    
print("Your balance is: ")
print(balance)