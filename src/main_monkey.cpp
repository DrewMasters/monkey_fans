#include "sim.h"
#include "monkey.h"

#include <iostream>

int main()
{
   monkey testFan1 = monkey();
   monkey testFan2 = monkey("team2");
   std::string favTeam1;
   std::string favTeam2;

   favTeam1 = testFan1.getFavoriteTeam();
   favTeam2 = testFan2.getFavoriteTeam();

   std::cout << "favTeam1: " << favTeam1 << std::endl;
   std::cout << "favTeam2: " << favTeam2 << std::endl;
   std::cout << std::endl;

   testFan1.setFavoriteTeam("team1");
   favTeam1 = testFan1.getFavoriteTeam();
   std::cout << "favTeam1: " << favTeam1 << std::endl;
   std::cout << std::endl;

   testFan1.updateTeam("team2", 0);
   testFan2.updateTeam("team2", 1);

   std::cout << "favTeam1: " << favTeam1 << std::endl;
   std::cout << "favTeam2: " << favTeam2 << std::endl;
   std::cout << std::endl;
}
