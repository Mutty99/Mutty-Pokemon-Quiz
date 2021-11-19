#include "Question.h"
#include <cstdlib>
#include <unistd.h>

void GameOverSequence(const std::string& catchphrase, int special = 0) {
    std::cout << std::endl << catchphrase << std::endl;
    if (special == 0)
        std::cout << "*Snow ti spazza via, facendoti precipitare nel vuoto.*\nGAME OVER\n";
    else if (special == 1)
        std::cout << "*Una forza misteriosa ti spazza via, facendoti precipitare nel vuoto.*\nGAME OVER\n";
    else if (special == 2)
        std::cout << "*Dopo che Arceus ha finito di parlare, senti un forte dolore all'addome, "
                     "e il tuo spirito viene eliminato all'istante.*\nGAME OVER\n";
    sleep(7);
}

int main() {
    std::string password, finalPass, tOption = "???";
    bool runtime = true, unlocked = false, locked = true;
    int choice, counter = 3, score = 0, scenery;
    std::cout << "Benvenuto al Quiz Pokemon di Mutty!\n\n";
    while (runtime) {
        std::cout << "MENU PRINCIPALE:\n";
        std::cout << "1) Gioca\n2) Istruzioni\n3) " << tOption << "\n4) Esci\n";
        std::cin >> choice;

        switch(choice) {
            case 1: {
                std::cout << "\nMolto bene, cominciamo!\n\nDomanda 1/10 (Difficolta': Infante):\n";
                Question one("Quale pokemon e' presente nella copertina di Pokemon Rosso?",
                             "Pikachu","Charizard","Groudon","Yveltal",2);
                Question::QuestionGUI(one);
                if (one.isCorrect())
                    score += 1;
                std::cout << "Domanda 2/10 (Difficolta': Molto Facile):\n";
                Question two("Nella serie animata, qual e' il primo pokemon catturato da Ash?",
                             "Caterpie","Pikachu","Pidgey","Bulbasaur",1);
                Question::QuestionGUI(two);
                if (two.isCorrect())
                    score += 1;
                std::cout << "Domanda 3/10 (Difficolta': Facile):\n";
                Question three("Quale di questi pokemon non e' di tipo Coleottero?",
                             "Scizor","Pinsir","Heracross","Gliscor",4);
                Question::QuestionGUI(three);
                if (three.isCorrect())
                    score += 1;
                std::cout << "Domanda 4/10 (Difficolta': Facile/Medio):\n";
                Question four("In quale di questi giochi puoi catturare un pokemon leggendario prima degli altri?",
                               "Rosso Fuoco e Verde Foglia","Nero e Bianco","Platino","X e Y",1);
                Question::QuestionGUI(four);
                if (four.isCorrect())
                    score += 1;
                std::cout << "Domanda 5/10 (Difficolta': Medio):\n";
                Question five("Nella serie animata, quale di questi pokemon NON e' stato liberato da Ash?",
                              "Pidgeot","Naganadel","Primeape","Greninja",3);
                Question::QuestionGUI(five);
                if (five.isCorrect())
                    score += 1;
                std::cout << "Domanda 6/10 (Difficolta': Medio):\n";
                Question six("Ad oggi, quale di questi tipi non e' mai stato padroneggiato da un Superquattro?",
                              "Veleno","Erba","Volante","Acciaio",2);
                Question::QuestionGUI(six);
                if (six.isCorrect())
                    score += 1;
                std::cout << "Domanda 7/10 (Difficolta': Difficile):\n";
                Question seven("Quale di questi pokemon non appare nel film Detective Pikachu?",
                             "Gyarados","Flareon","Torterra","Vaporeon",4);
                Question::QuestionGUI(seven);
                if (seven.isCorrect())
                    score += 1;
                std::cout << "Domanda 8/10 (Difficolta': Molto Difficile):\n";
                Question eight("Fino all'Ottava Generazione, qual e' l'indice Pokedex piu' alto?",
                             "900","898","899","897",2);
                Question::QuestionGUI(eight);
                if (eight.isCorrect())
                    score += 1;
                std::cout << "Domanda 9/10 (Difficolta': Smodata):\n";
                Question nine("Quale di questi oggetti evento non esiste?",
                             "Biglietto Origine","Biglietto Uovo","Mappa Stinta","Biglietto Magico",1);
                Question::QuestionGUI(nine);
                if (nine.isCorrect())
                    score += 1;
                std::cout << "Domanda 10/10 (Difficolta': IMPOSSIBILE):\n";
                Question ten("Quale di questi pokemon, come cita il Pokedex, puo' vivere nella lava a temperature molto alte?",
                             "Magcargo","Moltres","Rhydon","Magmar",3);
                Question::QuestionGUI(ten);
                if (ten.isCorrect())
                    score += 1;
                std::cout << "E... Fine! Vediamo com'e' andata.\n\n";
                std::cout << "Punteggio finale: " << score << "/10.\nIl tuo profilo: ";
                if (score >= 0 && score <= 4) {
                    std::cout << "Pigliamosche\n\nCi vorra' diverso tempo prima che tu possa definirti un Veterano Pokemon, ma non te la prendere!"
                                 "\nPotresti anche essere un esperto di un'altra serie in cui il novellino potrei essere io, non si sa mai.\n";
                    std::cout << "Grazie per aver giocato al mio quiz, alla prossima!\n";
                }
                else if (score >= 5 && score <= 7) {
                    std::cout << "Capopalestra\n\nSenza infamia e senza lode: stai nel grigio, nell'equatore, nella media.\n";
                    std::cout << "Spero ti sia divertito con questo piccolo 'gioco', alla prossima!\n";
                }
                else if (score >= 8 && score <= 9) {
                    std::cout << "Superquattro\n\nBella giocata! Hai dimostrato un'ottima conoscenza del franchise Pokemon.\n";
                    std::cout << "Grazie per aver giocato al mio quiz, alla prossima!\n";
                }
                else if (score == 10) {
                    std::cout << "Campione\n\nPER LA MADRE DI ARCEUS! Ce l'hai fatta! Rigiocato o meno, la tua conoscenza e' incredibile!\n";
                    std::cout << "Visto che non hai commesso errori, ti daro' qualcosa che ti tornera' utile per la tua prossima avventura:\n\n";
                    std::cout << "https://www.youtube.com/user/Shippiddge\nErCoccodrillo\n\nChe Arceus sia con te, Maestro Pokemon...\n";
                }
                std::cout << std::endl;
                system("pause");
                runtime = false;
                break;
            }
            case 2: {
                std::cout << "\nDigita il numero corrispondente a quella che pensi sia la risposta giusta alla domanda proposta a schermo.\n";
                std::cout << "Se digiterai un carattere che non sia 1,2,3 o 4, contera' come risposta errata.\n";
                std::cout << "Prova a finire il quiz senza sbagliare mai! Potrebbe accadere qualcosa di speciale...\n\n";
                break;
            }
            case 3: {
                if (unlocked) {
                    if (scenery == 1) {
                        std::cout << "\nINFIME VIAGGIATORE! Sei entrato in terra sacra.\n"
                                     "Io sono Snow: se vuoi passare, dimostra che la tua conoscenza e' ineluttabile.\n\n";
                        std::cout
                                << "Ti interroghero' sulla serie animata 'Starter Squad' di Shippiddge: ti attendono 10 domande,\nuna per ";
                        std::cout
                                << "ogni episodio rilasciato fino al 2021.\nApriro' i miei cancelli solo se le indovinerai tutte, altrimenti un destino ";
                        std::cout << "orribile ti attende.\nNon puoi commettere errori.\n\n";
                        sleep(12);
                        std::cout << "Che la prova abbia inizio.\n\n";
                        std::cout << "Episodio 1/10: Scegli uno Starter!\n";
                        Question sOne("Cosa dice Squirtle per convincere l'allenatore a sceglierlo come compagno di viaggio?",
                                      "Ti posso aiutare quando hai sete!",
                                      "Sono utile anche nei casi di emergenza!",
                                      "Sono piu' forte di Charmander!",
                                      "Scegli me, scegli me!", 2);
                        Question::SquadGUI(sOne);
                        if (!sOne.isCorrect()) {
                            GameOverSequence("Che pagliacciata. FUORI DAI PIEDI!");
                            runtime = false;
                            break;
                        }
                        std::cout
                                << "\nEsatto, ma non ti accomodare; le prossime saranno molto piu' difficili.\n\n";
                        std::cout << "Episodio 2/10: Un Incontro Selvatico\n";
                        Question sTwo("Quale mossa Squirtle NON conosce alla fine dell'episodio?",
                                      "Azione", "Colpocoda", "Ritirata", "Bolla", 3);
                        Question::SquadGUI(sTwo);
                        if (!sTwo.isCorrect()) {
                            GameOverSequence("Dilettante. SPARISCI!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nHai un occhio attento! Avanti con la prossima.\n\n";
                        std::cout << "Episodio 3/10: Scontro a Smeraldopoli\n";
                        Question sThree("Chi sono le ragazze a cui Bulbasaur chiede indicazioni?",
                                        "Vera e Rina", "Anita e Rina", "Vera e Anita", "Vera e Verde", 1);
                        Question::SquadGUI(sThree);
                        if (!sThree.isCorrect()) {
                            GameOverSequence("Risposta sbagliata, CREPA!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nPerfetto, abbiamo un esperto di waifu... Avanti.\n\n";
                        std::cout << "Episodio 4/10: L'agguato dei Caterpie\n";
                        Question sFour(
                                "Ad un certo punto, si sentono effetti sonori di un famoso videogioco; di che gioco si tratta?",
                                "New Super Mario Bros", "Super Mario 64", "Super Mario Bros 3", "Super Mario World", 4);
                        Question::SquadGUI(sFour);
                        if (!sFour.isCorrect()) {
                            GameOverSequence("Fine della corsa. HAI PERSO!");
                            runtime = false;
                            break;
                        }
                        std::cout
                                << "\nNon mi aspettavo che la indovinassi, forse non sei cosi' infime.\n\n";
                        std::cout << "Episodio 5/10: Charmander riceve un pugno in faccia\n";
                        Question sFive("Quale fossile tiene in mano Gavin?",
                                       "Domofossile", "Helixfossile", "Ambra Antica", "Non tiene in mano fossili", 2);
                        Question::SquadGUI(sFive);
                        if (!sFive.isCorrect()) {
                            GameOverSequence("Ed hai... SBAGLIATO!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nNiente male, sei a meta' strada. Ora preparati"
                                     ", formichina, se non vuoi passare un brutto quarto d'ora.\n\n";
                        std::cout << "Episodio 6/10: Il Re della Foresta\n";
                        Question sSix("Quante Sfide della Foresta falliscono i nostri eroi?",
                                      "8", "9", "10", "11", 3);
                        Question::SquadGUI(sSix);
                        if (!sSix.isCorrect()) {
                            GameOverSequence("NO-NO! Non essere in grado di contare e' imbarazzante, sai? Eclissati.");
                            runtime = false;
                            break;
                        }
                        std::cout
                                << "\nQuesta sono sicuro che l'hai sbirciata, formichina. "
                                   "Vabbe' lascia perdere, non c'e' tempo per queste sciocchezze.\n\n";
                        std::cout << "Episodio 7/10: Combatti il Fuoco con il Fuoco\n";
                        Question sSeven("Il Leader dei Caterpie ha dei kanji scritti sulla bandana: che cosa significano?",
                                        "Vendetta", "Uccidere", "Perseveranza", "Giustizia", 1);
                        Question::SquadGUI(sSeven);
                        if (!sSeven.isCorrect()) {
                            GameOverSequence("Sei arrivato cosi' lontano per nulla. SEI FINITO!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nImpressionante, non c'e' che dire.\n\n";
                        std::cout << "Episodio 8/10: Ooo Guardami sono un grosso Fantasma Spaventoso\n";
                        Question sEight("Qual e' il soprannome di Sandshrew (nella versione originale di Shippiddge)?",
                                        "Sandy", "Dave", "Richard", "Toby", 4);
                        Question::SquadGUI(sEight);
                        if (!sEight.isCorrect()) {
                            GameOverSequence("Non otterrai una morte indolore. A VALLE!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nNessuno e' mai arrivato fin qui, la tua conoscenza e' decisamente sopra la media!\n"
                                     "Ricorda pero', se sbagli le prossime domande avrai fatto tutta questa fatica per niente.\n\n";
                        std::cout << "Episodio 9/10: La Lucertola\n";
                        Question sNine("In quale tipo di ball e' contenuto Golem?",
                                       "Poke Ball", "Mega Ball", "Ultra Ball", "Minor Ball", 3);
                        Question::SquadGUI(sNine);
                        if (!sNine.isCorrect()) {
                            GameOverSequence("DEGENERATO! Pagherai per questo sbaglio, con la vita!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nEsatto! E ora, solo una domanda ti separa dalla salvezza.\n"
                                     "Sarebbe brutto se sbagliassi proprio ora, quindi prendi tutto il tempo che ti serve.\n\n";
                        std::cout << "Episodio 10/10: La Leggenda del Tipo dal Guscio Blu\n";
                        Question sTen("Perche' Squirtle e' stato leale al Leader dei Caterpie al 100% prima di essere liberato?",
                                      "Perche' e' passato dalla parte dei cattivi.",
                                      "Perche' aveva paura che Caterpie rompesse la sua ball al rientro, di fatto corrompendolo.",
                                      "Perche' aveva paura di tradire il suo 'allenatore'.",
                                      "Non e' vero, ha tradito Caterpie almeno una volta.", 2);
                        Question::SquadGUI(sTen);
                        std::cout << "... ";
                        sleep(1);
                        if (!sTen.isCorrect()) {
                            GameOverSequence("Davvero un peccato, ce l'avevi quasi fatta. ADDIO, FORMICHINA!");
                            runtime = false;
                            break;
                        }
                        std::cout << "\nSono senza parole. Complimenti, hai superato la prova!\n";
                        std::cout << "Uh, che c'e' adesso? Oh, ok, obbedisco immediatamente.\n";
                        std::cout
                                << "Ascolta, infime viaggiatore! Gli Dei mi hanno parlato, e ti vogliono riferire alcune parole molto importanti.\n";
                        std::cout
                                << "Ascolta attentamente, perche' non le ripetero'!\n\nBuongustaio\nIridium\n\n";
                        std::cout << "Se vuoi parlare con i miei Dei, torna nel mio antro; ora VAI!\n\n";
                        system("pause");
                        runtime = false;
                        break;
                    }
                    else if (scenery == 2) {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        std::cout << "\n*Arrivi in cima al Monte Corona; un attimo dopo, delle scale color arcobaleno appaiono di fronte a te.*\n"
                                     "*Arrivato in cima, raggiungi lo Spazio Origine e incontri Arceus, il Pokemon Primevo, creatore di ogni cosa.*\n";
                        std::cout << "Figlio mio, se sei veramente riuscito a passare oltre il guardiano Snow, pronuncia la parola d'ordine.\n";
                        getline(std::cin,finalPass);
                        if (finalPass != "Iridium") {
                            GameOverSequence("Impostore. Sei la vergogna dell'intero universo. VAI ALL'INFERNO!",2);
                            runtime = false;
                            break;
                        }
                        else {
                            std::cout << "\nSei veramente tu. Avvicinati, Figlio mio.\n";
                            std::cout << "*Una luce intensa comincia a brillare sopra Arceus, accecandoti per diversi secondi*.\n";
                            sleep(5);
                            std::cout << "\nSe sei arrivato fin qui, vuol dire che hai finito il gioco, Congratulazioni! Prendi questa password:\n\n";
                            std::cout << "3wUwsZz\n\n";
                            std::cout << "Spero tu ti sia divertito; se capisci come usare la password che ti ho appena dato,\n";
                            std::cout << "puoi ottenere un Pokemon molto speciale come ricompensa per aver completato questo 'videogame'.\n";
                            std::cout << "Se puoi modificare il tuo salvataggio, puoi anche portarlo sulla tua cartuccia di gioco!\n";
                            std::cout << "Se ti e' piaciuto questo quiz, non esitare a condividerlo con altre persone amanti del franchise.\n";
                            std::cout << "Ti auguro il meglio, Maestro Pokemon. Alla prossima!\n\nGIOCO 100% COMPLETATO\n\n";
                            system("pause");
                            runtime = false;
                            break;
                        }
                    }
                }
                else {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout << "\nInserisci una password:\n";
                    do {
                        getline(std::cin, password);
                        if (password == "ErCoccodrillo") {
                            unlocked = true;
                            tOption = "Antro di Snow";
                            std::cout << "\nArea Segreta Sbloccata!\n\n";
                            locked = false, scenery = 1;
                        } else if (password == "Buongustaio") {
                            std::cout << "\nSei tornato veramente, viaggiatore. Passa pure, ma attento: non puoi ingannare i miei Dei.\n";
                            unlocked = true;
                            tOption = "Vetta Lancia";
                            std::cout << "Ora hai accesso alla Vetta Lancia!\n\n";
                            locked = false, scenery = 2;
                        } else {
                            counter--;
                            if (counter != 0) {
                                std::cout << "Password sbagliata! Tentativi rimasti: " << counter << std::endl;
                            } else {
                                GameOverSequence("DEGENERATO! Per questo errore, pagherai IL PREZZO PIU' GRANDE!",1);
                                runtime = false;
                                locked = false;
                            }
                        }
                    }while(locked);
                }
                break;
            }
            case 4: {
                std::cout << "\nSpegnimento in corso...\n";
                sleep(2);
                runtime = false;
                break;
            }
            default: {
                std::cout << "\nOpzione non valida. Spegnimento in corso...\n";
                sleep(2);
                runtime = false;
                break;
            }
        }
    }
}
