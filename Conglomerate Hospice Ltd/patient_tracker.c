
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <conio.h> // Has the getch() function

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
#define MAX_BEDS 5

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
    int room_no[7];                  // Declare Room-Number
    char respirator_stat[10];        // Declare Respirator-Status
    int n_beds;                      // Declare Number-of-Beds
    char personnel[9];               // Declare Admitted_Status
    int assigned_patients[MAX_BEDS]; // Declare the Patients in a Room

} R;

// Main
int main()
{
    // Variable declarations & Allocating Memory
    int choice = 1;

    while (choice) // Infinite Loop
    {
        // Displays the Menu
        printf("\n============================================================");
        printf("\n\t\tConglomerate Hospice Ltd");
        printf("\n\t\tCOVID-19 Patients tracker");
        printf("\n============================================================");
        printf("\n\t\t\t MENU");
        printf("\n------------------------------------------------------------");
        printf("\n\t1  - Add A Patient ");
        printf("\n\t2  - Add A Room");
        printf("\n\t3  - Change Patient Status");
        printf("\n\t4  - AI Assignment");
        printf("\n\t5  - Discharge");
        printf("\n\t6  - Room admittance by age group Report");
        printf("\n\t7  - Admitted patient list Report");
        printf("\n\t8  - COVID-19 status Report");
        printf("\n\t9  - Exit and Save");
        printf("\n\t10 - Exit without save");
        printf("\n------------------------------------------------------------");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice); // Accepts the Users-Option
        printf("\n\n");

        // Implement switch function
        switch (choice)
        {
        case 1:
            AddPatient(); // Leads to function
            break;        // Terminate switch

        case 2:
            AddRoom();
            break;

        case 3:
            ChangeStatus();
            break;

        case 4:
            AI_Assignment();
            break;

        case 5:
            Discharge();
            break;

        case 6:
            RoomReport();
            break;

        case 7:
            AdmittedReport();
            break;

        case 8:
            StatusReport();
            break;

        case 9:
            Exit_WithSave();
            break;

        case 10:
            Exit_WithoutSave();
            break;

        default:
            system("cls"); // Clears the screen
            printf("\n** That is not a valid option **");
            printf("\n** Please try again **");
            printf("\n** Press any key to continue... **");
            getch();
            main(); // Starts over
            break;

        } // Ends switch
    }

    return 0;
}

/*
Adds a new patient to the list of patients (note that these buildings can only
accommodate a maximum of 35 patients). 
All validation protocols should take place to ensure
that new entries follow the field requirements
*/
void AddRoom()
{
    system("cls"); //clears screen
    printf("To be continued");
}

/*
Adds a new room to the list of rooms (note that these buildings can only
accommodate a maximum of 21 rooms). 
All validation protocols should take place to ensure
that new entries follow the field requirements
*/
void AddPatient()
{
    printf("To be continued");
}

/*
Allows the user to change the status of any patient currently in the
system (even if they are discharged). The patient is located by their unique id numbers.
*/
void ChangeStatus()
{
    printf("To be continued");
}

/*
Allows the system to assign those patients who do not yet have a room based on
the following protocols:.........
Note that the order of the priority depends on the top-down design of the table whereby those
listed first get priority over the others.
*/
void AI_Assignment()
{
    printf("To be continued");
}

/*
The patient’s record is changed from admitted to discharged and the patient is
removed from the room they were assigned (if they were assigned a room). Patients are
discharged based on their unique id numbers.
*/
void Discharge()
{
    printf("To be continued");
}

/*
Room admittance by age group Report: A bar chart frequency report that will show the number
of persons currently assigned to rooms grouped by their age groups: over 60s, 40 to 60, 20 to 39
and younger than 39. The user should then be given the option to save the report to a file (the
system will request a file name from the user to save the file).
*/
void RoomReport()
{
    printf("To be continued");
}

/*
Admitted patient list Report: A list of all of the patients currently admitted ordered by their id
numbers (in ascending order) showing their id numbers, names, room they are currently
assigned (“none” if not yet assigned a room) and current COVID-19 status. The user should then
be given the option to save the report to a file (the system will request a file name from the user
to save the file).
*/
void AdmittedReport()
{
    printf("To be continued");
}

/*
COVID-19 status Report: bar chart frequency report that will show the number of persons
grouped by each status: none, mild, average, severe and critical. The user should then be given
the option to save the report to a file, which file name they supply to the system. This report
should be ordered by frequency from highest to lowest (descending order). The user should
then be given the option to save the report to a file (the system will request a file name from
the user to save the file).
*/
void StatusReport()
{
    printf("To be continued");
}

/*
Exit: close the system with automatic save of changes made to the file.
*/
void Exit_WithSave()
{

    // Saves data to files
    /*
        HERE
    */

    system("cls"); // Clears the screen
    printf("\n\n** Saving Data **");
    printf("\n** Goodbye **");
    exit(0); // Ends the Program
}

/*
Exit without save: abruptly close the system disregarding all changes made to the system.
*/
void Exit_WithoutSave()
{
    system("cls"); // Clears the screen
    printf("\n\n** Goodbye **");
    exit(0); // Ends the Program
}