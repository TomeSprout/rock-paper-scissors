#include <iostream>
#include <stdlib.h>

int main() {

  srand(time(NULL));

	int computer = rand() % 5 + 1;

	int user = 0;
  
  std::cout << "====================\n";
	std::cout << "rock paper scissors!\n";
	std::cout << "====================\n";

  // Rock > Scissors
  // Rock > Lizard
  // Paper > Rock
  // Paper > Spock
  // Scissors > Paper
  // Scissors > Lizard
  // Lizard > Spock
  // Lizard > Paper
  // Spock > Scissors
  // Spock > Rock
  
	std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
	
  std::cout << "shoot! ";
  
  std::cin >> user;
  
  /*
  if (user == computer + 1 || user == computer - 2) {
    std::cout << "You've beaten the computer.\n\n";
  }
  else if (user == computer) {std::cout << "You have tied.\n\n";}
  else {std::cout << "The computer has beaten you.\n\n";}
    
  switch (user) {
    case 1:
      std::cout << "User chose Rock\n";
      break;
    case 2:
      std::cout << "User chose Paper\n";
      break;
    case 3:
      std::cout << "User chose Scissors\n";
      break;
    default:
      std::cout << "Invalid.\n";
      break;
  }
  
  switch (computer) {
    case 1:
      std::cout << "Computer chose Rock\n";
      break;
    case 2:
      std::cout << "Computer chose Paper\n";
      break;
    case 3:
      std::cout << "Computer chose Scissors\n";
      break;
    default:
      std::cout << "Invalid.\n";
      break;
  }
  */
  
  // Live long and prosper
	
  // User rock
  if 
    (user + computer == 4 || user + computer == 5 && user == 1) {
    std::cout << "You've beaten the computer.\n\n";
  }
  // User paper
  else if 
    (user + computer == 3 || user + computer == 7 && user == 2) {
    std::cout << "You've beaten the computer.\n\n";
  }
  // User scissors
  else if (user + computer == 5 || user + computer == 7 && user == 3) {
    std::cout << "You've beaten the computer.\n\n";
  }
  // User lizard
  else if (user + computer == 6 || user + computer == 9 && user == 4) {
    std::cout << "You've beaten the computer.\n\n";
  }
  // User spock
  else if (user + computer == 6 || user + computer == 8 && user == 5) {
    std::cout << "You've beaten the computer.\n\n";
  }
  // Players tied
  else if (user == computer) {std::cout << "You have tied.\n\n";}
  else {std::cout << "The computer has beaten you.\n\n";}
    
  
  // Player choices
  switch (user) {
    case 1:
      std::cout << "User chose Rock\n";
      break;
    case 2:
      std::cout << "User chose Paper\n";
      break;
    case 3:
      std::cout << "User chose Scissors\n";
      break;    
  	case 4:
      std::cout << "User chose Lizard\n";
      break;
    case 5:
      std::cout << "User chose Spock\n";
      break;
    default:
      std::cout << "Invalid.\n";
      break;
  }
  
  switch (computer) {
    case 1:
      std::cout << "Computer chose Rock\n";
      break;
    case 2:
      std::cout << "Computer chose Paper\n";
      break;
    case 3:
      std::cout << "Computer chose Scissors\n";
      break;
    case 4:
      std::cout << "Computer chose Lizard\n";
      break;
    case 5:
      std::cout << "Computer chose Spock\n";
      break;
    default:
      std::cout << "Invalid.\n";
      break;
  }
}