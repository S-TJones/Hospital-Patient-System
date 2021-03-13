
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring function prototypes
void AddRoom();
void AddPatient();
void ChangeStatus();
void AI_Assignment();
void Discharge();
void RoomReport();
void AdmittedReport();
void StatusReport();
void Exit_WithSave();
void Exit_WithoutSave();

// Global Constants
int PSIZE = 35;
int RSIZE = 21;
int MAX_BEDS = 5;

// Structures - Patient and Room
typedef struct Patient
{
    int id[7];               // Declare ID
    char name[25];           // Declare Name
    char covid_stat[9];      // Declare Covid-Status
    int b_year;              // Declare Birth-Year
    char admitted_status[9]; // Declare Admitted-Status

} P;

typedef struct Room
{
    int room_no[7];                // Declare Room-Number
    char respirator_stat[10];      // Declare Respirator-Status
    int n_beds;                    // Declare Number-of-Beds
    char personnel[9];             // Declare Admitted_Status
    int assigned_patients[n_beds]; // Declare the Patients in a Room

} R;

// Main
int main()
{
    // Variable declarations & Allocating Memory
    int num_courses, num_enroll, num_students;

    // Implement switch function
    switch (user_option)
    {
    case 1:
        AddRoom(); // Leads to function
        break;     // Terminate switch

    case 2:
        AddPatient();
        break;

    case 3:
        ChangeStatus();
        break;

    case 4:
        AI_Assignment();
        break;

    default:
        system("cls"); // Clears the screen
        printf("** Goodbye **");
        exit(0); // Ends the Program
        break;

    } // Ends switch
}

/*
Adds a new patient to the list of patients (note that these buildings can only
accommodate a maximum of 35 patients). 
All validation protocols should take place to ensure
that new entries follow the field requirements
*/
void AddRoom()
{

    int Password;
    system("cls"); //clears screen
}

/*
Adds a new room to the list of rooms (note that these buildings can only
accommodate a maximum of 21 rooms). 
All validation protocols should take place to ensure
that new entries follow the field requirements
*/
void AddPatient()
{
}

/*
Allows the user to change the status of any patient currently in the
system (even if they are discharged). The patient is located by their unique id numbers.
*/
void ChangeStatus()
{
}

/*
Allows the system to assign those patients who do not yet have a room based on
the following protocols:
*/
void AI_Assignment()
{
}