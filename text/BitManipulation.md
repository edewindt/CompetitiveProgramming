# Bit Manipulation

## Bitwise Operators

*When two values are compared, they are compared at the binary level and each of their bits goes through the process of evaluating to either a 0 or 1.*

* **Binary AND &:** When two bits are 1, then the result from the & operator will be 1, if two bits are anything else, than the result will be 0. 

* **Binary OR |:** When two bits are 0, then the result from the | operator will be 0, if two bits are anything else, than the result will be 1.

* **Binary XOR ^:** If both bits are the same, the result is 0, otherwise if both bits are different, the result is 1.

* **Binary Not ~:** Flips the value of all bits to be the opposite. 1 will result in 0, and 0 will result in 1.

* **Binary Left Shift <<:** Shifts the bits of the first operand LEFT by as many places as the second operand. This essntially is the same as multiplying by 2 to the power of the second operand.

* **Binary Right Shift >>:** Shifts the bits of the first operand RIGHT by as many places as the second operand. This essentially is the same as dividing by 2 to the power of the second operand.

## Techniques

* **Odd or Even:** To check if a number is odd or even you can use the & operator along with the number 1 to check wether a number is odd or even. 1 is represented as: *00000001* therefore using the (&) AND operator will turn all binary values to 0 or result in the last value being 1. Since 0 is a falsy value, checking any number with &1 will let you know if the value is odd or even.