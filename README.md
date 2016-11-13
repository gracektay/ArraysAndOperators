# ArraysAndOperators
---
## ArrayOfTreasure
### Summary: 
I created a boolean array with five elements all initialized to false. This is a "map". I then tell the user to pick a number 1-5, which 
represents each treasure chest. I store the input into the foundTreasureChest variable, initialized at the beginning of the program. I use the input and
add it to the array (which value is 0). Because the index starts at 0, I offset the equation by subtracting foundTreasureChest by 1. (Because of PEMDAS, 
(parentheses first!), the foundTreasureChest is just treated as the value inputted by the user subtracted by 1.) Instead of an array operator '[]' to 
specify an index, I use a pointer dereference operator to update the array to true for the chest just found. Then, using a while loop, I print out to the player if he or she levels up based on the Boolean of the fifth chest.

----
## UsingOperatorsCalculateHonors
### Summary: 
I have a separate function (double convertGrade), this way I only have to type it out once. This function checks if a character is equivalent
to A, B, C, D, or F and returns a value based on the letter. In the main function I ask the user for their grades. Each input is stored as a grade 
(grade1, grade 2, grade 3, grade4) and immediately passed into the convertGrade function. It then increments the sumOfGrades. After all four grades
are inputted and converted, the total sum is divided by four. The result is the studentGPA. Then there are boolean variables declared for summaCumLaude,
magnaCumLaude, cumLaude, and withoutHonors. Relational operators are used to compare the honor system with the studentGPA. True will be stored if the comparison is indeed true, otherwise it will be false. The user is then told true or false regarding each honor class.

---
