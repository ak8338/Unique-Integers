# Unique-Integers
Unique Integers in C++

Part One: The isInVector function checks whether a specific integer exists within a given vector or array of integers. It takes the vector/array and the integer you want to search for, and it returns a boolean value indicating whether that integer is present in the vector/array.

Part Two: The makeUnique function processes a vector/array of integers that may contain duplicates. It generates a second vector by extracting all unique integers from the original vector, effectively removing any duplicates. The result is a new vector containing only one instance of each integer from the original.

Part Three: The fillVectFromFile function populates a vector/array of integers with data sourced from a file chosen by the user. The function ensures that the file opens correctly before proceeding; otherwise, it prompts the user to choose a valid file.

Part Four: The overall solution leverages these functions to read integers from a user-specified file, remove any duplicates using makeUnique, and then save the unique integers to a new file named “uniq.ints”. The main function simply manages the flow by creating necessary variables and invoking these functions without performing any direct input or output operations itself.
