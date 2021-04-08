

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "\nError with input args...\n" << std::endl;
        return 1;
    }

// For debugging purposes only
    for (int i = 0; i < argc; i++)
    {
        std::cout << i << ":" << argv[i] << std::endl;
    }
    std::ifstream inFile;
    inFile.open(argv[1]);
    if (!inFile)
    {
        std::cout << "Error With File Name" << std::endl;
        return 1;
    }

    // Main program banner / title output on initial launch
    std::cout << "\n**********************************************************";
    std::cout << "\n************Welcome to my Letter Count Program************";
    std::cout << "\n**********************************************************";
    std::cout << "\nAnalyzing File: '" << argv[1] << "'";

    //Declaring each character counter and setting them at the start to be 0.  
    int cntA = 0, cntE = 0, cntI = 0, cntO = 0, cntU = 0, cntR = 0, cntT = 0, cntS = 0, total;

    // Declaring 'letter' to define each vowel. Since we need to count only 1 character at a time, we will declare letter as char to provide proper, indivisual calculations
    char letter;
    //Read First Charcater
    inFile.get(letter);

    // Looping through the file, Constitution_of_the_United_States.txt, until each vowel is counted.
    while (inFile)
    {

    // Looping through 'A' and 'a'
        if (letter == 'A' || letter == 'a')
        {
            cntA++;
        }

    // Looping through 'E' and 'e'
        if (letter == 'E' || letter == 'e')
        {
            cntE++;
        }

    // Looping through 'I' and 'i'
        if (letter == 'I' || letter == 'i')
        {
            cntI++;
        }

    // Looping through 'O' and 'o'
        if (letter == 'O' || letter == 'o')
        {
            cntO++;
        }

    // Looping through 'U' and 'u'
        if (letter == 'U' || letter == 'u')
        {
            cntU++;
        }

    // Looping through 'R' and 'r'
        if (letter == 'R' || letter == 'r')
        {
            cntR++;
        }
        
    // Looping through 'T' and 't'
        if (letter == 'T' || letter == 't')
        {
            cntT++;
        }

    // Looping through 'S' and 's'
        if (letter == 'S' || letter == 's')
        {
            cntS++;
        }
    
    // Function to grab / count each vowel in the file 'Constitution_of_the_United_States.txt'
        inFile.get(letter);
    }

    //
    // End of indivisual 'letter' calculations
    //
    // Displaying each vowel's total
    std::cout << "\nThe number of A's:  ........................................." << cntA;
    std::cout << "\nThe number of E's:  ........................................." << cntE;
    std::cout << "\nThe number of I's:  ........................................." << cntI;
    std::cout << "\nThe number of O's:  ........................................." << cntO;
    std::cout << "\nThe number of U's:  ........................................." << cntU;
    std::cout << "\nThe number of R's:  ........................................." << cntR;
    std::cout << "\nThe number of T's:  ........................................." << cntT;
    std::cout << "\nThe number of S's:  ........................................." << cntS;


    // Calculation of ALL the total vowels
    total = cntA + cntE + cntI + cntO + cntU + cntR + cntT + cntS;

    // Display the final total based on the total vowel count
    std::cout << "\nThe vowel count is (+ R, S, T): ............................." << total;
    std::cout << "\n Press any key to continue";
    letter = getchar();

 // Close the file, 'Constitution_of_the_United_States.txt'
    inFile.close();

    // Ending the program
    return 0;
}