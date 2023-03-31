#include <iostream>

int main() {

  std::string avengerFit = "";
  int avengerLevel = 0;

  std::cout << "Today you will become an Avenger!\n";
  std::cout << "But wait... Before we continue, we must know...\n";
  std::cout << "Are YOU fit to be an Avenger?\n";
  std::cin >> avengerFit;

  if (avengerFit == "Yes" ) {
    std::cout << "Congratulations on becoming an Avenger!\n";
    std::cout << "You are on track to become one of Earth's mightiest heroes!\n";
    std::cout << "Don't get too comfortable, we have a lot of work to do!\n";
    avengerLevel++;
    }
  else {
    std::cout << "Thank you for your time. You are not qualified to be an Avenger.\n";
  }

  int weaponEquip;

  std::cout << "Do you want to equip a weapon?\n";
  std::cout << "1) Yes.\n";
  std::cout << "2) No.\n";
  std::cout << "Make your choice (1-2).\n";
  std::cin >> weaponEquip;

  int numWeapons = 0;
  if (weaponEquip == 1) {
    for (weaponEquip <= 3; weaponEquip++;) {
      std::cout << "Do you want to equip another weapon?\n";
      std::cout << "1) Yes.\n";
      std::cout << "2) No.\n";
      std::cout << "Make your choice (1-2).\n";
      std::cin >> weaponEquip;
      avengerLevel++;
      numWeapons++;
      if (weaponEquip == 2) {
        break;
      }
      else {
        continue;
      }
    }
  }
  else {
    std::cout << "More of a melee fighter, huh. Or a mind-focused fighter. Respect!\n";
    avengerLevel++;
  }

  std::cout << "You have " << numWeapons << " weapons equipped.\n";

  int choice1;

  std::cout << "BOOM! You hear a powerful thud a few miles away.\n";
  std::cout << "What do you do?\n";
  std::cout << "1) Stay where you are and find shelter.\n";
  std::cout << "2) Call up the Senior Avengers Members about the incident.\n";
  std::cout << "3) Rush to the scene and help out without using your powers.\n";
  std::cout << "4) Unleash the full magnitude of your powers.\n";
  std::cout << "Choose one of the options (1-4).\n";
  std::cin >> choice1;

  if (choice1 == 1) {
    avengerLevel--;
    }
  else if (choice1 == 2) {
    avengerLevel = avengerLevel;
  }
  else if (choice1 == 3) {
    avengerLevel++;
  }
  else {
    avengerLevel = avengerLevel + 2;
  }
   
  int choice2;

  std::cout << "A mysterious number has attempted to call you 11 times...\n";
  std::cout << "You ask Reed Richards to track its IP address.\n";
  std::cout << "The IP address reads 616VONDOOM616.\n";
  std::cout << "You don't know who that is, but you see Reed exclaim in shock, 'He's back!'\n";
  std::cout << "You inquire, but Reed remains silent.\n";
  std::cout << "What do you do?\n";
  std::cout << "1) Block the number and report the incident to the Avengers.\n";
  std::cout << "2) Call the number.\n";
  std::cout << "Choose an option (1-2).\n";
  std::cin >> choice2;

  int choice3;
  int choice4;

  if (choice2 == 1) {
    avengerLevel++;
    std::cout << "BREAKING: Hawkeye and Falcon are MISSING.\n";
    std::cout << "Doctor Doom has breached the Avengers Tower!\n";
    std::cout << "As Reed Richards and Sue Storm are about to rush to the scene...\n";
    std::cout << "You ask whether you could join.\n";
    std::cout << "Reed says NO.\n";
    std::cout << "You are furious. You know you can help.\n";
    std::cout << "What do you do?\n";
    std::cout << "1) Stay back per Reed's orders.\n";
    std::cout << "2) Disobey Reed's orders and rush to the scene.\n";
    std::cout << "Make your choice (1-2).\n";
    std::cin >> choice3;
  }
  else {
    avengerLevel--;
    std::cout << "You call the mysterious number... and a voice emerges...\n";
    std::cout << "The mysterious caller reveals themselves as Dr. Victor Von Doom.\n";
    std::cout << "He claims that he's been following your movements...\n";
    std::cout << "He claims that he sees great potential in you.\n";
    std::cout << "Swiftly after, he hangs up. You are confused.\n";
    std::cout << "Then, Doom sends you a location...\n";
    std::cout << "What do you do?\n";
    std::cout << "1) Delete the number and tell the Avengers.\n";
    std::cout << "2) Go to Doom's location.\n";
    std::cout << "Make your choice (1-2).\n";
    std::cin >> choice4;
  }
  
  int choice5;

  if (choice3 == 1) {
    avengerLevel++;
    std::cout << "Hawkeye, Falcon, The Winter Soldier, and She-Hulk were found\n dead at the Avengers Tower due to Doctor Doom's attack.";
    std::cout << "You have been promoted to the Senior Avengers Team. Congratulations!\n";
    return 0;
  }
  else {
    avengerLevel--;
    std::cout << "As you enter the scene, you see Doctor Doom blast She-Hulk 43 floors down.\n";
    std::cout << "When he returns, as he is about to blast The Winter Soldier, he makes eye contact with you...\n";
    std::cout << "He comes over to you and offers you one last chance to join him.\n";
    std::cout << "What do you choose?\n";
    std::cout << "1) Join Doctor Doom.\n";
    std::cout << "2) Do Not Join Doctor Doom.\n";
    std::cout << "Make your choice (1-2).\n";
    std::cin >> choice5;
  }

  int choice6;

  if (choice4 == 1) {
    avengerLevel++;
    std::cout << "Reed Richards sees potential in you and promotes you to the Fantastic 4\n to replace the late Thing.\n";
    std::cout << "Reed Richards wire taps Doctor Doom's number and gives him a fake location!\n";
    std::cout << "Doctor Doom is now stranded on Knowhere!\n";
    return 0;
  }
  else {
    avengerLevel--;
    std::cout << "As you reach Doctor Doom's location, you are surprised by the barren land around you.\n";
    std::cout << "Moments later, Doctor Doom emerges from the shadows.\n";
    std::cout << "As he gets closer, you question whether you made the right chioce.\n";
    std::cout << "Doctor Doom looks VERY menacing...\n";
    std::cout << "In a moment of panic, you struggle to decide whether you should flee or stay.\n";
    std::cout << "What do you do?\n";
    std::cout << "1) Flee the scene.\n";
    std::cout << "2) Stay resolute in your place.\n";
    std::cout << "Make your choice (1-2).\n";
    std::cin >> choice6;
  }

  if (choice5 == 1) {
    avengerLevel = avengerLevel - 2;
    std::cout << "Doctor Doom grins and accepts you. He takes you to Latveria, his homeland.\n";
    std::cout << "Doctor Doom gives you a new name...\n";
    std::cout << "Mister Negative!\n";
    return 0;
  }
  else {
    avengerLevel++;
    std::cout << "Disappointed, Doctor Doom shrieks in anger.\n";
    std::cout << "You try to flee the scene, but Doom gets to you...\n";
    std::cout << "He unleahes a powerful, purple blow...\n";
    std::cout << "You are dead.\n";
    return 0;
  }

  int choice7;
  int choice8;

  if (choice6 == 1) {
    avengerLevel++;
    std::cout << "Doctor Doom begins speedwalking towards you...\n";
    std::cout << "You find a ditch, and hide inside.\n";
    std::cout << "5 minutes pass, then 10, then 20... You hear nothing...\n";
    std::cout << "Scared out of your mind, you raise your head to see a deceased Doom,\n mutilated by the force of 100 trees.\n";
    std::cout << "Mister Fantastic had wire tapped your phone and sent Quicksilver to watch you!\n";
    std::cout << "You are safe! When you return to the Avengers Tower...\n";
    std::cout << "You are met with grins and frowns.\n";
    std::cout << "Iron Man walks up to you, and congratulates you on your mission.\n";
    std::cout << "Stark tells you that you have been invited to the Guardians of the Galaxy.\n";
    std::cout << "Do you accept Stark's offer?\n";
    std::cout << "1) Yes.\n";
    std::cout << "2) No.\n";
    std::cout << "Make your choice (1-2).\n";
    std::cin >> choice7;
  }
  else {
    avengerLevel = avengerLevel - 2;
    std::cout << "Doctor Doom arrives and offers to shake your hand.\n";
    std::cout << "You accept, and shake his hand.\n";
    std::cout << "With a smile on Doom's face, he takes you to his base in Latveria.\n";
    std::cout << "Doom then invites you to the Multiversal Parliament of Doom.\n";
    std::cout << "Do you accept Doom's offer?\n";
    std::cout << "1) Yes.\n";
    std::cout << "2) No.\n";
    std::cout << "Make your choice (1-2).\n";
    std::cin >> choice8;
  }

  if (choice7 == 1) {
    avengerLevel++;
    std::cout << "Congratulations, you are now a member of the Guardians of the Galaxy!\n";
    return 0;
  }
  else {
    std::cout << "Due to questionable decisions, you have been sent back to the Avengers Training Camp.\n";
    return 0;
  }

  if (choice8 == 1) {
    avengerLevel = avengerLevel - 2;
    std::cout << "Congratulations, you are now a member of the Multiversal Parliament of Doom!\n";
    return 0;
  }
  else {
    avengerLevel++;
    std::cout << "Doctor Doom's grin turns into a frown of anger.\n";
    std::cout << "Disappointed, Doom sends you away and warns you of a future attack to the Avengers Tower...";
    std::cout << "You decide that you don't want to be an Avenger or work with Doom...\n";
    std::cout << "You decide to become a rogue warrior.\n";
    return 0;
  }

  if (avengerLevel >= 3) {
    std::cout << "You are a great warrior with a great heart. A True Avenger!\n";
    return 0;
  }
  else if (avengerLevel > 0 && avengerLevel < 3) {
    std::cout << "You are a good warrior with a good heart. An Avenger!\n";
    return 0;
  }
  else if (avengerLevel == 0) {
    std::cout << "You have a broad moral spectrum. You are neither good or bad.\n";
    return 0;
  }
  else if (avengerLevel >= -2 && avengerLevel <= -1) {
    std::cout << "You have ill intentions. You are a villain!\n";
    return 0;
  }
  else {
    std::cout << "You have very ill intentions. You are a supervillain!\n";
    return 0;
  }



}
