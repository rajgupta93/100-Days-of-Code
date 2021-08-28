# Data-Structures
All data structures programs

<h1 align ="center">Day 1</h1>

<p>There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.<p>
  
 <h1 align ="center">Day 2</h1>
 <p>Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions: The number of visitors on the day is strictly larger than the number of visitors on each of the previous days. Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day. Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.

Input The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.

Output For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

Limits Time limit: 20 seconds per test set. Memory limit: 1GB. 1 ≤ T ≤ 100. 0 ≤ Vi ≤ 2 × 105.

Test set 1 1 ≤ N ≤ 1000.

Test set 2 1 ≤ N ≤ 2 × 105 for at most 10 test cases. For the remaining cases, 1 ≤ N ≤ 1000.

Sample

Input 4 8 1 2 0 7 2 0 2 0 6 4 8 15 16 23 42 9 3 1 4 1 5 9 2 6 5 6 9 9 9 9 9 9

Output Case #1: 2 Case #2: 1 Case #3: 3 Case #4: 0

In Sample Case #1, the bold and underlined numbers in the following represent the record breaking days: 1 2 0 7 2 0 2 0.

In Sample Case #2, only the last day is a record breaking day.

In Sample Case #3, the first, the third, and the sixth days are record breaking days.

In Sample Case #4, there is no record breaking day.</p>

<h1 align="center">Day 3</h1>
<p>You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.<br>
  
  <strong>Constraints</strong>
  <p> 1<=N <= 10^6
-10^6<= Ai <= 10^6 </p>

<strong>Problem</strong>
<p>
Yogurt can be a nutritious part of an appetizer, main course, or dessert, but it must be consumed before it expires, and it might expire quickly! Moreover, different cups of yogurt might expire on different days.

Lucy loves yogurt, and she has just bought N cups of yogurt, but she is worried that she might not be able to consume all of them before they expire. The i-th cup of yogurt will expire Ai days from today, and a cup of yogurt cannot be consumed on the day it expires, or on any day after that.

As much as Lucy loves yogurt, she can still only consume at most K cups of yogurt each day. What is the largest number of cups of yogurt that she can consume, starting from today?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with one line containing two integers N and K, as described above. Then, there is one more line with N integers Ai, as described above.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of cups of yogurt that Lucy can consume, as described above.

Limits
1 ≤ T ≤ 100.
Time limit: 20 seconds per test set.
Memory limit: 1 GB.
1 ≤ K ≤ N.
1 ≤ Ai ≤ 109, for all i.
Small dataset (Test set 1 - Visible)
1 ≤ N ≤ 1000.
K = 1.
Large dataset (Test set 2 - Hidden)
1 ≤ N ≤ 5000.
Sample

Input
 	
Output
 
4
2 1
1 1
5 1
3 2 3 2 3
2 2
1 1
6 2
1 1 1 7 7 7

  
Case #1: 1
Case #2: 3
Case #3: 2
Case #4: 5

  
Note that the last two sample cases would not appear in the Small dataset.

In Sample Case #1, each of the two cups of yogurt will expire in one day. Today, Lucy can consume one of them, but she can only consume at most one cup each day, so she cannot consume both. Tomorrow, Lucy cannot consume the remaining cup of yogurt, because it will have expired.

In Sample Case #3, Lucy can consume up to two cups each day, so she can consume all of the yogurt.</p>
<h1 align="center">Day 4</h1>
<p>Geek and Geekina are playing chess with a slight change in the rules. The player that eliminates all the pieces of the other player wins the game. Both Geek and Geekina have only one piece left on the board, Geek has his king  on the board at position {x, y} and Geekina has her Queen  on the board at position {a, b} . Its Geekina's turn now. Find whether Geek can survive this turn or not. 
Input:
a = 1, b = 1
x = 1, y = 8
Output:
0
Explanation: 
Geekina can move her queen in the horizontal
direction and eliminate Geek's king. Therefore, 
Geek will not survive the move.


Input:
a = 1, b = 1 
x = 2, y = 3
Output:
1
Explanation: 
Geek's king cannot be eliminated in 
this turn. ie- He will survive.
Your Task:
You don't need to read input or print anything. Your task is to complete the function checkmate( ) which takes a,b,x,y  as input parameters and returns true if Geek can survive this turn or false otherwise.
Note: The generated output is 1 or 0 depicting true or false respectively. 

</p>

<h1 align="center">Day 5</h1>
<p>Print all the subarray of an array</p>
<h1 align="center">Day 6</h1>
<p>Kadan's algorithm
Find the subarray which has largest sum.
Time complexity- o(n)
Space complexity- o(1)</p>
<h1 align="center">Day 7</h1>
<p>Reverse an array</p>
