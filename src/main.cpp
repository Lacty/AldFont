
#include "common.h"
#include "ald_font.h"
#include "float2.h"
#include <string>


int main() {
  AppEnv env(WIDTH, HEIGHT);

  cAldFont ald_test("res/font/chogokubosogothic_5.ttf");
  ald_test.size(60);

  std::string str = "2015/04/03 8:14";
  float2 pos = float2(-240, 0);
  Color color = Color::green;
  float time = 0.15f;

  env.bgColor(Color(1, 1, 1));

  while (env.isOpen()) {
    env.begin();

    ald_test.draw(str, pos, time, color);

    env.end();
  }
}
