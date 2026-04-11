Problem 1: Target Rings

Idea

Grid is 10 × 10
Cells form 5 concentric rings
Outer → 1, inner → 5

What I need to do

For every X → find its ring value
Add all values

Key Observation

Ring depends on distance from nearest boundary

Formula (Important)

ring = min( min(i, j), min(n - i + 1, n - j + 1) );

Simple Thinking

Touching edge → 1
1 step inside → 2
More inside → 3, 4, 5

Mistake I made

Initially thought row-based
Actual logic is distance from boundary

Problem 2: Ambitious Kid

Idea

Can increase or decrease any element by 1
Goal is to make product = 0

Key Observation

Product becomes 0 if at least one element is 0

What I need to do

Convert only one element to 0
Choose the element with minimum cost

Cost Formula

cost = abs(A[i])

Final Answer

answer = min(abs(A[i]))

Simple Thinking

Closest number to 0 is best
No need to modify all elements

Mistake to avoid

Do not overthink the product
Just ensure one element becomes 0