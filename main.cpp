#include "Question.h"
#include <cstdlib>
#include <unistd.h>

void GameOverSequence(const std::string& catchphrase, int special = 0) {
    std::cout << std::endl << catchphrase << std::endl;
    if (special == 0)
        std::cout << "*Snow blows you away, making you fall to your death.*\nGAME OVER\n";
    else if (special == 1)
        std::cout << "*A mysterious force blows you away, making you fall to your death.*\nGAME OVER\n";
    else if (special == 2)
        std::cout << "*After Arceus finished talking, you feel an intense pain in your abdomen, "
                     "and your spirit gets vanquished on the spot.*\nGAME OVER\n";
    sleep(7);
}

int main() {
    std::string password, finalPass, tOption = "???";
    bool runtime = true, unlocked = false, locked = true;
    int choice, counter = 3, score = 0, scenery;
    std::cout << "Welcome to Mutty's Pokemon Quiz!\n\n";
    while (runtime) {
        std::cout << "MAIN MENU:\n";
        std::cout << "1) Play\n2) How to play\n3) " << tOption << "\n4) Exit\n";
        std::cin >> choice;

        switch(choice) {
            case 1: {
                std::cout << "\nVery well, let's begin!\n\nQuestion 1/10 (Difficulty: Baby):\n";
                Question one("Which pokemon is present in the cover of Pokemon Red?",
                             "Pikachu","Charizard","Groudon","Yveltal",2);
                Question::QuestionGUI(one);
                if (one.isCorrect())
                    score += 1;
                std::cout << "Question 2/10 (Difficulty: Ultra Easy):\n";
                Question two("In the anime series, which is the first pokemon captured by Ash?",
                             "Caterpie","Pikachu","Pidgey","Bulbasaur",1);
                Question::QuestionGUI(two);
                if (two.isCorrect())
                    score += 1;
                std::cout << "Question 3/10 (Difficulty: Easy):\n";
                Question three("Which of these pokemon is not a Bug type?",
                             "Scizor","Pinsir","Heracross","Gliscor",4);
                Question::QuestionGUI(three);
                if (three.isCorrect())
                    score += 1;
                std::cout << "Question 4/10 (Difficulty: Easy/Medium):\n";
                Question four("In which games you can capture a legendary pokemon the earliest?",
                               "FireRed and LeafGreen","Black and White","Platinum","X and Y",1);
                Question::QuestionGUI(four);
                if (four.isCorrect())
                    score += 1;
                std::cout << "Question 5/10 (Difficulty: Medium):\n";
                Question five("In the anime series, which of these pokemon has NOT been released by Ash?",
                              "Pidgeot","Naganadel","Primeape","Greninja",3);
                Question::QuestionGUI(five);
                if (five.isCorrect())
                    score += 1;
                std::cout << "Question 6/10 (Difficulty: Medium):\n";
                Question six("As of Generation 8, which type has never come up in the Elite Four?",
                              "Poison","Grass","Flying","Steel",2);
                Question::QuestionGUI(six);
                if (six.isCorrect())
                    score += 1;
                std::cout << "Question 7/10 (Difficulty: Hard):\n";
                Question seven("Which of these pokemon don't appear in the movie Detective Pikachu?",
                             "Gyarados","Flareon","Torterra","Vaporeon",4);
                Question::QuestionGUI(seven);
                if (seven.isCorrect())
                    score += 1;
                std::cout << "Question 8/10 (Difficulty: Very Hard):\n";
                Question eight("Up to generation 8, what's the highest Pokedex index number?",
                             "900","898","899","897",2);
                Question::QuestionGUI(eight);
                if (eight.isCorrect())
                    score += 1;
                std::cout << "Question 9/10 (Difficulty: Insane):\n";
                Question nine("Which of these Event Items does not exist?",
                             "Origin Ticket","Egg Ticket","Old Sea Map","Mystic Ticket",1);
                Question::QuestionGUI(nine);
                if (nine.isCorrect())
                    score += 1;
                std::cout << "Question 10/10 (Difficulty: IMPOSSIBLE):\n";
                Question ten("Which of these pokemon, as the Pokedex states, can live in molten lava at very high temperatures?",
                             "Magcargo","Moltres","Rhydon","Magmar",3);
                Question::QuestionGUI(ten);
                if (ten.isCorrect())
                    score += 1;
                std::cout << "And... that's it! Let's see how you did.\n\n";
                std::cout << "Total score: " << score << "/10.\nYour profile: ";
                if (score >= 0 && score <= 4) {
                    std::cout << "Bug Catcher\n\nYou still have a long way to go if you want to call yourself a Pokemon Veteran, but don't take"
                                 " it too harshly!\nProbably you know much more about another series where I'm a newbie as well, you never know.\n";
                    std::cout << "Thanks for playing my quiz, see ya next time!\n";
                }
                else if (score >= 5 && score <= 7) {
                    std::cout << "Gym Leader\n\nNeither veteran nor rookie: you stay in the grey, in the middle line, in the average zone.\n";
                    std::cout << "I hope you had a good time taking on this little game, see ya!\n";
                }
                else if (score >= 8 && score <= 9) {
                    std::cout << "Elite Four\n\nNice run! You've demonstrated a good knowledge of the Pokemon franchise and proven your skills.\n";
                    std::cout << "Thanks for playing my quiz, see ya next time!\n";
                }
                else if (score == 10) {
                    std::cout << "League Champion\n\nSWEET MOTHER OF ARCEUS! You did it! Replayed through or not, your knowledge is wondrous!\n";
                    std::cout << "Since you've achieved a perfect score, I'll give you something that will aid you in your next quest:\n\n";
                    std::cout << "https://www.youtube.com/user/Shippiddge\n7a2b3l1u0e2y1\n\nMay Arceus be with you, Pokemon Master...\n";
                }
                std::cout << std::endl;
                system("pause");
                runtime = false;
                break;
            }
            case 2: {
                std::cout << "\nSimply press the number corresponding to the option you think is the right answer to the prompted question.\n";
                std::cout << "If you type another number other than 1,2,3 or 4, it will count as a wrong answer.\n";
                std::cout << "Try getting a perfect score! Something special might occur...\n\n";
                break;
            }
            case 3: {
                if (unlocked) {
                    if (scenery == 1) {
                        std::cout << "\nPUNY TRAVELLER! You've stumbled upon sacred ground. "
                                     "I'm Snow: if you wish to pass, prove your knowledge is inevitable.\n\n";
                        std::cout
                                << "I'll now interrogate you about the 'Starter Squad' series by Shippiddge: 10 questions are awaiting you,\none for ";
                        std::cout
                                << "each episode currently released up to 2021.\nOnly if you get all of them right I'll open my gates, else a gruesome ";
                        std::cout << "death awaits you. No mistake is allowed.\n\n";
                        sleep(12);
                        std::cout << "Now, let's begin your trial.\n\n";
                        std::cout << "Episode 1/10: Choose A Starter!\n";
                        Question sOne("What does Squirtle say to make the new trainer choose him as a Starter?",
                                      "I can help you if you feel thirsty!",
                                      "I'm also a flotation device in the case of an emergency!",
                                      "I'm stronger than Charmander!",
                                      "Pick me, pick me!", 2);
                        Question::SquadGUI(sOne);
                        if (!sOne.isCorrect()) {
                            GameOverSequence("What a joke. GET OUT OF MY SIGHT!");
                            runtime = false;
                            break;
                        }
                        std::cout
                                << "\nCorrect, but don't get too cozy; this was nothing compared to what's to come.\n\n";
                        std::cout << "Episode 2/10: A Wild Encounter\n";
                        Question sTwo("Which move Squirtle does NOT know by the end of this episode?",
                                      "Tackle", "Tail Whip", "Withdraw", "Bubble", 3);
                        Question::SquadGUI(sTwo);
                        if (!sTwo.isCorrect()) {
                            GameOverSequence("Unamusing. BEGONE!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nSome keen eye you've got there! Let's proceed with the next one.\n\n";
                        std::cout << "Episode 3/10: Showdown At Viridian\n";
                        Question sThree("Who are the girls to whom Bulbasaur asks for directions?",
                                        "May and Rosa", "Hilda and Rosa", "May and Hilda", "May and Leaf", 1);
                        Question::SquadGUI(sThree);
                        if (!sThree.isCorrect()) {
                            GameOverSequence("Wrong answer, DIE!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nGreat, we've got a waifu expert here... Onward.\n\n";
                        std::cout << "Episode 4/10: The Caterpie Ambush\n";
                        Question sFour(
                                "At some point, sound effects from a game are used in the episode; what is that game?",
                                "New Super Mario Bros", "Super Mario 64", "Super Mario Bros 3", "Super Mario World", 4);
                        Question::SquadGUI(sFour);
                        if (!sFour.isCorrect()) {
                            GameOverSequence("End of the line for you. TIME TO PERISH!");
                            runtime = false;
                            break;
                        }
                        std::cout
                                << "\nI didn't expect you to get that one right, maybe you're not so bad after all.\n\n";
                        std::cout << "Episode 5/10: Charmander Gets Punched in the Face\n";
                        Question sFive("Which fossil is Gavin holding on his hand?",
                                       "Dome Fossil", "Helix Fossil", "Old Amber", "He's holding no fossil", 2);
                        Question::SquadGUI(sFive);
                        if (!sFive.isCorrect()) {
                            GameOverSequence("And it's.... WRONG!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nYou've managed to get halfway through the trial, I see. You better"
                                     " be prepared, prawn, because now things will get ugly.\n";
                        std::cout << "Episode 6/10: The Forest King\n";
                        Question sSix("How many Forest Challenges does the Squad fail?",
                                      "8", "9", "10", "11", 3);
                        Question::SquadGUI(sSix);
                        if (!sSix.isCorrect()) {
                            GameOverSequence("NA-AH! Not being able to count is embarrassing, isn't it? Succumb.");
                            runtime = false;
                            break;
                        }
                        std::cout
                                << "\nI bet you looked the answer up, prawn. Whatever, we don't have time for such silliness.\n\n";
                        std::cout << "Episode 7/10: Fight Fire With Fire\n";
                        Question sSeven("Caterpie Leader has kanji written on its headband: what do they mean?",
                                        "Revenge", "Kill", "Perseverance", "Justice", 1);
                        Question::SquadGUI(sSeven);
                        if (!sSeven.isCorrect()) {
                            GameOverSequence("So far, yet so incorrect. YOU'RE FINISHED!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nImpressive, I must say.\n\n";
                        std::cout << "Episode 8/10: Ooo Look At Me I'm A Big Scary Ghost\n";
                        Question sEight("What is Sandshrew's nickname?",
                                        "Sandy", "Dave", "Richard", "Toby", 4);
                        Question::SquadGUI(sEight);
                        if (!sEight.isCorrect()) {
                            GameOverSequence("Your life isn't going to end peacefully. FALL!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nNobody ever got this far, your knowledge is definitely above average!\n"
                                     "Remember though, even the smallest mistake will lead you to your doom.\n\n";
                        std::cout << "Episode 9/10: The Lizard Slayer\n";
                        Question sNine("In which type of ball Golem is kept in?",
                                       "Poke Ball", "Great Ball", "Ultra Ball", "Minor Ball", 3);
                        Question::SquadGUI(sNine);
                        if (!sNine.isCorrect()) {
                            GameOverSequence("FOOL! You'll pay for this mistake, with your life!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nCorrect! Now, only one question separates you from completing the trial.\n"
                                     "It would suck if you failed at this point, so take all the time you need.\n\n";
                        std::cout << "Episode 10/10: Legend of Blue Shell Man Guy\n";
                        Question sTen("Why has Squirtle been 100% loyal to the Caterpie Leader before getting freed?",
                                      "Because he went to the dark side.",
                                      "Because he was afraid to get his ball smashed, and therefore corrupted.",
                                      "Because he was scared to disappoint his 'trainer'.",
                                      "That's not true, he betrayed him at least once", 2);
                        Question::SquadGUI(sTen);
                        std::cout << "... ";
                        sleep(1);
                        if (!sTen.isCorrect()) {
                            GameOverSequence("What a shame, you were so close. IT'S OVER FOR YOU, PRAWN!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nI'm at a loss for words. You actually did it, Congratulations!\n";
                        std::cout << "Uh, what is- Oh, alright, I'll obey immediately.\n";
                        std::cout
                                << "Listen, puny traveller! My gods have spoken, and decided to tell you two important words you must remember.\n";
                        std::cout
                                << "Listen carefully, because I'm not going to repeat myself!\n\nDobiffPeanut\nHo-Oh\n\n";
                        std::cout << "If you want to speak to my gods, come back in my lair; now SCRAM!\n\n";
                        system("pause");
                        runtime = false;
                        break;
                    }
                    else if (scenery == 2) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        std::cout << "\n*You arrive to the top of Mt. Coronet; one split second later, iridescent stairs appear in front of you.*\n"
                                     "*After climbing them, you reach Hall of Origin and meet Arceus, the Alpha Pokemon, creator of all things.*\n";
                        std::cout << "My child, if you truly managed to pass through Snow the Guardian, speak the word.\n";
                        getline(std::cin,finalPass);
                        if (finalPass != "Ho-Oh") {
                            GameOverSequence("Imposter. You are a disgrace to us all. FALL TO YOUR DOOM!",2);
                            runtime = false;
                            break;
                        }
                        else {
                            std::cout << "\nIt really is you. Come closer, my child.\n";
                            std::cout << "*An intense light flashes above Arceus, forbidding you to see what is actually going on*.\n";
                            sleep(5);
                            std::cout << "\nIf you've come this far, it means you've completed my game, Congratulations! Have this:\n\n";
                            std::cout << "3wUwsZz\n\n";
                            std::cout << "I hope you had a good time; if you figure out how to use this last password I just gave you,\n";
                            std::cout << "you can get a very special pokemon as a reward for completing the game.\n";
                            std::cout << "If you can edit your game save, you can bring it to your cartridge as well!\n";
                            std::cout << "If you enjoyed this quiz, please share it with other fans of this franchise.\n";
                            std::cout << "I wish you the best, Pokemon Master. See ya!\n\nGAME 100% COMPLETED\n\n";
                            system("pause");
                            runtime = false;
                            break;
                        }
                    }
                }
                else {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "\nInsert a password:\n";
                    do {
                        getline(std::cin, password);
                        if (password == "7a2b3l1u0e2y1") {
                            unlocked = true;
                            tOption = "Snow Way";
                            std::cout << "\nSecret Area Unlocked!\n\n";
                            locked = false, scenery = 1;
                        } else if (password == "DobiffPeanut") {
                            std::cout << "\nSo you've returned, traveller. You may pass, but watch your back: you can't fool the will of my gods.\n";
                            unlocked = true;
                            tOption = "Spear Pillar";
                            std::cout << "You now have access to Spear Pillar!\n\n";
                            locked = false, scenery = 2;
                        } else {
                            counter--;
                            if (counter != 0) {
                                std::cout << "Wrong password! Attempts left: " << counter << std::endl;
                            } else {
                                GameOverSequence("FOOL! For this mistake, you will pay the ULTIMATE PRICE!",1);
                                runtime = false;
                                locked = false;
                            }
                        }
                    }while(locked);
                }
                break;
            }
            case 4: {
                std::cout << "\nShutting down...\n";
                sleep(2);
                runtime = false;
                break;
            }
            default: {
                std::cout << "\nInvalid option. Shutting down...\n";
                sleep(2);
                runtime = false;
                break;
            }
        }
    }
}
