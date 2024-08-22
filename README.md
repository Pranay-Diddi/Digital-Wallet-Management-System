# Digital-Wallet-Management-System

Overview:
This program manages a set of users with digital wallets. It performs transactions between users, checks the validity of transactions, and sorts users based on their balances.

Features:
  Transaction Processing: Allows users to transfer amounts between each other, ensuring that sufficient balance is available before processing the transaction.
  Sorting: After processing transactions, the system sorts users based on their wallet balances and user IDs.

Program Workflow:
1.Input Users: Users are entered with their IDs and initial wallet balances.
2.Process Transactions: For each transaction, the system checks if the fromUser has enough balance to transfer the specified amount to the toUser. If valid, the transaction is processed and the balances are updated. If     invalid, a failure message is displayed.
3.Sort Users: After processing all transactions, users are sorted by their wallet balances in ascending order. If two users have the same balance, they are sorted by their user IDs in ascending order.
4.Output Results: The sorted list of users with their updated balances is displayed.

How to Use:

1.Compile the Program:
  g++ -o wallet_management DigitalWalletProgram.cpp
2.Run the Program:
  ./wallet_management
3.Provide Input:
  Follow the prompts to input the number of users, their IDs and balances, and the transaction queries.
  Input Format:
  First, input the number of users n.
  For each user, input their ID and initial balance.
  Next, input the number of transaction queries.
  For each transaction, input fromUser, toUser, and transactionAmount.


Example:

Input:

![Screenshot 2024-08-22 182034](https://github.com/user-attachments/assets/03e6e678-381d-4579-8050-538429ea775a)

Output:

![Screenshot 2024-08-22 182321](https://github.com/user-attachments/assets/0955e9c2-0d86-4c8a-8776-8b4cfb25b6c0)

Explanation:

Input:
Number of users: 4

There are 4 users with their IDs and initial balances:
User 1 has 9000
User 2 has 3000
User 3 has 7500
User 4 has 2000
Transaction Queries: 5

There are 5 transactions to process.

Processing Transactions:
Transaction 1: 1 2 1000

User 1 transfers 1000 to User 2.
User 1's balance decreases to 8000 (9000 - 1000).
User 2's balance increases to 4000 (3000 + 1000).
Output: "Success"


Transaction 2: 3 4 3000

User 3 transfers 3000 to User 4.
User 3's balance decreases to 4500 (7500 - 3000).
User 4's balance increases to 5000 (2000 + 3000).
Output: "Success"

Transaction 3: 2 3 500

User 2 transfers 500 to User 3.
User 2's balance decreases to 3500 (4000 - 500).
User 3's balance increases to 5000 (4500 + 500).
Output: "Success"

Transaction 4: 4 1 7500

User 4 attempts to transfer 7500 to User 1.
User 4's balance is only 5000, which is less than 7500.
Output: "Failure"

Transaction 5: 1 4 1500

User 1 transfers 1500 to User 4.
User 1's balance decreases to 6500 (8000 - 1500).
User 4's balance increases to 6500 (5000 + 1500).
Output: "Success"

Sorting Users:
After processing all transactions, the users are sorted by their balances in ascending order. If two users have the same balance, they are sorted by their user IDs in ascending order.

The balances after all transactions:

User 1: 6500
User 2: 3500
User 3: 5000
User 4: 6500

Sorting the users by balance:

User 2 (3500)
User 3 (5000)
User 1 (6500) and User 4 (6500) are sorted by ID.

Final Output:
The final sorted list of users and their balances:
2 3500
3 5000
1 6500
4 6500
