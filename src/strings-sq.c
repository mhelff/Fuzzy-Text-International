#include "strings-sq.h"

const char* const HOURS_SQ[] = {
  // AM hours
  "dymbëdhjetë",
  "një",
  "dy",
  "tre",
  "katër",
  "pesë",
  "gjashtë",
  "shtatë",
  "tetë",
  "nëntë",
  "dhjetë",
  "njëmbëdhjetë",

  // PM hours
  "dymbëdhjetë",
  "një",
  "dy",
  "tre",
  "katër",
  "pesë",
  "gjashtë",
  "shtatë",
  "tetë",
  "nëntë",
  "dhjetë",
  "njëmbëdhjetë"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_SQ[] = {
  "ora *$1",
  "*$1 e pesë",
  "*$1 e dhjetë",
  "*$1 e një çerek",
  "*$1 e njëzet",
  "*$1 e njëzet e pesë",
  "*$1 e gjysmë",
  "*$2 pa njëzet e pesë",
  "*$2 pa njëzet",
  "*$2 pa një çerek",
  "*$2 pa dhjetë",
  "*$2 pa pesë"
};

