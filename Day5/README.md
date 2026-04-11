Problem: Missing Team Efficiency
Problem Understanding

We are given a football tournament with n teams where:

Each pair of teams plays exactly one match.
Each match produces goals for both teams.
The efficiency of a team is defined as:

    efficiency=total goals scored−total goals conceded

We are given the efficiencies of n-1 teams and need to find the efficiency of the missing team.


Key Observation

Instead of focusing on individual matches, consider the tournament as a whole.

Important Insight
Every goal scored by one team is conceded by another team.

Therefore:
Total goals scored by all teams = Total goals conceded by all teams
Total goals scored by all teams =  Total goals conceded by all teams

Implication

If we sum efficiencies of all teams:
    ∑(scored−conceded)=∑scored−∑conceded

Since both are equal:
    ∑efficiency=0

Approach
Read input values.
Compute the sum of the given n-1 efficiencies.
Output the negative of that sum.