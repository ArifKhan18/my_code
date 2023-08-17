#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int age;
    string position;

    void input() {
        cout << "Enter player name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter player age: ";
        cin >> age;
        cout << "Enter player position: ";
        cin.ignore();
        getline(cin, position);
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Position: " << position << endl;
    }
};

class FootballManagementSystem {
public:
    void addPlayer() {
        Player player;
        player.input();

        ofstream file("players.txt", ios::app);
        file << player.name << "," << player.age << "," << player.position << endl;
        file.close();

        cout << "Player added successfully." << endl;
    }

    void displayPlayers() {
        ifstream file("players.txt");
        string line;

        while (getline(file, line)) {
            Player player;
            size_t pos = line.find(",");
            player.name = line.substr(0, pos);
            line.erase(0, pos + 1);

            pos = line.find(",");
            player.age = stoi(line.substr(0, pos));
            line.erase(0, pos + 1);

            player.position = line;
            player.display();
            cout << "---------------------" << endl;
        }

        file.close();
    }

    void run() {
        int choice;

        do {
            cout << "Football Management System" << endl;
            cout << "1. Add Player" << endl;
            cout << "2. Display Players" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addPlayer();
                    break;
                case 2:
                    displayPlayers();
                    break;
                case 3:
                    cout << "Exiting the system. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 3);
    }
};

int main() {
    FootballManagementSystem system;
    system.run();

    return 0;
}
