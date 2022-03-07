//
// Created by Jace Cooper on 3/3/2022.
//

#ifndef TAROT_CARD_READER_TAROT_CARD_RESOURCES_H
#define TAROT_CARD_READER_TAROT_CARD_RESOURCES_H
#include <fstream>





class TarotCards
{
private:
    const static int numOfCards = 78;
    std::string wand = "wands";
    std::string cup = "cups";
    std::string sword = "swords";
    std::string pentacle = "pentacles";
    std::string wands[14];
    std::string cups[14];
    std::string swords[14];
    std::string pentacles[14];
    int cardNum;
    std::string cardName;
    std::string past;
    std::string present;
    std::string future;
    std::string invertedPast;
    std::string invertedPresent;
    std::string invertedFuture;
    std::string desription;
    TarotCards(int cardNum, std::string cardName, std::string desription, std::string past,
               std::string invertedPast, std::string present, std::string invertedPresent,
               std::string future, std::string invertedFuture);
    TarotCards* buildWands();
    TarotCards* buildCups();
    TarotCards* buildSwords();
    TarotCards* buildPentacles();
};

TarotCards::TarotCards(int cardNum, std::string cardName, std::string desription,
                       std::string past, std::string invertedPast,
                       std::string present, std::string invertedPresent,
                       std::string future,std::string invertedFuture)
{
    this->cardNum = cardNum;
    this->cardName = cardName;
    this->desription = desription;
    this->past = past;
    this->invertedPast = invertedPast;
    this->present = present;
    this->invertedPresent = invertedPresent;
    this->future = future;
    this->invertedFuture = invertedFuture;
}

TarotCards *TarotCards::buildWands()
{
    return nullptr;
}

TarotCards *TarotCards::buildCups()
{
    return nullptr;
}

TarotCards *TarotCards::buildSwords()
{
    return nullptr;
}

TarotCards *TarotCards::buildPentacles()
{
    return nullptr;
}


#endif //TAROT_CARD_READER_TAROT_CARD_RESOURCES_H
