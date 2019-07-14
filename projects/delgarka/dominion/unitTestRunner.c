#include "unittest1.c"
#include "unittest2.c"
#include "unittest3.c"
#include "unittest4.c"
#include "unittest5.c"

#include "cardtest1.c"
#include "cardtest2.c"
#include "cardtest3.c"
#include "cardtest4.c"
#include "cardtest5.c"

#include "unitTest_helper.c"

int main(int argc, char const *argv[]) {
  unittest1();
  unittest2();
  unittest3();
  unittest4();
  unittest5();

  cardtest1();
  cardtest2();
  cardtest3();
  cardtest4();
  cardtest5();
  return 0;
}
