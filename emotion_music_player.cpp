#include <iostream>
#include <SFML/Audio.hpp> // Include the SFML audio header

// Replace with the actual path to your .m4a music file
const std::string musicFile = "C:\\Users\\Gaurav\\Downloads\\your_music.m4a";

void adjustVolume(const std::string& emotion) {
    // Adjust volume based on emotion (you can customize this logic)
    if (emotion == "happy") {
        // Increase volume for happy emotion
        std::cout << "Volume increased!" << std::endl;
    } else if (emotion == "sad") {
        // Decrease volume for sad emotion
        std::cout << "Volume decreased!" << std::endl;
    } else if (emotion == "angry") {
        // Set low volume for angry emotion
        std::cout << "Volume set to low!" << std::endl;
    } else {
        // Unknown emotion
        std::cout << "Unknown emotion." << std::endl;
    }
}

int main() {
    std::cout << "Emotion-based Music Player" << std::endl;

    // Load the music file
    sf::Music music;
    if (!music.openFromFile(musicFile)) {
        std::cerr << "Error loading music file." << std::endl;
        return 1;
    }

    while (true) {
        std::cout << "Enter emotion (happy, sad, angry, stop): ";
        std::string emotion;
        std::cin >> emotion;

        if (emotion == "stop") {
            // Stop music and exit
            std::cout << "Stopping music." << std::endl;
            break;
        }

        // Adjust volume based on emotion
        adjustVolume(emotion);

        // Play the music
        music.play();
    }

    // Clean up
    music.stop();

    return 0;
}
