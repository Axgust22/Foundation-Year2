// Function to add information of students to a CSV file
void AddCSV_Students(StudentsList *ls)
{
    Students *tmp = ls->head; // Start with the head of the list
    if (ls->head == NULL)
    {
        // If the list is empty, display a message and return
        cout << "\033[1;37m=====================================================================\033[0m" << endl;
        cout << "\033[1;31m|The list is empty can't add all Information of Students to file CSV|\033[0m" << endl;
        cout << "\033[1;37m=====================================================================\033[0m" << endl;
        return;
    }
    else
    {
        // Open the CSV file in append mode
        ofstream myfile;
        myfile.open("Students.csv", ios::app);
        if (!myfile.is_open())
        {
            // If the file can't be opened, display a message and return
            cout << "\033[1;37m=====================================================\033[0m" << endl;
            cout << "\033[1;32m|All information of the student aren't added to file|\033[0m" << endl;
            cout << "\033[1;37m=====================================================\033[0m" << endl;
            return;
        }

        // Traverse the linked list and write each student's information to the CSV file
        while (tmp != NULL)
        {
            myfile << tmp->ID << ","
                   << setw(20) << tmp->Name << ","
                   << setw(16) << tmp->Birth << ","
                   << setw(13) << tmp->Gender << ","
                   << setw(8) << tmp->Age << ","
                   << setw(16) << tmp->Academic_year << ","
                   << setw(12) << tmp->Major << ","
                   << setw(8) << tmp->Year << ","
                   << setw(30) << tmp->Address << ","
                   << setw(31) << tmp->Gmail << ","
                   << setw(18) << tmp->PhoneNumber << "," << endl;
            tmp = tmp->next; // Move to the next student in the list
        }

        // Close the CSV file
        myfile.close();

        // Display a success message
        cout << "\033[1;37m==================================================\033[0m" << endl;
        cout << "\033[1;32m|Information of the student are added to file CSV|\033[0m" << endl;
        cout << "\033[1;37m==================================================\033[0m" << endl;
    }
}

// Function to read student information from a CSV file
void Readinformation_Students(StudentsList *ls)
{
        // Open the CSV file in read mode
        ifstream myfile;
        string data;
        myfile.open("Students.csv", ios::in);
        if (!myfile.is_open())
        {
            // If the file can't be opened, display a message and return
            cout << "\033[1;37m======================================================\033[0m" << endl;
            cout << "\033[1;31m|All information of the student aren't showed from CSV|\033[0m" << endl;
            cout << "\033[1;37m======================================================\033[0m" << endl;
            return;
        }

        // Display header for the data being read from the CSV file
        cout << right << setw(145) << ("\033[1;37m===================================================================\033[1;37m") << endl;
        cout << right << setw(145) << ("\033[1;32m|Here are the data that read Information of Students from file CSV|\033[1;37m") << endl;
        cout << right << setw(145) << ("\033[1;37m===================================================================\033[1;37m") << endl;
        cout << endl;

        // Display column headers for the student information
        cout << "\033[1;37m================================================================================================================================================================================================\033[0m" << endl;
        cout << left << setw(28) << "\033[1;37mID\033[0m"
         << setw(34) << "\033[1;37m Name\033[0m"
         << setw(28) << "\033[1;37mBirth\033[0m"
         << setw(22) << "\033[1;37mGender\033[0m"
         << setw(20) << "\033[1;37mAge\033[0m"
         << setw(30) << "\033[1;37mAcademic_year\033[0m"
         << setw(22) << "\033[1;37mMajor\033[0m"
         << setw(22) << "\033[1;37mYear\033[0m"
         << setw(44) << "\033[1;37mAddress\033[0m"
         << setw(41) << "\033[1;37mGmail\033[0m"
         << setw(25) << "\033[1;37mPhonenumber\033[0m" << endl;

        // Read and display each line from the CSV file
        while (getline(myfile, data))
        {
            cout << "\033[1;37m================================================================================================================================================================================================\033[0m" << endl;
            cout << data << endl;
        }

        cout << "\033[1;37m================================================================================================================================================================================================\033[0m" << endl;
        myfile.close(); // Close the CSV file
        cout << endl;
    
}
// Function to add scores of students to a CSV file
void AddScoreCSV_Students(StudentsList *ls)
{
    Students *tmp = ls->head; // Start with the head of the list

    if (ls->head == NULL)
    {
        // If the list is empty, display a message and return
        cout << "\033[1;37m===============================================================\033[0m" << endl;
        cout << "\033[1;31m|The list is empty can't add all Score of Students to file CSV|\033[0m" << endl;
        cout << "\033[1;37m===============================================================\033[0m" << endl;
        return;
    }
    else
    {
        // Open the CSV file in append mode
        ofstream myfile;
        myfile.open("ScoreStudents.csv", ios::app);
        if (!myfile.is_open())
        {
            // If the file can't be opened, display a message and return
            cout << "\033[1;37m===============================================\033[0m" << endl;
            cout << "\033[1;31m|All Score of the student aren't added to file|\033[0m" << endl;
            cout << "\033[1;37m===============================================\033[0m" << endl;
            return;
        }

        // Traverse the linked list and write each student's scores to the CSV file
        while (tmp != NULL)
        {
            myfile << tmp->ID << ","
                   << setw(22) << tmp->Name << ","
                   << setw(10) << tmp->CalculusIII << ","
                   << setw(18) << tmp->LinearAlgebra << ","
                   << setw(18) << tmp->DataStructureI << ","
                   << setw(18) << tmp->Electric << ","
                   << setw(18) << tmp->Differential << ","
                   << setw(18) << tmp->Probability << ","
                   << setw(18) << tmp->DataStructureII << ","
                   << setw(18) << tmp->ComputerArchitecture << "," << endl;
            tmp = tmp->next; // Move to the next student in the list
        }

        // Close the CSV file
        myfile.close();

        // Display a message indicating that the scores have been added to the CSV file
        cout << "\033[1;37m============================================\033[0m" << endl;
        cout << "\033[1;32m|Score of the student are added to file CSV|\033[0m" << endl;
        cout << "\033[1;37m============================================\033[0m" << endl;
    }
}

// Function to read student scores from a CSV file
void ReadScores_Students(StudentsList *ls)
{
        // Open the CSV file in read mode
        ifstream myfile;
        string data;
        myfile.open("ScoreStudents.csv", ios::in);
        if (!myfile.is_open())
        {
            // If the file can't be opened, display a message and return
            cout << "\033[1;37m==================================================\033[0m" << endl;
            cout << "\033[1;31m|All Scores of the student aren't showed from CSV|\033[0m" << endl;
            cout << "\033[1;37m==================================================\033[0m" << endl;
            return;
        }

        // Display header for the data being read from the CSV file
        cout << right << setw(145) << ("\033[1;37m=============================================================\033[1;37m") << endl;
        cout << right << setw(145) << ("\033[1;32m|Here are the data that read Score of Students from file CSV|\033[1;37m") << endl;
        cout << right << setw(145) << ("\033[1;37m=============================================================\033[1;37m") << endl;
        cout << endl;

        // Display column headers for the student scores
        cout << "\033[1;37m===============================================================================================================================================================================================\033[0m" << endl;
        cout << left << setw(30) << "\033[1;37mID\033[0m"
             << setw(30) << "\033[1;37m Name\033[0m"
             << setw(30) << "\033[1;37mCalculusIII\033[0m"
             << setw(30) << "\033[1;37mLinearAlgebra\033[0m"
             << setw(30) << "\033[1;37mDataStructureI\033[0m"
             << setw(30) << "\033[1;37mElectric\033[0m"
             << setw(30) << "\033[1;37mDifferential\033[0m"
             << setw(30) << "\033[1;37mProbability\033[0m"
             << setw(30) << "\033[1;37mDataStructureII\033[0m"
             << setw(30) << "\033[1;37mComputerArchitecture\033[0m" << endl;

        // Read and display each line from the CSV file
        while (getline(myfile, data))
        {
            cout << "\033[1;37m===============================================================================================================================================================================================\033[0m" << endl;
            cout << data << endl;
        }

        // Display footer for the data
        cout << "\033[1;37m===============================================================================================================================================================================================\033[0m" << endl;
        myfile.close(); // Close the CSV file
        cout << endl;
}

// Function to delete a student's information from a CSV file
void DeleteInformation_fromCSV(const string &filename, const string &studentID)
{
    ifstream myfile(filename); // Open the original CSV file for reading
    if (!myfile)               // Check if the file is successfully opened
    {
        cout << endl;
        // If the file can't be opened, display a message and return
        cout << "\033[1;37m================\033[0m" << endl;
        cout << "\033[1;31m|File not found|\033[0m" << endl;
        cout << "\033[1;37m================\033[0m" << endl;
        return; // Exit the function if the file is not found
    }

    bool found = false;            // Flag to check if the student record is found
    ofstream tempFile("temp.csv"); // Create a temporary file to store the modified data

    string data;                  // String to hold each line of the CSV file
    while (getline(myfile, data)) // Read each line from the original CSV file
    {
        // Check if the current line contains the student ID
        if (data.find(studentID) == string::npos) // If the student ID is not found in the line
        {
            tempFile << data << endl; // Write the line to the temporary file
        }
        else
        {
            found = true; // Set the found flag to true if the student ID is found
        }
    }

    myfile.close();   // Close the original CSV file
    tempFile.close(); // Close the temporary file

    if (found) // Check if the student record was found and deleted
    {
        cout << endl;
        remove(filename.c_str());             // Delete the original CSV file
        rename("temp.csv", filename.c_str()); // Rename the temporary file to the original file name
        cout << "\033[1;37m=====================================\033[0m" << endl;
        cout << "\033[1;32m|Student record deleted successfully|\033[0m" << endl;
        cout << "\033[1;37m=====================================\033[0m" << endl;
    }
    else // If the student record was not found
    {
        cout << endl;
        cout << "\033[1;37m===================\033[0m" << endl;
        cout << "\033[1;31m|Student not found|\033[0m" << endl;
        cout << "\033[1;37m===================\033[0m" << endl;
        remove("temp.csv"); // Delete the temporary file
    }
}

// Function to delete a student's score from a CSV file
void DeleteScore_fromCSV(const string &filename, const string &studentID)
{
    ifstream myfile(filename); // Open the original CSV file for reading
    if (!myfile)               // Check if the file is successfully opened
    {
        cout << endl;
        // If the file can't be opened, display a message and return
        cout << "\033[1;37m================\033[0m" << endl;
        cout << "\033[1;31m|File not found|\033[0m" << endl;
        cout << "\033[1;37m================\033[0m" << endl;
        return; // Exit the function if the file is not found
    }

    bool found = false;            // Flag to check if the student record is found
    ofstream tempFile("temp.csv"); // Create a temporary file to store the modified data

    string data;                  // String to hold each line of the CSV file
    while (getline(myfile, data)) // Read each line from the original CSV file
    {
        // Check if the current line contains the student ID
        if (data.find(studentID) == string::npos) // If the student ID is not found in the line
        {
            tempFile << data << endl; // Write the line to the temporary file
        }
        else
        {
            found = true; // Set the found flag to true if the student ID is found
        }
    }

    myfile.close();   // Close the original CSV file
    tempFile.close(); // Close the temporary file

    if (found) // Check if the student record was found and deleted
    {
        cout << endl;
        remove(filename.c_str());             // Delete the original CSV file
        rename("temp.csv", filename.c_str()); // Rename the temporary file to the original file name
        cout << "\033[1;37m=====================================\033[0m" << endl;
        cout << "\033[1;32m|Student record deleted successfully|\033[0m" << endl;
        cout << "\033[1;37m=====================================\033[0m" << endl;
    }
    else // If the student record was not found
    {
        cout << endl;
        cout << "\033[1;37m===================\033[0m" << endl;
        cout << "\033[1;31m|Student not found|\033[0m" << endl;
        cout << "\033[1;37m===================\033[0m" << endl;
        remove("temp.csv"); // Delete the temporary file
    }
}