#include <string>
#include <stdlib.h>
#include <time.h>

class monkey
{
   public:
     monkey();
     monkey(std::string favTeam);
     ~monkey();
     void setFavoriteTeam(std::string favTeam);
     std::string getFavoriteTeam();
     void updateTeam(std::string opponent, int result);
   private:
     std::string favoriteTeam;
   protected:
      
};
