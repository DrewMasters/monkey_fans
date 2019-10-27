#include "monkey.h"

#include <iostream>

monkey::monkey()
{
   srand(time(NULL));
}

monkey::monkey(std::string favTeam)
{
   favoriteTeam = favTeam;
   srand(time(NULL));
}

monkey::~monkey()
{

}

void monkey::setFavoriteTeam(std::string favTeam)
{
   favoriteTeam = favTeam;
}

std::string monkey::getFavoriteTeam()
{
   return favoriteTeam;
}

void monkey::updateTeam(std::string opponent, int result)
{
   //result = 0 => lose
   //result = 1 => win
   if (result == 0)
   {
      //favorite team lost so need to reevaluate fandom
      int coinFlip;

      coinFlip = rand() % 2;
      if (coinFlip == 0)
      {
         favoriteTeam = opponent;
      }
      else
      {
         favoriteTeam = favoriteTeam;
      }
   }
   else if (result == 1)
   {
      //favorite team won so all is good nothing to be done
      favoriteTeam = favoriteTeam;
   }
   else
   {
      //bad result supplied
      //throw exception here
   }
}
