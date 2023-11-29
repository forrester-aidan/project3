#include <iostream>
#include <string>

using namespace std;

void menu() {
    cout << "***********************************" << endl;
    cout << "Welcome to the Earthquake Database!\n"
            "***********************************\n\n"
            "Please select an option below:\n"
            "1.) Top 10 Deadliest Earthquakes of All Time\n"
            "2.) Top 10 Most Recent Earthquakes\n"
            "3.) Top 10 Most Frequent Locations for Earthquakes\n"
            "4.) Display All Earthquakes at a Location\n"
            "5.) Find an Earthquake\n"
            "6.) Quit\n" << endl;
    cout << "Selection Number:";
}

int main() {

    menu();

    int selection = 0;
    cin >> selection;

    if (selection == 6) {
        cout << "Thank you for using the Earthquake Database!" << endl;
    }

    while (selection < 6) {
        if (selection == 1) {
//            displayDeadlist();
        } else if (selection == 2) {
//            displayRecent();
        } else if (selection == 3) {
//            displayFrequent();
        } else if (selection == 4) {
            cout << "Input the city and country to view all earthquakes (or city and state if in the US)\n"
                    "Example: Cairo, Egypt or Orlando, Florida, US\n\n"
                    "City:";

            string city;
            cin >> city;

            cout << "State or Country:";
            string state;
            cin >> state;

//            earthquakesAtLocation(city, state);
        } else if (selection == 5) {
            cout << "Input a location in the CITY, COUNTRY format (or CITY, STATE for the US)\n"
                     "Example: Cairo, Egypt or Orlando, Florida\n\n"
                     "Location:";
            string location;
            cin >> location;

            cout << "Input the month, day and year AS NUMBERS of the earthquake\n"
                    "Month:";
            string month;
            cin >> month;

            cout << "Day:";
            string day;
            cin >> day;

            cout << "Year:";
            string year;
            cin >> year;

//            findEarthquake(location, month, day, year);
        }

        cout << "\nReturn to main menu? (Y/N)";
        char op;
        cin >> op;

        if (op == 'Y' || op == 'y') {
            menu();
            int next_select;
            cin >> next_select;
            selection = next_select;
        } else if (op == 'N' || op == 'n') {
            cout << "Thank you for using the Earthquake Database!" << endl;
            selection = 6;
        }
    }
    return 0;
}