/* ----------------------------------------------------------------------------

    #      #     ###   #####     #   #####   ###   #####   ###    ###
   # #    ##    #   #      #    ##   #      #   #      #  #   #  #   #
  #   #  # #        #     #    # #   #      #         #   #   #  #   #
  #   #    #        #    #    #  #   # ##   #        #    #   #  #  ##
  #   #    #       #    ###   #  #   ##  #  # ##     #     ###    ## #
  #   #    #      #        #  #####      #  ##  #   #     #   #      #
  #   #    #     #         #     #       #  #   #   #     #   #      #
   # #     #    #      #   #     #   #   #  #   #  #      #   #  #   #     ##
    #    #####  #####   ###      #    ###    ###   #       ###    ###      ##

---------------------------------------------------------------------------- */

  //const int * num0[] = {
  //"000000000",
  //"042222240",
  //"032222230",
  //"030010030",
  //"030101030",
  //"031000130",
  //"031000130",
  //"031000130",
  //"031000130",
  //"031000130",
  //"030101030",
  //"030010030",
  //"032222230",
  //"042222240",
  //"000000000"};

  const char * num0[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|##1##|^|",
  ",|#1*1#|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|#1*1#|^|",
  ",|##1##|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num1[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|##1##|^|",
  ",|#11##|^|",
  ",|1#1##|^|",
  ",|##1##|^|",
  ",|##1##|^|",
  ",|##1##|^|",
  ",|##1##|^|",
  ",|##1##|^|",
  ",|11111|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num2[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|#111#|^|",
  ",|1#*#1|^|",
  ",|##*#1|^|",
  ",|##*#1|^|",
  ",|##*1#|^|",
  ",|##1##|^|",
  ",|#1*##|^|",
  ",|1#*##|^|",
  ",|11111|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num3[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|11111|^|",
  ",|##*#1|^|",
  ",|##*1#|^|",
  ",|##1##|^|",
  ",|#111#|^|",
  ",|##*#1|^|",
  ",|##*#1|^|",
  ",|1#*#1|^|",
  ",|#111#|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num4[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|##*1#|^|",
  ",|##11#|^|",
  ",|#1*1#|^|",
  ",|1#*1#|^|",
  ",|1#*1#|^|",
  ",|11111|^|",
  ",|##*1#|^|",
  ",|##*1#|^|",
  ",|##*1#|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num5[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|11111|^|",
  ",|1#*##|^|",
  ",|1#*##|^|",
  ",|1#11#|^|",
  ",|11*#1|^|",
  ",|##*#1|^|",
  ",|##*#1|^|",
  ",|1#*#1|^|",
  ",|#111#|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num6[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|#111#|^|",
  ",|1#*#1|^|",
  ",|1#*##|^|",
  ",|1#*##|^|",
  ",|1#11#|^|",
  ",|11*#1|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|#111#|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num7[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|11111|^|",
  ",|##*#1|^|",
  ",|##*1#|^|",
  ",|##1##|^|",
  ",|##1##|^|",
  ",|#1*##|^|",
  ",|#1*##|^|",
  ",|1#*##|^|",
  ",|1#*##|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num8[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|#111#|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|#111#|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|#111#|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * num9[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|#111#|^|",
  ",|1#*#1|^|",
  ",|1#*#1|^|",
  ",|1#*11|^|",
  ",|#11#1|^|",
  ",|##*#1|^|",
  ",|##*#1|^|",
  ",|1#*#1|^|",
  ",|#111#|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

  const char * dot[] = {
  ",,,,,,,,,,",
  ",,,+-----+",
  ",,/==@==/|",
  ",+-----+,|",
  ",|=====|^|",
  ",|##*##|^|",
  ",|##*##|^|",
  ",|##*##|^|",
  ",|##*##|^|",
  ",|##*##|^|",
  ",|##*##|^|",
  ",|##*##|^|",
  ",|##*11|^|",
  ",|##*11|,+",
  ",|=====|/,",
  ",+-----+,,",
  ",,,,,,,,,,"};

#define FRAME_WIDTH  10
#define FRAME_HEIGHT 17
