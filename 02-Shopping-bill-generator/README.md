# 🛒 Shopping Bill Generator

A beginner-friendly **C++ console application** that simulates a simple shopping experience. 
The program displays a fixed inventory with prices, allows the customer to select items and quantities, 
and generates a final bill with applicable discounts.

## 📌 Project Overview

This project was created to practice fundamental C++ programming concepts by building a small real-world application.

The program provides a list of available products with their prices. The user selects the products they want to purchase, enters the required quantity, and can continue adding items until they are finished shopping.

At the end, the program calculates the subtotal, applies a discount based on the purchase amount, and displays a complete shopping receipt.

## Features

* Displays available products and their prices
* Allows the user to select products
* Accepts different units such as:

  * Kilograms
  * Litres
  * Pieces
* Allows multiple products to be added
* Asks whether the customer wants to continue shopping
* Calculates the cost of each selected item
* Calculates the subtotal
* Applies automatic discounts
* Generates a final shopping receipt
* Uses a simple and beginner-friendly console interface

## Current Inventory

| Item   |   Price | Unit      |
| ------ | ------: | --------- |
| Rice   | Rs. 280 | per kg    |
| Milk   | Rs. 320 | per litre |
| Bread  | Rs. 180 | per piece |
| Eggs   |  Rs. 35 | per piece |
| Apples | Rs. 450 | per kg    |

## Discount System

The program automatically applies discounts according to the subtotal:

| Purchase Amount       |    Discount |
| --------------------- | ----------: |
| Below Rs. 5,000       | No discount |
| Rs. 5,000 – Rs. 9,999 |          5% |
| Rs. 10,000 or more    |         10% |

## Concepts Practiced

This project focuses on fundamental C++ concepts:

* Variables
* Data types
* `cin` and `cout`
* Arithmetic operators
* `if / else if / else`
* `while` loop
* `char` input
* User input
* Basic calculations
* Conditional logic
* Formatted console output

##  How to Run

### Using VS Code

1. Open the project folder in VS Code.
2. Open the `.cpp` file.
3. Compile the program using a C++ compiler.
4. Run the generated executable.
5. Follow the instructions shown in the terminal.

### Example Interaction

```text
========================================
          WELCOME TO SMART MART
========================================

Available Items:
----------------------------------------
1. Rice       - Rs. 280 per kg
2. Milk       - Rs. 320 per litre
3. Bread      - Rs. 180 per piece
4. Eggs       - Rs. 35 per piece
5. Apples     - Rs. 450 per kg
----------------------------------------

Which item would you like to buy? 2

How many litres of Milk do you want? 2

Milk added to your cart.

Is there anything else you would like to add? (y/n): n
```

The program then generates the final receipt.
