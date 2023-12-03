#!/usr/bin/python3
from calculator_1 import add, mul, div, sub
import sys

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)

    a =  int(sys.argv[1])
    op = sys.argv[2]
    b = int(sys.argv[3])

    match op:
        case '+':
            print("{} {} {} = {}".format(a, op, b, add(a, b)))
        case '-':
            print("{} {} {} = {}".format(a, op, b, sub(a, b)))
        case '/':
            print("{} {} {} = {}".format(a, op, b, div(a, b)))
        case '*':
            print("{} {} {} = {}".format(a, op, b, mul(a, b)))
        case _:
            print("Unknown operator. Available operators: +, -, * and /")
            exit(1)
