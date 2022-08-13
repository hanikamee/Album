// Hani Kamee
// July 7th, 2022
// Status: completed
// This program will receive an input of artists' names and songs from the user
// and sort them by the artist name




#include <iostream>
#include "Album.h" // The header file
#include <algorithm> // To be able to use the swap method


int main()
{
    Album arr[10];  // An array of the struct
    std::string artistName;
    std::string artistSong;

    // Getting the data from the user
    for (int i = 0; i < 10; i++){
        std::cout << "Please enter an artist name: ";
        std::getline(std::cin, artistName);
        arr[i].artist = artistName;

        std::cout<< "Please enter an artist song: ";
        std::getline(std::cin, artistSong);
        arr[i].song = artistSong;

    }

    // Sorting the list
    bool sorted = true; // A switch to terminate the loop when done sorting
    while(sorted){
        sorted = false;
        for (int i = 0; i < 9; i++){
            if (arr[i].artist > arr[i+1].artist){
                std::swap(arr[i], arr[i+1]);
                sorted = true;
            }
        }

    }


    // Displaying the list
    std:: cout << "         Playlist" << std::endl;
    std:: cout << "Artist   " << "          "  << "Title" << std::endl;
    std:: cout << "================================" << std::endl;
    for (int x = 0; x <10; x++){
        std::cout<< arr[x].artist <<"                    "<< arr[x].song
        << std::endl;
    }



    return 0;
}
