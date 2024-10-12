#ifndef CARD_H
#define MY_CLASS_H

namespace Poker {
    enum class Rank {
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack,
        Queen,
        King,
        Ace
    };

    enum class Suit {
        Clubs,
        Diamonds,
        Hearts,
        Spades
    };


    struct Card {
        Rank rank;
        Suit suit;
    };
}
#endif /* MY_CLASS_H */
