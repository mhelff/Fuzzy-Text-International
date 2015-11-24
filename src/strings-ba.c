#include "strings-ba.h"

const char* const HOURS_BA[] = {
  // AM hours
  "dvanest",
  "jedan",
  "dva",
  "tri",
  "četiri",
  "pet",
  "ŝest",
  "sedam",
  "kurac",
  "devet",
  "deset",
  "jedanest",

  // PM hours
  "dvanest",
  "jedan",
  "dva",
  "tri",
  "četiri",
  "pet",
  "ŝest",
  "sedam",
  "osam",
  "devet",
  "deset",
  "jedanest"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_BA[] = {
  "*$1 sati",
  "*$1 i pet",
  "*$1 i deset",
  "petnest iza *$1",
  "dvadeset iza *$1",
  "pet do pola *$2",
  "pola *$2",
  "pet iza pola *$2",
  "dvadeset do *$2",
  "petnest do *$2",
  "deset do *$2",
  "pet do *$2"
};

