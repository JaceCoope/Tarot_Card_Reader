//
// Created by Jace Cooper on 3/3/2022.
//

#ifndef TAROT_CARD_READER_TAROT_CARD_RESOURCES_H
#define TAROT_CARD_READER_TAROT_CARD_RESOURCES_H
#include <fstream>


class TarotCards
{
private:
    int numOfCards = 78;
    std::string wands = "wands";
    std::string cups = "cups";
    std::string swords = "swords";
    std::string pentacles = "pentacles";
    TarotCards(int cardNum, std::string cardName);


};

#endif //TAROT_CARD_READER_TAROT_CARD_RESOURCES_H
