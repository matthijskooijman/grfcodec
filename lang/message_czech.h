/*
 * message_czech.h
 * Message text in Czech language.
 *
 * Copyright 2006 by Dan Masek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

START_MESSAGES(RL_CZECH)

ERR_MESSAGE(FATAL_MESSAGE_ERROR,"Kriticka chyba behem vytvareni zpravy ",0)
ERR_MESSAGE(INTERNAL_ERROR_TEXT,"%t(%d): Kriticka chyba pri analyze spritu %d: %t se nesmi rovnat %d.\n"
			"\t(funkce %t).\n",0)
ERR_MESSAGE(INVALID_DATAFILE,"Datovy soubor \"%t\" obsahuje chybna data. (%S)\n",0)
ERR_MESSAGE(NO_INPUT_FILE,"Nelze otevrit soubor \"%t\" specifikovany na prikazove radce.\n",0)
ERR_MESSAGE(NO_OUTPUT_FILE,"Nelze otevrit vystupni soubor \"%t\" pro vstupni soubor \"%s\".\n",0)
ERR_MESSAGE(REPLACE_FAILED,"Nelze nahradit puvodni soubor (%t) novym souborem (%t). (%d)\n",0)
ERR_MESSAGE(DATAFILE_ERROR,"Nelze %s datovy soubor: \"%t\". %S\n",0)
ERR_MESSAGE(CREATE_FAILED,"Nelze vytvorit adresar .renum v %t. (%d)\n",0)
ERR_MESSAGE(DELETE_FAILED,"Nelze odstranit stary soubor %t. (%d)\n",0)

OUT_MESSAGE(CREATED_DIR,"Datovy adresar .renum byl vytvoren v adresari %t.\n",0)
OUT_MESSAGE(PROCESSING,"Rezim zpracovani standardniho vstupu.\n",0)
OUT_MESSAGE(PROCESSING_FILE,"Zpracovavam soubor \"%t\".\n",0)
OUT_MESSAGE(PROCESSING_COMPLETE,"Zpracovani ukonceno.\n",0)
OUT_MESSAGE(APPARENTLY_NOT_NFO,"Tento soubor neobsahuje platny NFO kod.\n",0)
OUT_MESSAGE(UNKNOWN_VERSION,"Neznama verze NFO: %d.  ",0)//No \n. That's intentional.
OUT_MESSAGE(SKIPPING_FILE,"Preskakuji soubor.\n",0)
OUT_MESSAGE(PARSING_FILE,"Pokousim se analyzovat jako NFO kod verze 4.\n",0)
OUT_MESSAGE(PARSE_FAILURE,"Sprite nachazejici se po spritu %d nelze zpracovat.\n",0)
OUT_MESSAGE(PARTIAL_PARSE_FAILURE,"Cast spritu %d nelze zpracovat.\n",0)
OUT_MESSAGE(NOT_IN_SPRITE,"Pri hledani spritu %d bylo nalezeno pokracovani predchoziho pseudo-spritu.\n",0)
OUT_MESSAGE(CONSOLE_LINT_FATAL,"Kriticka chyba linteru pri zpracovani spritu %d.\n",0)
OUT_MESSAGE(CONSOLE_LINT_ERROR,"Chyba pri zpracovani spritu %d.\n",0)
OUT_MESSAGE(CONSOLE_LINT_WARNING,"Varovani pri zpracovani spritu %d (uroven %d).\n",0)
OUT_MESSAGE(CONSOLE_AUTOCORRECT,"Pokousim se automaticky opravit sprite %d.\n",0)
MESSAGE_EX(UNEXP_EOF_STD2,"Neocekavany konec souboru: Ocekavam dalsi standardni Akce 2.\n",0,OUT,UNUSED_SET)
MESSAGE_EX(UNEXP_EOF_CARGOID,"Neocekavany konec souboru: Zbyvaji nevyuzita CargoID pro feature %x.\n",0,OUT,UNUSED_ID)
MESSAGE_EX(UNEXP_EOF_TOWNNAMES,"Neocekavany konec souboru: Zbyvaji nevyuzita ID nazvu mest.\n",0,OUT,UNUSED_ID)
MESSAGE_EX(UNEXP_EOF_LONGJUMP,"Neocekavany konec souboru: Akce 7/9 odkazuje za konec souboru.\n",0,OUT,LONG_JUMPLEAD)
OUT_MESSAGE(STARTUP,"NFORenum " VERSION " - Copyright " YEARS " Dale McCoy.\n",0)

NFO_MESSAGE(BAD_RPN,"Chybny vyraz RPN (behem cteni znaku %c).\n",0)
NFO_MESSAGE(BAD_RPN_EOF,"Chybi prava zavorka.\n",0)
NFO_MESSAGE(UNDEF_VAR,"Promenna \"%t\" nebyla dosud definovana.\n",0)
NFO_MESSAGE(COMMAND_INVALID_ARG,"Chybny argument prikazu %t.\n",0)
NFO_MESSAGE(COMMAND_UNKNOWN,"Neznamy prikaz: %t\n",0)
NFO_MESSAGE(COMMAND_REVERT_DEFAULT,"Automaticky pouzivam \"DEFAULT\".\n",0)
NFO_MESSAGE(COMMAND_UNKNOWN_VERSION,"Nezname cislo verze. Jestlize byla tato verze jiz vydana," \
			"prosim pouzijte nejnovejsi verzi souboru versions.dat dostupnou na webovych strankach NFORenum.\n",0)

//UNPARSEABLE
NFO_MESSAGE(INVALID_CHARACTER,"Chybny znak: \"%c\".\n",0)
NFO_MESSAGE(INVALID_EXTENSION,"Chybna escape sekvence.\n",0)
NFO_MESSAGE(UNTERMINATED_STRING,"Neukonceny textovy retezec.\n",0)
MESSAGE(REAL_NO_FILENAME,"Realny sprite neobsahuje nazev souboru.\n",TO_NULL|MAKE_COMMENT)
NFO_MESSAGE(REAL_MISSING_DATA,"Z realneho spritu nelze nacist %s.\n",0)

//FATAL
NFO_MESSAGE(INVALID_LENGTH,"Vsechny %S jsou %S bytu dlouhe.\n",USE_PREFIX)
NFO_MESSAGE(BAD_LENGTH,"Delka neodpovida %S hodnoty %S. (Ocekavam %d bytu)\n",USE_PREFIX)
NFO_MESSAGE(TOO_SHORT,"Linter vyzaduje dalsich %d bytu, ktere vsak chybi.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_FEATURE,"Chybna hodnota polozky feature.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_TYPE,"Chybna hodnota polozky nument1 nebo typ nahodne/variabilni Akce 2.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_ACTION,"Chybne cislo Akce.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_PROP,"Chybna vlastnost %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(UNTERM_ACT6,"U Akce 6 chybi koncova hodnota FF.\n",USE_PREFIX)

//ERROR
NFO_MESSAGE(INSUFFICIENT,"Chybi %s. Sprite %d deklaruje %d, ale bylo nalezeno pouze %d.\n",USE_PREFIX)
NFO_MESSAGE(EXTRA,"Prebyva %s. %d deklarovanych spritem %d jiz bylo nalezeno.\n",USE_PREFIX)
NFO_MESSAGE(UNEXPECTED,"Nalezen neocekavany %s.\n",USE_PREFIX)
NFO_MESSAGE(FEATURE_MISMATCH,"Hodnota feature neodpovida hodnote feature predchozi Akce %x ve spritu %d.\n",USE_PREFIX)
NFO_MESSAGE(RAND_2_NUMSETS,"Nahodna Akce 2 musi obsahovat 2^n moznosti k vyberu.\n",USE_PREFIX)
  MESSAGE_UNUSED(NEITHER_SET_CALLBACK)
NFO_MESSAGE(NEITHER_ID_CALLBACK,"%4x neni ani callback ani %s.\n",USE_PREFIX)
NFO_MESSAGE(UNDEFINED_SPRITE_SET,"Skupina spritu %2x neni definovana v predchozi Akci 1 (sprite %d).\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_CARGO_TYPE,"Chybny druh nakladu: %2x\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_REQD_SETS,"Akce 2 nedeklaruje zadne skupiny spritu pro %s.\n",USE_PREFIX)
NFO_MESSAGE(SIGNALS,"Navestidla vyzaduji 48, 112 nebo 240 (0x30, 0x70 nebo 0xF0) spritu.\n",USE_PREFIX)
NFO_MESSAGE(ACTION_5,"Pro tento typ ocekavam %d (0x%x) spritu.\n",USE_PREFIX)
  MESSAGE_UNUSED(FOUNDATIONS)
NFO_MESSAGE(UNDEFINED_ID,"ID %2x nebylo dosud definovano.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INSUFFICIENT_PROPS,"Ocekavam dalsich %d vlastnosti.\n",USE_PREFIX)
NFO_MESSAGE(INSUFFICIENT_DATA,"Pro vlastnost %2x ocekavam vice dat. (%d bytu na pozici %d.)\n",USE_PREFIX)
NFO_MESSAGE(INSUFFICIENT_DATA2,"Ocekavam dalsich %d bytu pro vlastnost %2x.\n",USE_PREFIX)
NFO_MESSAGE(MISSING_TERMINATOR,"Data vlastnosti neobsahuji koncove byty.\n",USE_PREFIX)
NFO_MESSAGE(DUPLICATE_ACT,"Akce %x jiz byla nalezena ve spritu %d.\n",USE_PREFIX)
NFO_MESSAGE(MISSING_8,"Akce 8 musi prechazet akci %x.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_VERSION,"Chybne cislo verze GRF.\n",USE_PREFIX)
  MESSAGE_UNUSED(BAD_VARIABLE)
NFO_MESSAGE(BAD_VARSIZE,"Velikost promenne %2x je chybna.\n",USE_PREFIX)
NFO_MESSAGE(BAD_CONDITION,"Podminka %2x je chybna.\n",USE_PREFIX)
NFO_MESSAGE(GRFCOND_NEEDS_GRFVAR,"Podminka %2x vyzaduje promennou 88.\n",USE_PREFIX)
NFO_MESSAGE(GRFVAR_NEEDS_GRFCOND,"Promenna 88 vyzaduje podminku pro testovani GRFID.\n",USE_PREFIX)
NFO_MESSAGE(BITTEST_VARIABLE,"Promenna %2x vyzaduje podminku pro testovani bitu.\n",USE_PREFIX)
NFO_MESSAGE(VARIABLE_SIZE_MISMATCH,"%d je chybna <size> pro promennou %2x.\n",USE_PREFIX)
  MESSAGE_UNUSED(INVALID_LABEL)//,"Stitky musi mit nejvyssi 3 bity zapnute (E0-FF).\n",USE_PREFIX)
NFO_MESSAGE(INVALID_LITERAL,"%2x na miste, kde bych ocekaval %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INSUFFICIENT_STRINGS,"Pro tuto Akci 4 cekavam dalsich %d retezcu.\n",USE_PREFIX)
NFO_MESSAGE(TOO_LARGE,"Hodnota <%s> nesmi presahnout 0Fh.\n",USE_PREFIX)
NFO_MESSAGE(SPRITENUM_TOO_HIGH,"Nejvyssi ID spritu, ktere TTD definuje, je 4984 (1E 13).\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_COLOR_TRANS,"Prebarvovaci mod 3 neni definovan.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_COLOR_SPRITE,"Sprite %d neni sprite s tabulkou zmeny barev.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_GROUNDSPRITE,"Nebyl definovan zadny %s.\n",USE_PREFIX)
NFO_MESSAGE(NO_STD_3,"Tato Akce 3 pro zmenu nateru nenasleduje standardni Akci 3.\n",USE_PREFIX)
NFO_MESSAGE(NONEXISTANT_VARIABLE,"Promenna %2x neexistuje.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(MODIFY_BEYOND_LENGTH,"Akce 6 se pokousi o zmenu bytu, ktery se nachazi za koncem tohoto spritu.\n",USE_PREFIX)
NFO_MESSAGE(NO_FOLLOWING_SPRITE,"Po teto Akci 6 neni zadny sprite ke zmeneni.\n",USE_PREFIX)

//WARNING1
NFO_MESSAGE(NO_SETS,"Akce %x nedeklaruje zadnou skupinu.\n",USE_PREFIX)
NFO_MESSAGE(NO_SPRITES,"Akce %x deklaruje skupiny, ktere neobsahuji zadne sprity.\n",USE_PREFIX)
NFO_MESSAGE(SET_WITH_NO_SPRITES,"Skupina %d neobsahuje zadne sprity.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_PROPS,"Akce 0 nenastavuje zadne vlastnosti.\n",USE_PREFIX)
NFO_MESSAGE(NO_IDS,"Akce 0 nenastavuje vlastnosti pro zadna ID.\n",USE_PREFIX)
NFO_MESSAGE(UNUSED_ID,"Redefinice ID %2x, ktere od sve posledni definice ve spritu %d nebylo dosud pouzito.\n",USE_PREFIX)
MESSAGE_EX(UNUSED2IDLEAD,"Nasledujici ID pro feature %x nebyla od sve posledni definice dosud pouzita:\n",MAKE_COMMENT,NFO,UNUSED_ID)
MESSAGE_EX(UNUSEDIDFINAL,"%2x (naposled definovano ve spritu %d)\n",MAKE_COMMENT,NFO,UNUSED_ID)
NFO_MESSAGE(UNUSED_SET,"Skupina %2x definovana v predchozi Akci 1 (sprite %d) nebyla dosud pouzita.\n",USE_PREFIX)
NFO_MESSAGE(UNREACHABLE_VAR,"Variace %d neni dosazitelna.\n",USE_PREFIX)
NFO_MESSAGE(EXTRA_DATA,"Sprite obsahuje prebytecna data.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(REUSED_DEFAULT,"Standardni ID jiz bylo v tomto spritu pouzito.\n",USE_PREFIX)
NFO_MESSAGE(RESERVED_GRFID,"GRFID zacinajici bytem FF jsou vyhrazena.\n",USE_PREFIX)
  MESSAGE_UNUSED(DOES_NOT_FOLLOW)
NFO_MESSAGE(SHIFT_TOO_FAR,"Posuv bitu promenne %2x presahuje jeji velikost.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_MODIFICATIONS,"Akce 6 nic nemeni.\n",USE_PREFIX)
NFO_MESSAGE(DOES_NOT_MODIFY,"Tato cast nic nemeni.\n",USE_PREFIX|HAS_OFFSET)

//WARNING2
  MESSAGE_UNUSED(BACKWARDS_GOTO)//,"Akce %x skace zpet na stitek %2x definovany ve spritu %d.\n",USE_PREFIX)
NFO_MESSAGE(UNUSED_LABEL_NO_PREV_DEF,"Stitek %2x nebyl dosud pouzit.\n",USE_PREFIX)
NFO_MESSAGE(UNUSED_LABEL_PREV_DEF,"Stitek %2x nebyl od sve posledni definice ve spritu %d dosud pouzit.\n",USE_PREFIX)
NFO_MESSAGE(REPEATED_PROP,"Vlastnost %2x jiz byla definovana na pozici %d.\n",USE_PREFIX|HAS_OFFSET)
 MESSAGE_UNUSED(OFF_TILE)

//WARNING3
NFO_MESSAGE(ONLY_ONE_CHOICE,"Nahodna akce 2 obsahuje pouze jednu volbu na vyber.\n",USE_PREFIX)
NFO_MESSAGE(NOT_VARIATIONAL,"Variacni akce 2 pouziva pouze konstantni promenne (1A a 1C).\n",USE_PREFIX)
NFO_MESSAGE(NOT_RANDOM,"Vsechny nahodne volby obsahuje stejne ID.\n",USE_PREFIX)
  MESSAGE_UNUSED(TOO_MANY_STRINGS)

NFO_MESSAGE(NO_ACT1,"Chybi predchozi Akce 1.\n",USE_PREFIX)
  MESSAGE_UNUSED(INVALID_AGAIN)//,"<again> musi byt 00 nebo 01.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_OP,"Chybna operace %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(SET_TOO_LARGE,"Skupina spritu obsahuje vice spritu, nez muze dana feature vyuzit.\n",USE_PREFIX)
NFO_MESSAGE(STRANGE_SET_SIZE,"Skupina spritu obsahuje neobvykly pocet spritu.\n",USE_PREFIX)
MESSAGE_EX(UNUSEDFIDLEAD,"Nasledujici ID novych nazvu mest nebyla od posledni definice dosud pouzita:\n",MAKE_COMMENT,NFO,UNUSED_ID)
NFO_MESSAGE(DUPLICATE_GRFID,"Toto GRFID jiz bylo deaktivovano na pozici %d (%8x).\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_GRFIDS,"Akce E nedeaktivuje zadne GRF soubory.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_SRC,"Zdrojovy parametr %d je chybny.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_TARGET,"Cilovy parametr je chybny.\n",USE_PREFIX)
NFO_MESSAGE(ONLY_ONE_DATA,"Jen jeden argumentu src1 a src2 muze mit hodnotu 0xFF.\n",USE_PREFIX)
NFO_MESSAGE(DUPLICATE_LANG_NAME,"Nazev pro %L jiz byl definovan na pozici %d.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(MISSING_FALLBACK,"Zadny nouzovy retezec nebyl definovan.\n",USE_PREFIX)
NFO_MESSAGE(NO_PARTS,"Nebyly specifikovany zadne casti.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(OUT_OF_RANGE_BITS,"Je dostupnych jen %d nahodnych bitu.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INSUFFICIENT_BITS,"Je vyzadovano %x bitu, ale je dostupnych pouze %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_PROBABILITY,"Pro tuto cast byla specifikovana nulova pravdepodobnost.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(PARAM_TOO_LARGE,"Parametr %2x presahuje maximalni povolenou hodnotu promenne %2x.\n",HAS_OFFSET|USE_PREFIX)
NFO_MESSAGE(NO_BUILDING_SPRITE,"Sprity budovy nesmi byt prazdne.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(OVERRAN_SPRITE,"Neocekavany konec spritu pri cteni spritu %d.\n",USE_PREFIX)
NFO_MESSAGE(FIRST_SPRITE_CANNOT_SHARE,"Prvni sprite budovy nemuze sdilet bounding box s predchozim spritem.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_GRFID,"Akce %x odkazuje na vyhrazene GRFID.\n",USE_PREFIX|HAS_OFFSET)
  MESSAGE_UNUSED(INSUFFICIENT_INCLUDE)
  MESSAGE_UNUSED(EXTRA_INCLUDE)
  MESSAGE_UNUSED(UNEXPECTED_INCLUDE)
NFO_MESSAGE(OOR_COUNT,"Pokus hospodarit s prilis mnoho ID.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_ID,"ID %2x mimo povoleny rozsah (%2x..%2x).\n",USE_PREFIX)
NFO_MESSAGE(NO_CARGOTYPES,"Pro tuto feature musi byt <num-cid> rovno 0.\n",USE_PREFIX)
NFO_MESSAGE(UNUSED_CONTROL,"Kontrolni znak %2x nema zadnou funkci.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_CONTROL,"V tomto retezci by kontrolni znak %2x nemel byt pouzit.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(SMASH_STACK,"Kontrolni znak %2x neodpovida parametru typu %K na vrchu zasobniku.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(SMASH_STACK_SPAN,"Kontrolni znak %2x cte data z vice parametru.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(OVERRAN_STACK,"V zasobniku neni dostatek dat pro kontrolni znak %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(CANNOT_SHUFFLE,"V zasobniku neni dostatek dat pro presunuti.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(NO_NULL_FOUND,"Chybi koncovy nulovy byte.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_SEVERITY,"Chybny byte zavaznosti.\n",USE_PREFIX)
NFO_MESSAGE(UNKNOWN_LANG_BIT,"ID jazyka %2x ma zapnute nepouzivane bity.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_MESSAGEID,"Chybne ID zpravy.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_PARAM,"%2x neni parametr GRF.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_OVERRIDE,"Pro tuto feature nelze zmenit grafiku.\n",USE_PREFIX)
NFO_MESSAGE(COND_SIZE_MISMATCH,"Podminka %2x vyzaduje %d bytu.\n",USE_PREFIX)
NFO_MESSAGE(REAL_VAL_TOO_SMALL,"Chybna metadata. %s nesmi byt nizsi nez %d.\n",USE_PREFIX)
NFO_MESSAGE(REAL_VAL_TOO_LARGE,"Chybna metadata. %s nesmi byt vyssi nez %d.\n",USE_PREFIX)
  MESSAGE_UNUSED(REAL_MOVES_UP)
NFO_MESSAGE(REAL_BAD_COMP,"Chybna metadata. Komprese musi byt 01, 03, 09 nebo 0B.\n",USE_PREFIX)
NFO_MESSAGE(REAL_SPRITE_TOO_LARGE,"Chybna metadata. Velikost spritu presahuje 64K.\n",USE_PREFIX)
NFO_MESSAGE(INVALID_TEXTID,"TextID %4x neexistuje.\n",USE_PREFIX|HAS_OFFSET)
  MESSAGE_UNUSED(DWORD_CALLBACK)
NFO_MESSAGE(CHECK_0C_RANGE,"Zkouseni promenne 0C v rozsahu [%2x,%2x].\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_CALLBACK,"Pro tuto feature callback %2x neexistuje.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_FONT,"Font %2x neexistuje.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(SPANS_BLOCKS,"Skupina %d deklaruje znaky pro vice bloku.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(OVERRAN_F_NAME,"Retezec s nazvy jazyka %2x neobsahuje koncovy nulovy byte.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(OVERRAN_F_PART,"Cast nazvu zacinajici na pozici %d neobsahuje koncovy nulovy byte.\n",USE_PREFIX)
NFO_MESSAGE(OBSCURED_VARIATION,"Variace %d je castecne zakryta.\n",USE_PREFIX)
NFO_MESSAGE(UNREACHABLE_DEFAULT,"Standardni vysledek neni dosazitelny.\n",USE_PREFIX)
NFO_MESSAGE(DIVIDE_BY_ZERO,"var-adjust se pokousi delit nulou.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(USE_SHIFT_AND,"Zde staci pouzit argumenty shift-and a var-adjust.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_SHIFT,"Argument shift nemuze mit oba nejvyssi bity zapnute.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(UNDEFINED_TRIGGER,"Pouziti neexistujici spousteci udalosti.\n",USE_PREFIX)
NFO_MESSAGE(OVERLENGTH_UTF8,"Chybna sekvence UTF-8: Prilis dlouhe vyjadreni kodu znaku.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INVALID_UTF8,"Chybna sekvence UTF-8: Prvni byte neni nasledovan dostatecnym poctem pokracovacich bytu.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(OUTOFRANGE_UTF8,"Chybna sekvence UTF-8: Koduje znak mimo BMP.\n",USE_PREFIX|HAS_OFFSET)
  MESSAGE_UNUSED(UNEXPECTED_UTF8_CONT)
NFO_MESSAGE(UNKNOWN_LANGUAGE,"Jazyk %2x neni definovan.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(INCLUDING_00_ID,"Pouziti TextID %4x, ktere obsahuje nulovy byte.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(AUTOCORRECTING,"Automaticka oprava %s z %2x na %2x.\n",HAS_OFFSET)
NFO_MESSAGE(EMBEDDED_00,"Nulovy byte uprostred retezce.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(LONG_JUMPLEAD,"Nasledujici Akce 7/9 skacou za konec tohoto souboru:\n",USE_PREFIX|NO_CONSOLE)
MESSAGE_EX(LONG_JUMP,"Akce %x ve spritu %d.\n",MAKE_COMMENT|NO_CONSOLE,NFO,LONG_JUMPLEAD)
NFO_MESSAGE(NO_TEXTS,"Akce 4 nedeklaruje zadne retezce.\n",USE_PREFIX)
NFO_MESSAGE(AUTOCORRECT_ADD,"Pridavam koncovy byte %2x.\n",0)
NFO_MESSAGE(INVALID_EXT_CODE,"Rozsireny format %2x neexistuje.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(FEATURE_LINK_MISMATCH,"ID %2x je definovano pro feature %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(FEATURE_CALL_MISMATCH,"ID %2x je definovano pro feature %2x.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(AUTOCORRECT_LOOP,"System pro automatickou opravu se pravdepodobne zasekl v nekonecnem cyklu.\n",USE_PREFIX)
NFO_MESSAGE(BITS_OVERLAP,"Polozka %d argumentu <parts> pouziva nasledujici bity, ktere jiz byly v teto akci F pouzity: %s\n",USE_PREFIX|HAS_OFFSET)
MESSAGE_EX(MISSING_LANG_NAME,"Pro %L nebyl specifikovan zadny nazev.\n",MAKE_COMMENT|USE_PREFIX,NFO,MISSING_FALLBACK)
NFO_MESSAGE(OUT_OF_RANGE_TEXTID_13,"Akce 13 muze pouze definovat texty pro ID v rozsazich C4xx, C5xx, C9xx, D0xx a DCxx.\n",USE_PREFIX)
NFO_MESSAGE(AND_00,"Operace AND hodnotou 0.\n",USE_PREFIX|HAS_OFFSET)
NFO_MESSAGE(GENERIC_AND_OVERRIDE,"Akce 3 muze byt bud obycejna nebo pro zmenu nateru, ne oboji.\n",USE_PREFIX)

/* Insert new NFO_MESSAGEs above this line unless a MESSAGE_UNUSED appears in a logical location. */

#if defined DEBUG || defined _DEBUG
ERR_MESSAGE(BAD_STRING,"Chyba: Retezec %d neexistuje (%d/%d).\n",0)
#else
ERR_MESSAGE(BAD_STRING,"Chyba: Retezec %d neexistuje.\n",0)
#endif

END_MESSAGES()