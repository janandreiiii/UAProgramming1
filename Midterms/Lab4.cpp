#include <iostream>
#include <string>
#include <cctype>
#include <limits> 

using namespace std;

// Helper function to trim whitespace from the start and end of a string.
static string trim(const string &s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    if (start == string::npos) return "";
    size_t end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

// Helper function to check if a string represents a valid integer.
static bool is_number(const string &s) {
    if (s.empty()) return false;
    size_t i = 0;
    if (s[0] == '+' || s[0] == '-') {
        if (s.size() == 1) return false; // String is only "+" or "-"
        i = 1;
    }
    for (; i < s.size(); ++i) {
        if (!isdigit(static_cast<unsigned char>(s[i]))) return false;
    }
    return true;
}

int main() {
    int choice = 0;
    const int MIN_CHOICE = 1;
    const int MAX_CHOICE = 19;

    do {
        cout << "\nGeography of the Philippines - Select a Region\n";
        cout << "1. National Capital Region (NCR)\n";
        cout << "2. Cordillera Administrative Region (CAR)\n";
        cout << "3. Ilocos Region (Region I)\n";
        cout << "4. Cagayan Valley (Region II)\n";
        cout << "5. Central Luzon (Region III)\n";
        cout << "6. CALABARZON (Region IV-A)\n";
        cout << "7. MIMAROPA (Region IV-B)\n";
        cout << "8. Bicol Region (Region V)\n";
        cout << "9. Western Visayas (Region VI)\n";
        cout << "10. Central Visayas (Region VII)\n";
        cout << "11. Eastern Visayas (Region VIII)\n";
        cout << "12. Zamboanga Peninsula (Region IX)\n";
        cout << "13. Northern Mindanao (Region X)\n";
        cout << "14. Davao Region (Region XI)\n";
        cout << "15. SOCCSKSARGEN (Region XII)\n";
        cout << "16. Caraga Region (Region XIII)\n";
        cout << "17. Bangsamoro Autonomous Region in Muslim Mindanao (BARMM)\n";
        cout << "18. Negros Island Region (NIR)\n";
        cout << "19. Exit\n";
        cout << "Enter your choice: ";

        string line;
        if (!getline(cin, line)) {
            cout << "\nNo input detected or input error. Exiting program.\n";
            break;
        }

        line = trim(line);

        if (!is_number(line)) {
            cout << "\nInvalid input. Please enter a number between " << MIN_CHOICE << " and " << MAX_CHOICE << ".\n";
            continue;
        }

        try {
            long long val = stoll(line);
            if (val < MIN_CHOICE || val > MAX_CHOICE) {
                cout << "\nChoice out of range. Please select a number between " << MIN_CHOICE << " and " << MAX_CHOICE << ".\n";
                continue;
            }
            choice = static_cast<int>(val);
        } catch (const out_of_range&) {
            cout << "\nInput is too large. Please enter a valid menu number.\n";
            continue;
        } catch (...) {
            cout << "\nInput conversion error. Please try again.\n";
            continue;
        }

        switch (choice) {
            case 1:
                cout << "\nRegion: National Capital Region (NCR)\n";
                cout << "Capital: Manila\n";
                cout << "Known for: Center of government, commerce, culture, and education.\n";
                cout << "Provinces: None (composed of 16 cities and 1 municipality).\n";
                break;
            case 2:
                cout << "\nRegion: Cordillera Administrative Region (CAR)\n";
                cout << "Capital: Baguio City (regional center)\n";
                cout << "Known for: Rice Terraces of Banaue, cool climate, indigenous culture.\n";
                cout << "Provinces: Abra, Apayao, Benguet, Ifugao, Kalinga, Mountain Province.\n";
                break;
            case 3:
                cout << "\nRegion: Ilocos Region (Region I)\n";
                cout << "Capital: San Fernando City (La Union)\n";
                cout << "Known for: Heritage city of Vigan, beaches, and agriculture.\n";
                cout << "Provinces: Ilocos Norte, Ilocos Sur, La Union, Pangasinan.\n";
                break;
            case 4:
                cout << "\nRegion: Cagayan Valley (Region II)\n";
                cout << "Capital: Tuguegarao City\n";
                cout << "Known for: Cagayan River, Palaui Island, agriculture.\n";
                cout << "Provinces: Batanes, Cagayan, Isabela, Nueva Vizcaya, Quirino.\n";
                break;
            case 5:
                cout << "\nRegion: Central Luzon (Region III)\n";
                cout << "Capital: San Fernando City (Pampanga)\n";
                cout << "Known for: 'Rice Granary of the Philippines', Mount Pinatubo.\n";
                cout << "Provinces: Aurora, Bataan, Bulacan, Nueva Ecija, Pampanga, Tarlac, Zambales.\n";
                break;
            case 6:
                cout << "\nRegion: CALABARZON (Region IV-A)\n";
                cout << "Capital: Calamba City (Laguna)\n";
                cout << "Known for: Industrial hub, Taal Volcano, Tagaytay.\n";
                cout << "Provinces: Cavite, Laguna, Batangas, Rizal, Quezon.\n";
                break;
            case 7:
                cout << "\nRegion: MIMAROPA (Region IV-B)\n";
                cout << "Capital: Calapan City (Oriental Mindoro)\n";
                cout << "Known for: Puerto Princesa Underground River, beaches, agriculture.\n";
                cout << "Provinces: Occidental Mindoro, Oriental Mindoro, Marinduque, Romblon, Palawan.\n";
                break;
            case 8:
                cout << "\nRegion: Bicol Region (Region V)\n";
                cout << "Capital: Legazpi City (Albay)\n";
                cout << "Known for: Mayon Volcano, spicy cuisine.\n";
                cout << "Provinces: Albay, Camarines Norte, Camarines Sur, Catanduanes, Masbate, Sorsogon.\n";
                break;
            case 9:
                cout << "\nRegion: Western Visayas (Region VI)\n";
                cout << "Capital: Iloilo City\n";
                cout << "Known for: Dinagyang Festival, sugar industry, Boracay Island.\n";
                cout << "Provinces: Aklan, Antique, Capiz, Guimaras, Iloilo.\n";
                break;
            case 10:
                cout << "\nRegion: Central Visayas (Region VII)\n";
                cout << "Capital: Cebu City\n";
                // FIXED: Replaced typographic quote ’ with standard apostrophe '
                cout << "Known for: Magellan's Cross, Sinulog Festival, tourism.\n";
                cout << "Provinces: Bohol, Cebu.\n";
                break;
            case 11:
                cout << "\nRegion: Eastern Visayas (Region VIII)\n";
                cout << "Capital: Tacloban City\n";
                cout << "Known for: San Juanico Bridge, historic Leyte Landing.\n";
                cout << "Provinces: Biliran, Eastern Samar, Leyte, Northern Samar, Samar, Southern Leyte.\n";
                break;
            case 12:
                cout << "\nRegion: Zamboanga Peninsula (Region IX)\n";
                cout << "Capital: Pagadian City\n";
                cout << "Known for: Colorful vintas, rich culture, seafood.\n";
                cout << "Provinces: Zamboanga del Norte, Zamboanga del Sur, Zamboanga Sibugay.\n";
                break;
            case 13:
                cout << "\nRegion: Northern Mindanao (Region X)\n";
                cout << "Capital: Cagayan de Oro City\n";
                cout << "Known for: Whitewater rafting, agriculture.\n";
                cout << "Provinces: Bukidnon, Camiguin, Lanao del Norte, Misamis Occidental, Misamis Oriental.\n";
                break;
            case 14:
                cout << "\nRegion: Davao Region (Region XI)\n";
                cout << "Capital: Davao City\n";
                cout << "Known for: Mount Apo, durian, Kadayawan Festival.\n";
                cout << "Provinces: Davao de Oro, Davao del Norte, Davao del Sur, Davao Occidental, Davao Oriental.\n";
                break;
            case 15:
                cout << "\nRegion: SOCCSKSARGEN (Region XII)\n";
                cout << "Capital: Koronadal City\n";
                cout << "Known for: Tuna capital (General Santos), Lake Sebu.\n";
                cout << "Provinces: Cotabato, Sarangani, South Cotabato, Sultan Kudarat.\n";
                break;
            case 16:
                cout << "\nRegion: Caraga Region (Region XIII)\n";
                cout << "Capital: Butuan City\n";
                cout << "Known for: Surfing in Siargao, mining industry.\n";
                cout << "Provinces: Agusan del Norte, Agusan del Sur, Dinagat Islands, Surigao del Norte, Surigao del Sur.\n";
                break;
            case 17:
                cout << "\nRegion: Bangsamoro Autonomous Region in Muslim Mindanao (BARMM)\n";
                cout << "Capital: Cotabato City\n";
                cout << "Known for: Cultural diversity, Lake Lanao, Mosque architecture.\n";
                cout << "Provinces: Basilan, Lanao del Sur, Maguindanao del Norte, Maguindanao del Sur, Sulu, Tawi-Tawi.\n";
                break;
            case 18:
                cout << "\nRegion: Negros Island Region (NIR)\n";
                cout << "Capital: No designated regional center.\n";
                cout << "Known for: Sugar industry, volcanoes, beaches, and rich biodiversity.\n";
                cout << "Provinces: Negros Occidental, Negros Oriental, Siquijor.\n";
                break;
            case 19:
                cout << "\nExiting program.\n";
                break;
            default:
                cout << "\nInvalid choice. Please select a valid region number.\n";
        }
    } while (choice != 19);

    return 0;
}
