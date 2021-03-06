// Converted FLF file: original_fonts/doom.flf
#include "Figlet.hh"

namespace Figlet {

  //! \cond NODOC

  static char     const Hardblank  = '$' ;
  static unsigned const FontHeight = 8 ;
  static unsigned const FontMaxLen = 14 ;
  static FontFiglet characters[] = {

    // letter "space"
    { 32,
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      {
        "$",
        "$",
        "$",
        "$",
        "$",
        "$",
        "$",
        "$"
      }
    },

    // letter N. 33 " ! "
    { 33,
      { 1, 0, 0, 0, 0, 0, 3, 3 },
      { 1, 0, 0, 0, 0, 0, 3, 3 },
      {
        " _ ",
        "| |",
        "| |",
        "| |",
        "|_|",
        "(_)",
        "   ",
        "   "
      }
    },

    // letter N. 34 " " "
    { 34,
      { 1, 0, 1, 2, 2, 2, 5, 5 },
      { 1, 0, 1, 2, 2, 2, 5, 5 },
      {
        " _ _ ",
        "( | )",
        " V V ",
        "  $  ",
        "  $  ",
        "  $  ",
        "     ",
        "     "
      }
    },

    // letter N. 35 " # "
    { 35,
      { 3, 1, 0, 1, 0, 2, 10, 10 },
      { 3, 1, 0, 1, 0, 2, 10, 10 },
      {
        "   _  _   ",
        " _| || |_ ",
        "|_  __  _|",
        " _| || |_ ",
        "|_  __  _|",
        "  |_||_|  ",
        "          ",
        "          "
      }
    },

    // letter N. 36 " $ "
    { 36,
      { 2, 1, 0, 0, 0, 1, 5, 5 },
      { 2, 1, 0, 0, 0, 1, 5, 5 },
      {
        "  _  ",
        " | | ",
        "/ __)",
        "\\__ \\",
        "(   /",
        " |_| ",
        "     ",
        "     "
      }
    },

    // letter N. 37 " % "
    { 37,
      { 1, 0, 3, 2, 1, 0, 7, 7 },
      { 0, 0, 1, 2, 1, 0, 7, 7 },
      {
        " _   __",
        "(_) / /",
        "   / / ",
        "  / /  ",
        " / / _ ",
        "/_/ (_)",
        "       ",
        "       "
      }
    },

    // letter N. 38 " & "
    { 38,
      { 8, 2, 1, 1, 0, 1, 8, 8 },
      { 8, 3, 2, 0, 0, 0, 8, 8 },
      {
        "        ",
        "  ___   ",
        " ( _ )  ",
        " / _ \\/\\",
        "| (_>  <",
        " \\___/\\/",
        "        ",
        "        "
      }
    },

    // letter N. 39 " ' "
    { 39,
      { 1, 0, 0, 1, 1, 1, 3, 3 },
      { 1, 0, 1, 1, 1, 1, 3, 3 },
      {
        " _ ",
        "( )",
        "|/ ",
        " $ ",
        " $ ",
        " $ ",
        "   ",
        "   "
      }
    },

    // letter N. 40 " ( "
    { 40,
      { 2, 1, 0, 0, 0, 0, 1, 4 },
      { 0, 0, 1, 1, 1, 1, 0, 4 },
      {
        "  __",
        " / /",
        "| | ",
        "| | ",
        "| | ",
        "| | ",
        " \\_\\",
        "    "
      }
    },

    // letter N. 41 " ) "
    { 41,
      { 0, 0, 1, 1, 1, 1, 0, 4 },
      { 2, 1, 0, 0, 0, 0, 1, 4 },
      {
        "__  ",
        "\\ \\ ",
        " | |",
        " | |",
        " | |",
        " | |",
        "/_/ ",
        "    "
      }
    },

    // letter N. 42 " * "
    { 42,
      { 4, 1, 1, 0, 1, 1, 9, 9 },
      { 4, 1, 1, 0, 1, 1, 9, 9 },
      {
        "    _    ",
        " /\\| |/\\ ",
        " \\ ` ' / ",
        "|_     _|",
        " / , . \\ ",
        " \\/|_|\\/ ",
        "         ",
        "         "
      }
    },

    // letter N. 43 " + "
    { 43,
      { 7, 3, 1, 0, 2, 3, 7, 7 },
      { 7, 3, 1, 0, 2, 3, 7, 7 },
      {
        "       ",
        "   _   ",
        " _| |_ ",
        "|_   _|",
        "  |_|  ",
        "   $   ",
        "       ",
        "       "
      }
    },

    // letter N. 44 " , "
    { 44,
      { 3, 3, 3, 3, 1, 0, 0, 3 },
      { 3, 3, 3, 3, 1, 0, 1, 3 },
      {
        "   ",
        "   ",
        "   ",
        "   ",
        " _ ",
        "( )",
        "|/ ",
        "   "
      }
    },

    // letter N. 45 " - "
    { 45,
      { 8, 8, 1, 0, 4, 4, 8, 8 },
      { 8, 8, 1, 0, 3, 3, 8, 8 },
      {
        "        ",
        "        ",
        " ______ ",
        "|______|",
        "    $   ",
        "    $   ",
        "        ",
        "        "
      }
    },

    // letter N. 46 " . "
    { 46,
      { 3, 3, 3, 3, 1, 0, 3, 3 },
      { 3, 3, 3, 3, 1, 0, 3, 3 },
      {
        "   ",
        "   ",
        "   ",
        "   ",
        " _ ",
        "(_)",
        "   ",
        "   "
      }
    },

    // letter N. 47 " / "
    { 47,
      { 5, 4, 3, 2, 1, 0, 7, 7 },
      { 0, 0, 1, 2, 3, 4, 7, 7 },
      {
        "     __",
        "    / /",
        "   / / ",
        "  / /  ",
        " / /   ",
        "/_/    ",
        "       ",
        "       "
      }
    },

    // letter N. 48 " 0 "
    { 48,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _____ ",
        "|  _  |",
        "| |/' |",
        "|  /| |",
        "\\ |_/ /",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 49 " 1 "
    { 49,
      { 1, 0, 0, 1, 0, 0, 5, 5 },
      { 2, 1, 1, 1, 0, 0, 5, 5 },
      {
        " __  ",
        "/  | ",
        "`| | ",
        " | | ",
        "_| |_",
        "\\___/",
        "     ",
        "     "
      }
    },

    // letter N. 50 " 2 "
    { 50,
      { 1, 0, 0, 2, 0, 0, 7, 7 },
      { 1, 0, 0, 2, 0, 0, 7, 7 },
      {
        " _____ ",
        "/ __  \\",
        "`' / /'",
        "  / /  ",
        "./ /___",
        "\\_____/",
        "       ",
        "       "
      }
    },

    // letter N. 51 " 3 "
    { 51,
      { 1, 0, 4, 2, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _____ ",
        "|____ |",
        "    / /",
        "  $ \\ \\",
        ".___/ /",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 52 " 4 "
    { 52,
      { 3, 2, 1, 0, 0, 4, 7, 7 },
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      {
        "   ___ ",
        "  /   |",
        " / /| |",
        "/ /_| |",
        "\\___  |",
        "    |_/",
        "       ",
        "       "
      }
    },

    // letter N. 53 " 5 "
    { 53,
      { 1, 0, 0, 4, 0, 0, 7, 7 },
      { 1, 0, 1, 0, 0, 1, 7, 7 },
      {
        " _____ ",
        "|  ___|",
        "|___ \\ ",
        "    \\ \\",
        "/\\__/ /",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 54 " 6 "
    { 54,
      { 2, 1, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 1, 0, 0, 0, 7, 7 },
      {
        "  ____ ",
        " / ___|",
        "/ /___ ",
        "| ___ \\",
        "| \\_/ |",
        "\\_____/",
        "       ",
        "       "
      }
    },

    // letter N. 55 " 7 "
    { 55,
      { 1, 0, 2, 2, 0, 0, 7, 7 },
      { 0, 0, 1, 2, 3, 4, 7, 7 },
      {
        " ______",
        "|___  /",
        "  $/ / ",
        "  / /  ",
        "./ /   ",
        "\\_/    ",
        "       ",
        "       "
      }
    },

    // letter N. 56 " 8 "
    { 56,
      { 1, 0, 1, 1, 0, 0, 7, 7 },
      { 1, 0, 1, 1, 0, 0, 7, 7 },
      {
        " _____ ",
        "|  _  |",
        " \\ V / ",
        " / _ \\ ",
        "| |_| |",
        "\\_____/",
        "       ",
        "       "
      }
    },

    // letter N. 57 " 9 "
    { 57,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _____ ",
        "|  _  |",
        "| |_| |",
        "\\____ |",
        ".___/ /",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 58 " : "
    { 58,
      { 3, 1, 0, 1, 1, 0, 3, 3 },
      { 3, 1, 0, 1, 1, 0, 3, 3 },
      {
        "   ",
        " _ ",
        "(_)",
        " $ ",
        " _ ",
        "(_)",
        "   ",
        "   "
      }
    },

    // letter N. 59 " ; "
    { 59,
      { 3, 1, 0, 1, 1, 0, 0, 3 },
      { 3, 1, 0, 1, 1, 0, 1, 3 },
      {
        "   ",
        " _ ",
        "(_)",
        " $ ",
        " _ ",
        "( )",
        "|/ ",
        "   "
      }
    },

    // letter N. 60 " < "
    { 60,
      { 3, 2, 1, 0, 1, 2, 5, 5 },
      { 0, 0, 1, 2, 1, 0, 5, 5 },
      {
        "   __",
        "  / /",
        " / / ",
        "< <  ",
        " \\ \\ ",
        "  \\_\\",
        "     ",
        "     "
      }
    },

    // letter N. 61 " = "
    { 61,
      { 8, 1, 0, 1, 0, 8, 8, 8 },
      { 8, 1, 0, 1, 0, 8, 8, 8 },
      {
        "        ",
        " ______ ",
        "|______|",
        " ______ ",
        "|______|",
        "        ",
        "        ",
        "        "
      }
    },

    // letter N. 62 " > "
    { 62,
      { 0, 0, 1, 2, 1, 0, 5, 5 },
      { 3, 2, 1, 0, 1, 2, 5, 5 },
      {
        "__   ",
        "\\ \\  ",
        " \\ \\ ",
        "  > >",
        " / / ",
        "/_/  ",
        "     ",
        "     "
      }
    },

    // letter N. 63 " ? "
    { 63,
      { 1, 0, 3, 2, 1, 1, 6, 6 },
      { 2, 1, 0, 1, 2, 2, 6, 6 },
      {
        " ___  ",
        "|__ \\ ",
        "   ) |",
        "  / / ",
        " |_|  ",
        " (_)  ",
        "      ",
        "      "
      }
    },

    // letter N. 64 " @ "
    { 64,
      { 9, 3, 2, 1, 0, 1, 2, 9 },
      { 9, 2, 1, 0, 0, 0, 1, 9 },
      {
        "         ",
        "   ____  ",
        "  / __ \\ ",
        " / / _` |",
        "| | (_| |",
        " \\ \\__,_|",
        "  \\____/ ",
        "         "
      }
    },

    // letter N. 65 " A "
    { 65,
      { 2, 1, 0, 0, 0, 0, 7, 7 },
      { 2, 1, 0, 0, 0, 0, 7, 7 },
      {
        "  ___  ",
        " / _ \\ ",
        "/ /_\\ \\",
        "|  _  |",
        "| | | |",
        "\\_| |_/",
        "       ",
        "       "
      }
    },

    // letter N. 66 " B "
    { 66,
      { 0, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        "______ ",
        "| ___ \\",
        "| |_/ /",
        "| ___ \\",
        "| |_/ /",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 67 " C "
    { 67,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 4, 0, 0, 7, 7 },
      {
        " _____ ",
        "/  __ \\",
        "| /  \\/",
        "| |    ",
        "| \\__/\\",
        " \\____/",
        "       ",
        "       "
      }
    },

    // letter N. 68 " D "
    { 68,
      { 0, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 1, 2, 7, 7 },
      {
        "______ ",
        "|  _  \\",
        "| | | |",
        "| | | |",
        "| |/ / ",
        "|___/  ",
        "       ",
        "       "
      }
    },

    // letter N. 69 " E "
    { 69,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 2, 1, 1, 1, 7, 7 },
      {
        " _____ ",
        "|  ___|",
        "| |__  ",
        "|  __| ",
        "| |___ ",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 70 " F "
    { 70,
      { 0, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 3, 2, 4, 4, 7, 7 },
      {
        "______ ",
        "|  ___|",
        "| |_   ",
        "|  _|  ",
        "| |    ",
        "\\_|    ",
        "       ",
        "       "
      }
    },

    // letter N. 71 " G "
    { 71,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 1, 0, 0, 7, 7 },
      {
        " _____ ",
        "|  __ \\",
        "| |  \\/",
        "| | __ ",
        "| |_\\ \\",
        " \\____/",
        "       ",
        "       "
      }
    },

    // letter N. 72 " H "
    { 72,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      {
        " _   _ ",
        "| | | |",
        "| |_| |",
        "|  _  |",
        "| | | |",
        "\\_| |_/",
        "       ",
        "       "
      }
    },

    // letter N. 73 " I "
    { 73,
      { 1, 0, 2, 2, 1, 1, 7, 7 },
      { 1, 0, 2, 2, 1, 1, 7, 7 },
      {
        " _____ ",
        "|_   _|",
        "  | |  ",
        "  | |  ",
        " _| |_ ",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 74 " J "
    { 74,
      { 3, 2, 2, 4, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        "   ___ ",
        "  |_  |",
        "  $ | |",
        "    | |",
        "/\\__/ /",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 75 " K "
    { 75,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 0, 0, 1, 1, 0, 0, 7, 7 },
      {
        " _   __",
        "| | / /",
        "| |/ / ",
        "|    \\ ",
        "| |\\  \\",
        "\\_| \\_/",
        "       ",
        "       "
      }
    },

    // letter N. 76 " L "
    { 76,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 5, 2, 2, 4, 0, 0, 7, 7 },
      {
        " _     ",
        "| | $  ",
        "| | $  ",
        "| |    ",
        "| |____",
        "\\_____/",
        "       ",
        "       "
      }
    },

    // letter N. 77 " M "
    { 77,
      { 0, 0, 0, 0, 0, 0, 8, 8 },
      { 0, 0, 0, 0, 0, 0, 8, 8 },
      {
        "___  ___",
        "|  \\/  |",
        "| .  . |",
        "| |\\/| |",
        "| |  | |",
        "\\_|  |_/",
        "        ",
        "        "
      }
    },

    // letter N. 78 " N "
    { 78,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      {
        " _   _ ",
        "| \\ | |",
        "|  \\| |",
        "| . ` |",
        "| |\\  |",
        "\\_| \\_/",
        "       ",
        "       "
      }
    },

    // letter N. 79 " O "
    { 79,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _____ ",
        "|  _  |",
        "| | | |",
        "| | | |",
        "\\ \\_/ /",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 80 " P "
    { 80,
      { 0, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 1, 4, 4, 7, 7 },
      {
        "______ ",
        "| ___ \\",
        "| |_/ /",
        "|  __/ ",
        "| |    ",
        "\\_|    ",
        "       ",
        "       "
      }
    },

    // letter N. 81 " Q "
    { 81,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      {
        " _____ ",
        "|  _  |",
        "| | | |",
        "| | | |",
        "\\ \\/' /",
        " \\_/\\_\\",
        "       ",
        "       "
      }
    },

    // letter N. 82 " R "
    { 82,
      { 0, 0, 0, 0, 0, 0, 7, 7 },
      { 1, 0, 0, 1, 1, 0, 7, 7 },
      {
        "______ ",
        "| ___ \\",
        "| |_/ /",
        "|    / ",
        "| |\\ \\ ",
        "\\_| \\_|",
        "       ",
        "       "
      }
    },

    // letter N. 83 " S "
    { 83,
      { 1, 0, 0, 1, 0, 0, 7, 7 },
      { 1, 0, 1, 0, 0, 1, 7, 7 },
      {
        " _____ ",
        "/  ___|",
        "\\ `--. ",
        " `--. \\",
        "/\\__/ /",
        "\\____/ ",
        "       ",
        "       "
      }
    },

    // letter N. 84 " T "
    { 84,
      { 1, 0, 2, 2, 2, 2, 7, 7 },
      { 1, 0, 2, 2, 2, 2, 7, 7 },
      {
        " _____ ",
        "|_   _|",
        "  | |  ",
        "  | |  ",
        "  | |  ",
        "  \\_/  ",
        "       ",
        "       "
      }
    },

    // letter N. 85 " U "
    { 85,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _   _ ",
        "| | | |",
        "| | | |",
        "| | | |",
        "| |_| |",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 86 " V "
    { 86,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _   _ ",
        "| | | |",
        "| | | |",
        "| | | |",
        "\\ \\_/ /",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 87 " W "
    { 87,
      { 1, 0, 0, 0, 0, 1, 8, 8 },
      { 1, 0, 0, 0, 0, 1, 8, 8 },
      {
        " _    _ ",
        "| |  | |",
        "| |  | |",
        "| |/\\| |",
        "\\  /\\  /",
        " \\/  \\/ ",
        "        ",
        "        "
      }
    },

    // letter N. 88 " X "
    { 88,
      { 0, 0, 1, 1, 0, 0, 7, 7 },
      { 0, 0, 1, 1, 0, 0, 7, 7 },
      {
        "__   __",
        "\\ \\ / /",
        " \\ V / ",
        " /   \\ ",
        "/ /^\\ \\",
        "\\/   \\/",
        "       ",
        "       "
      }
    },

    // letter N. 89 " Y "
    { 89,
      { 0, 0, 1, 2, 2, 2, 7, 7 },
      { 0, 0, 1, 2, 2, 2, 7, 7 },
      {
        "__   __",
        "\\ \\ / /",
        " \\ V / ",
        "  \\ /  ",
        "  | |  ",
        "  \\_/  ",
        "       ",
        "       "
      }
    },

    // letter N. 90 " Z "
    { 90,
      { 1, 0, 2, 2, 0, 0, 7, 7 },
      { 0, 0, 1, 2, 0, 0, 7, 7 },
      {
        " ______",
        "|___  /",
        "  $/ / ",
        "  / /  ",
        "./ /___",
        "\\_____/",
        "       ",
        "       "
      }
    },

    // letter N. 91 " [ "
    { 91,
      { 1, 0, 0, 0, 0, 0, 0, 5 },
      { 1, 0, 2, 2, 2, 1, 0, 5 },
      {
        " ___ ",
        "|  _|",
        "| |  ",
        "| |  ",
        "| |  ",
        "| |_ ",
        "|___|",
        "     "
      }
    },

    // letter N. 92 " \ "
    { 92,
      { 0, 0, 1, 2, 3, 4, 7, 7 },
      { 5, 4, 3, 2, 1, 0, 7, 7 },
      {
        "__     ",
        "\\ \\    ",
        " \\ \\   ",
        "  \\ \\  ",
        "   \\ \\ ",
        "    \\_\\",
        "       ",
        "       "
      }
    },

    // letter N. 93 " ] "
    { 93,
      { 1, 0, 2, 2, 2, 1, 0, 5 },
      { 1, 0, 0, 0, 0, 0, 0, 5 },
      {
        " ___ ",
        "|_  |",
        "  | |",
        "  | |",
        "  | |",
        " _| |",
        "|___|",
        "     "
      }
    },

    // letter N. 94 " ^ "
    { 94,
      { 1, 0, 2, 2, 2, 2, 4, 4 },
      { 1, 0, 1, 1, 1, 1, 4, 4 },
      {
        " /\\ ",
        "|/\\|",
        "  $ ",
        "  $ ",
        "  $ ",
        "  $ ",
        "    ",
        "    "
      }
    },

    // letter N. 95 " _ "
    { 95,
      { 8, 8, 8, 8, 8, 4, 1, 0 },
      { 8, 8, 8, 8, 8, 3, 1, 0 },
      {
        "        ",
        "        ",
        "        ",
        "        ",
        "        ",
        "    $   ",
        " ______ ",
        "|______|"
      }
    },

    // letter N. 96 " ` "
    { 96,
      { 1, 0, 1, 1, 1, 1, 3, 3 },
      { 1, 0, 0, 1, 1, 1, 3, 3 },
      {
        " _ ",
        "( )",
        " \\|",
        " $ ",
        " $ ",
        " $ ",
        "   ",
        "   "
      }
    },

    // letter N. 97 " a "
    { 97,
      { 7, 7, 2, 1, 0, 1, 7, 7 },
      { 7, 7, 1, 0, 0, 0, 7, 7 },
      {
        "       ",
        "       ",
        "  __ _ ",
        " / _` |",
        "| (_| |",
        " \\__,_|",
        "       ",
        "       "
      }
    },

    // letter N. 98 " b "
    { 98,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 5, 4, 2, 1, 0, 1, 7, 7 },
      {
        " _     ",
        "| |    ",
        "| |__  ",
        "| '_ \\ ",
        "| |_) |",
        "|_.__/ ",
        "       ",
        "       "
      }
    },

    // letter N. 99 " c "
    { 99,
      { 6, 6, 2, 1, 0, 1, 6, 6 },
      { 6, 6, 1, 0, 1, 0, 6, 6 },
      {
        "      ",
        "      ",
        "  ___ ",
        " / __|",
        "| (__ ",
        " \\___|",
        "      ",
        "      "
      }
    },

    // letter N. 100 " d "
    { 100,
      { 5, 4, 2, 1, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      {
        "     _ ",
        "    | |",
        "  __| |",
        " / _` |",
        "| (_| |",
        " \\__,_|",
        "       ",
        "       "
      }
    },

    // letter N. 101 " e "
    { 101,
      { 6, 6, 2, 1, 0, 1, 6, 6 },
      { 6, 6, 1, 0, 0, 0, 6, 6 },
      {
        "      ",
        "      ",
        "  ___ ",
        " / _ \\",
        "|  __/",
        " \\___|",
        "      ",
        "      "
      }
    },

    // letter N. 102 " f "
    { 102,
      { 2, 1, 0, 0, 0, 0, 5, 5 },
      { 1, 0, 1, 0, 2, 2, 5, 5 },
      {
        "  __ ",
        " / _|",
        "| |_ ",
        "|  _|",
        "| |  ",
        "|_|  ",
        "     ",
        "     "
      }
    },

    // letter N. 103 " g "
    { 103,
      { 7, 7, 2, 1, 0, 1, 2, 1 },
      { 7, 7, 1, 0, 0, 0, 0, 1 },
      {
        "       ",
        "       ",
        "  __ _ ",
        " / _` |",
        "| (_| |",
        " \\__, |",
        "  __/ |",
        " |___/ "
      }
    },

    // letter N. 104 " h "
    { 104,
      { 1, 0, 0, 0, 0, 0, 7, 7 },
      { 5, 4, 2, 1, 0, 0, 7, 7 },
      {
        " _     ",
        "| |    ",
        "| |__  ",
        "| '_ \\ ",
        "| | | |",
        "|_| |_|",
        "       ",
        "       "
      }
    },

    // letter N. 105 " i "
    { 105,
      { 1, 0, 1, 0, 0, 0, 3, 3 },
      { 1, 0, 1, 0, 0, 0, 3, 3 },
      {
        " _ ",
        "(_)",
        " _ ",
        "| |",
        "| |",
        "|_|",
        "   ",
        "   "
      }
    },

    // letter N. 106 " j "
    { 106,
      { 3, 2, 3, 2, 2, 2, 1, 0 },
      { 1, 0, 1, 0, 0, 0, 0, 1 },
      {
        "   _ ",
        "  (_)",
        "   _ ",
        "  | |",
        "  | |",
        "  | |",
        " _/ |",
        "|__/ "
      }
    },

    // letter N. 107 " k "
    { 107,
      { 1, 0, 0, 0, 0, 0, 6, 6 },
      { 4, 3, 0, 0, 1, 0, 6, 6 },
      {
        " _    ",
        "| |   ",
        "| | __",
        "| |/ /",
        "|   < ",
        "|_|\\_\\",
        "      ",
        "      "
      }
    },

    // letter N. 108 " l "
    { 108,
      { 1, 0, 0, 0, 0, 0, 3, 3 },
      { 1, 0, 0, 0, 0, 0, 3, 3 },
      {
        " _ ",
        "| |",
        "| |",
        "| |",
        "| |",
        "|_|",
        "   ",
        "   "
      }
    },

    // letter N. 109 " m "
    { 109,
      { 11, 11, 1, 0, 0, 0, 11, 11 },
      { 11, 11, 2, 1, 0, 0, 11, 11 },
      {
        "           ",
        "           ",
        " _ __ ___  ",
        "| '_ ` _ \\ ",
        "| | | | | |",
        "|_| |_| |_|",
        "           ",
        "           "
      }
    },

    // letter N. 110 " n "
    { 110,
      { 7, 7, 1, 0, 0, 0, 7, 7 },
      { 7, 7, 2, 1, 0, 0, 7, 7 },
      {
        "       ",
        "       ",
        " _ __  ",
        "| '_ \\ ",
        "| | | |",
        "|_| |_|",
        "       ",
        "       "
      }
    },

    // letter N. 111 " o "
    { 111,
      { 7, 7, 2, 1, 0, 1, 7, 7 },
      { 7, 7, 2, 1, 0, 1, 7, 7 },
      {
        "       ",
        "       ",
        "  ___  ",
        " / _ \\ ",
        "| (_) |",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 112 " p "
    { 112,
      { 7, 7, 1, 0, 0, 0, 0, 0 },
      { 7, 7, 2, 1, 0, 1, 4, 4 },
      {
        "       ",
        "       ",
        " _ __  ",
        "| '_ \\ ",
        "| |_) |",
        "| .__/ ",
        "| |    ",
        "|_|    "
      }
    },

    // letter N. 113 " q "
    { 113,
      { 7, 7, 2, 1, 0, 1, 4, 4 },
      { 7, 7, 1, 0, 0, 0, 0, 0 },
      {
        "       ",
        "       ",
        "  __ _ ",
        " / _` |",
        "| (_| |",
        " \\__, |",
        "    | |",
        "    |_|"
      }
    },

    // letter N. 114 " r "
    { 114,
      { 6, 6, 1, 0, 0, 0, 6, 6 },
      { 6, 6, 1, 0, 3, 3, 6, 6 },
      {
        "      ",
        "      ",
        " _ __ ",
        "| '__|",
        "| |   ",
        "|_|   ",
        "      ",
        "      "
      }
    },

    // letter N. 115 " s "
    { 115,
      { 5, 5, 1, 0, 0, 0, 5, 5 },
      { 5, 5, 1, 0, 0, 0, 5, 5 },
      {
        "     ",
        "     ",
        " ___ ",
        "/ __|",
        "\\__ \\",
        "|___/",
        "     ",
        "     "
      }
    },

    // letter N. 116 " t "
    { 116,
      { 1, 0, 0, 0, 0, 1, 5, 5 },
      { 3, 2, 1, 0, 1, 0, 5, 5 },
      {
        " _   ",
        "| |  ",
        "| |_ ",
        "| __|",
        "| |_ ",
        " \\__|",
        "     ",
        "     "
      }
    },

    // letter N. 117 " u "
    { 117,
      { 7, 7, 1, 0, 0, 1, 7, 7 },
      { 7, 7, 1, 0, 0, 0, 7, 7 },
      {
        "       ",
        "       ",
        " _   _ ",
        "| | | |",
        "| |_| |",
        " \\__,_|",
        "       ",
        "       "
      }
    },

    // letter N. 118 " v "
    { 118,
      { 7, 7, 0, 0, 1, 2, 7, 7 },
      { 7, 7, 0, 0, 1, 2, 7, 7 },
      {
        "       ",
        "       ",
        "__   __",
        "\\ \\ / /",
        " \\ V / ",
        "  \\_/  ",
        "       ",
        "       "
      }
    },

    // letter N. 119 " w "
    { 119,
      { 10, 10, 0, 0, 1, 2, 10, 10 },
      { 10, 10, 0, 0, 1, 2, 10, 10 },
      {
        "          ",
        "          ",
        "__      __",
        "\\ \\ /\\ / /",
        " \\ V  V / ",
        "  \\_/\\_/  ",
        "          ",
        "          "
      }
    },

    // letter N. 120 " x "
    { 120,
      { 6, 6, 0, 0, 1, 0, 6, 6 },
      { 6, 6, 0, 0, 1, 0, 6, 6 },
      {
        "      ",
        "      ",
        "__  __",
        "\\ \\/ /",
        " >  < ",
        "/_/\\_\\",
        "      ",
        "      "
      }
    },

    // letter N. 121 " y "
    { 121,
      { 7, 7, 1, 0, 0, 1, 2, 1 },
      { 7, 7, 1, 0, 0, 0, 0, 1 },
      {
        "       ",
        "       ",
        " _   _ ",
        "| | | |",
        "| |_| |",
        " \\__, |",
        "  __/ |",
        " |___/ "
      }
    },

    // letter N. 122 " z "
    { 122,
      { 5, 5, 1, 0, 1, 0, 5, 5 },
      { 5, 5, 0, 0, 1, 0, 5, 5 },
      {
        "     ",
        "     ",
        " ____",
        "|_  /",
        " / / ",
        "/___|",
        "     ",
        "     "
      }
    },

    // letter N. 123 " { "
    { 123,
      { 3, 2, 1, 0, 0, 1, 2, 5 },
      { 0, 0, 1, 2, 2, 1, 0, 5 },
      {
        "   __",
        "  / /",
        " | | ",
        "/ /  ",
        "\\ \\  ",
        " | | ",
        "  \\_\\",
        "     "
      }
    },

    // letter N. 124 " | "
    { 124,
      { 1, 0, 0, 0, 0, 0, 0, 0 },
      { 1, 0, 0, 0, 0, 0, 0, 0 },
      {
        " _ ",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "|_|"
      }
    },

    // letter N. 125 " } "
    { 125,
      { 0, 0, 1, 2, 2, 1, 0, 5 },
      { 3, 2, 1, 0, 0, 1, 2, 5 },
      {
        "__   ",
        "\\ \\  ",
        " | | ",
        "  \\ \\",
        "  / /",
        " | | ",
        "/_/  ",
        "     "
      }
    },

    // letter N. 126 " ~ "
    { 126,
      { 1, 0, 2, 2, 2, 2, 5, 5 },
      { 0, 1, 2, 2, 2, 2, 5, 5 },
      {
        " /\\/|",
        "|/\\/ ",
        "  $  ",
        "  $  ",
        "  $  ",
        "  $  ",
        "     ",
        "     "
      }
    },

    // letter N. 127 "  "
    { 127,
      { 1, 0, 1, 0, 0, 0, 7, 7 },
      { 1, 0, 1, 0, 0, 0, 7, 7 },
      {
        " _   _ ",
        "(_)_(_)",
        " / _ \\ ",
        "/ /_\\ \\",
        "|  _  |",
        "\\_| |_/",
        "       ",
        "       "
      }
    },

    // letter N. 127 "  "
    { 128,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _   _ ",
        "(_)_(_)",
        "|  _  |",
        "| | | |",
        "\\ \\_/ /",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 127 "  "
    { 129,
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      { 1, 0, 0, 0, 0, 1, 7, 7 },
      {
        " _   _ ",
        "(_) (_)",
        "| | | |",
        "| | | |",
        "| |_| |",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 127 "  "
    { 130,
      { 1, 0, 2, 1, 0, 1, 7, 7 },
      { 1, 0, 1, 0, 0, 0, 7, 7 },
      {
        " _   _ ",
        "(_) (_)",
        "  __ _ ",
        " / _` |",
        "| (_| |",
        " \\__,_|",
        "       ",
        "       "
      }
    },

    // letter N. 127 "  "
    { 131,
      { 1, 0, 2, 1, 0, 1, 7, 7 },
      { 1, 0, 2, 1, 0, 1, 7, 7 },
      {
        " _   _ ",
        "(_) (_)",
        "  ___  ",
        " / _ \\ ",
        "| (_) |",
        " \\___/ ",
        "       ",
        "       "
      }
    },

    // letter N. 127 "  "
    { 132,
      { 1, 0, 1, 0, 0, 1, 7, 7 },
      { 1, 0, 1, 0, 0, 0, 7, 7 },
      {
        " _   _ ",
        "(_) (_)",
        " _   _ ",
        "| | | |",
        "| |_| |",
        " \\__,_|",
        "       ",
        "       "
      }
    },

    // letter N. 127 "  "
    { 133,
      { 2, 1, 0, 0, 0, 0, 0, 7 },
      { 2, 1, 0, 1, 0, 1, 4, 7 },
      {
        "  ___  ",
        " / _ \\ ",
        "| | ) |",
        "| |< < ",
        "| | ) |",
        "| ||_/ ",
        "\\_|    ",
        "       "
      }
    }
  };

  static unsigned const FontSize   = sizeof(characters)/sizeof(characters[0]) ;
  Banner doom(characters, Hardblank, FontHeight, FontMaxLen, FontSize ) ;

  //! \endcond  

}
// EOF file font
