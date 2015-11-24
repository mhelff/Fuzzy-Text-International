#include "strings-ro.h"

const char* const HOURS_RO[] = {
  // AM hours
  "doisprezece",
  "unu",
  "doi",
  "trei",
  "patru",
  "cinci",
  "sase",
  "sapte",
  "opt",
  "noua",
  "zece",
  "unsprezece",

  // PM hours
  "doisprezece",
  "unu",
  "doi",
  "trei",
  "patru",
  "cinci",
  "sase",
  "sapte",
  "opt",
  "noua",
  "zece",
  "unsprezece"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_RO[] = {
  "ora *$1",
  "*$1 si cinci",
  "*$1 si zece",
  "*$1 si un sfert",
  "*$1 si douazeci",
  "*$1 si douazeci si cinci",
  "*$1 jumate",
  "*$2 fara douazeci si cinci",
  "*$2 fara douazeci",
  "*$2 fara un sfert",
  "*$2 fara zece",
  "*$2 fara cinci"
};

