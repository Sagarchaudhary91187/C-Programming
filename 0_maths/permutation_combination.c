/*-----------------------------Permutation & Combination----------------------
                                   n       |  n
                                    (P)    |   (C)
                                       r   |      r 

✅Permutation → Arrangement (Order matters).                 
✅Combination → Selection (Order doesn’t matter).

✅n-->num of items
✅r-->num of members in every pair

eg.if n=4 ,r=2
👉 Permutation (arrangements): AB, BA, AC, CA, AD, DA, BC, CB, BD, DB, CD, DC → 12 ways
👉 Combination (selections): AB, AC, AD, BC, BD, CD → 6 ways

eg.if n=4 ,r=3
👉 Permutation (arrangements): 3! = 6 arrangements → 4×6 = 24 ways
👉 Combination (selections): ABC, ABD, ACD, BCD → 4 ways

Example:
Suppose you have letters A, B, C.
Permutation (arrangement of 2 letters) → AB, BA, AC, CA, BC, CB → 6 ways.
Combination (selection of 2 letters) → AB, AC, BC → 3 ways.

-------------------------------------Factorial of "n"-----------------------------
                               n!=n×(n−1)×(n−2)×⋯×2×1
Examples:
5!=5×4×3×2×1=120
0!=1 (by definition)

-------------------------------------Permutations:-------------------------------
Number of ways to "arrange" r objects out of n objects:

                    P(n,r) = n! / (n−r)!

👉 Example: How many ways can you arrange 3 letters out of 5?

                    P(5,3) = 5! / (5−3)! = 5×4×3×2×1 / 2! = 60

-------------------------------------Combinations:--------------------
Number of ways to "select" r objects out of n objects:

                    C(n,r) = n! / r!*(n−r)!
 
👉 Example: How many ways can you select 3 students out of 5?

                    C(5,3) =5! / 3!⋅2! = 120 / 6⋅2 = 10

*/