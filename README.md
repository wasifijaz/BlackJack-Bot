# BlackJack Game Bot

## Overview

Welcome to the BlackJack Game Bot repository! This project features an intelligent bot powered by Deep Q Learning designed to play the BlackJack Game with an impressive 98% win rate. The bot employs a combination of Basic BlackJack Game strategy and Q tables data to generate optimal moves, making decisions such as Double, Split, Stand, or Hit. What sets this bot apart is its ability to play on a specific game by capturing and interpreting the game environment through computer vision.

## Features

- **Deep Q Learning**: The bot is trained using Deep Q Learning, enabling it to make strategic decisions based on the knowledge gained during training.

- **Computer Vision with YOLO v8 and PaddleOCR**: The bot captures the game environment by taking screenshots of the user's screen. YOLO v8 is used for card detection, and PaddleOCR is employed to read the text on the cards, providing valuable information for decision-making.

- **User Authentication and Registration**: The project implements key authentication (keyauth) for user authentication and registration, ensuring a secure and personalized experience for users.

- **Flask APIs**: Flask APIs have been developed to seamlessly integrate the bot into a C# desktop application. These APIs facilitate communication between different components of the system.

## How It Works

1. **Game Capture**: The bot captures the game environment by taking screenshots of the user's screen during gameplay.

2. **Card Detection with YOLO v8**: YOLO v8 is used to detect and identify cards on the table, providing visual input to the bot.

3. **Text Recognition with PaddleOCR**: PaddleOCR interprets the text on the cards, extracting essential information about the dealer's and user's hands.

4. **Deep Q Learning Decision Making**: The bot utilizes the knowledge gained from Deep Q Learning to generate the optimal strategy for the next move based on the identified cards.

5. **Flask APIs Integration**: Flask APIs are integrated into the C# desktop application, facilitating communication between the game bot and the user interface.

## Usage

To use the BlackJack Game Bot, follow these steps:

1. Clone the repository to your local machine.
   git clone https://github.com/your-username/BlackJack-Game-Bot.git
2. Install the required dependencies.
   pip install -r requirements.txt
4. Run the C# desktop application, ensuring that Flask APIs are properly configured and accessible.
5. Start a BlackJack game on your computer.

The bot will capture the game environment, make strategic decisions, and play the game with a 98% win rate.

Feel free to explore the codebase and contribute to the project. Happy gaming!
