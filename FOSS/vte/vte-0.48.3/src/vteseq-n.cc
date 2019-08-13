/* C++ code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf -m 100 vteseq-n.gperf  */
/* Computed positions: -k'2,8,12,18' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 17 "vteseq-n.gperf"
struct vteseq_n_struct {
	int seq;
	VteTerminalSequenceHandler handler;
};
#include <string.h>
/* maximum key range = 128, duplicates = 0 */

class vteseq_n_hash
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct vteseq_n_struct *lookup (const char *str, size_t len);
};

inline unsigned int
vteseq_n_hash::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131,   0,  31, 131, 131,  36,
       33, 131, 131, 131, 131,   2, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131,   9,   3,   0,
       53,   0,  13,  17,   8,  30,  19,  46,  31,  22,
       33,   0,   6,   1,  24,   9,  22,   4,  62, 131,
        0, 131,   0, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
      131, 131, 131, 131, 131, 131, 131
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[17])];
      /*FALLTHROUGH*/
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
        hval += asso_values[static_cast<unsigned char>(str[11]+1)];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1])];
        break;
    }
  return hval;
}

struct vteseq_n_pool_t
  {
    char vteseq_n_pool_str3[sizeof("nop")];
    char vteseq_n_pool_str4[sizeof("bell")];
    char vteseq_n_pool_str6[sizeof("decset")];
    char vteseq_n_pool_str8[sizeof("set-mode")];
    char vteseq_n_pool_str9[sizeof("form-feed")];
    char vteseq_n_pool_str10[sizeof("reset-mode")];
    char vteseq_n_pool_str11[sizeof("reset-color")];
    char vteseq_n_pool_str12[sizeof("tab")];
    char vteseq_n_pool_str13[sizeof("scroll-up")];
    char vteseq_n_pool_str16[sizeof("tab-set")];
    char vteseq_n_pool_str17[sizeof("cursor-up")];
    char vteseq_n_pool_str18[sizeof("backspace")];
    char vteseq_n_pool_str19[sizeof("soft-reset")];
    char vteseq_n_pool_str20[sizeof("delete-characters")];
    char vteseq_n_pool_str21[sizeof("shift-out")];
    char vteseq_n_pool_str22[sizeof("cursor-backward")];
    char vteseq_n_pool_str23[sizeof("full-reset")];
    char vteseq_n_pool_str25[sizeof("restore-mode")];
    char vteseq_n_pool_str26[sizeof("reverse-index")];
    char vteseq_n_pool_str27[sizeof("tab-clear")];
    char vteseq_n_pool_str28[sizeof("carriage-return")];
    char vteseq_n_pool_str29[sizeof("cursor-position")];
    char vteseq_n_pool_str30[sizeof("decreset")];
    char vteseq_n_pool_str31[sizeof("reset-foreground-color")];
    char vteseq_n_pool_str32[sizeof("change-color-st")];
    char vteseq_n_pool_str33[sizeof("change-color-bel")];
    char vteseq_n_pool_str34[sizeof("cursor-forward")];
    char vteseq_n_pool_str35[sizeof("urxvt-777")];
    char vteseq_n_pool_str36[sizeof("restore-cursor")];
    char vteseq_n_pool_str37[sizeof("cursor-position-top-row")];
    char vteseq_n_pool_str38[sizeof("index")];
    char vteseq_n_pool_str39[sizeof("line-feed")];
    char vteseq_n_pool_str40[sizeof("reset-background-color")];
    char vteseq_n_pool_str41[sizeof("cursor-character-absolute")];
    char vteseq_n_pool_str42[sizeof("next-line")];
    char vteseq_n_pool_str43[sizeof("vertical-tab")];
    char vteseq_n_pool_str44[sizeof("save-cursor")];
    char vteseq_n_pool_str45[sizeof("change-background-color-st")];
    char vteseq_n_pool_str46[sizeof("change-background-color-bel")];
    char vteseq_n_pool_str47[sizeof("set-cursor-style")];
    char vteseq_n_pool_str48[sizeof("cursor-forward-tabulation")];
    char vteseq_n_pool_str49[sizeof("shift-in")];
    char vteseq_n_pool_str50[sizeof("set-scrolling-region")];
    char vteseq_n_pool_str51[sizeof("set-icon-title")];
    char vteseq_n_pool_str52[sizeof("screen-alignment-test")];
    char vteseq_n_pool_str53[sizeof("cursor-back-tab")];
    char vteseq_n_pool_str54[sizeof("character-attributes")];
    char vteseq_n_pool_str55[sizeof("change-foreground-color-st")];
    char vteseq_n_pool_str56[sizeof("change-foreground-color-bel")];
    char vteseq_n_pool_str57[sizeof("set-scrolling-region-to-end")];
    char vteseq_n_pool_str58[sizeof("set-icon-and-window-title")];
    char vteseq_n_pool_str59[sizeof("reset-cursor-background-color")];
    char vteseq_n_pool_str60[sizeof("send-primary-device-attributes")];
    char vteseq_n_pool_str61[sizeof("set-scrolling-region-from-start")];
    char vteseq_n_pool_str62[sizeof("normal-keypad")];
    char vteseq_n_pool_str64[sizeof("scroll-down")];
    char vteseq_n_pool_str65[sizeof("delete-lines")];
    char vteseq_n_pool_str66[sizeof("request-terminal-parameters")];
    char vteseq_n_pool_str67[sizeof("line-position-absolute")];
    char vteseq_n_pool_str68[sizeof("cursor-down")];
    char vteseq_n_pool_str69[sizeof("iterm2-1337")];
    char vteseq_n_pool_str70[sizeof("erase-in-line")];
    char vteseq_n_pool_str71[sizeof("save-mode")];
    char vteseq_n_pool_str72[sizeof("window-manipulation")];
    char vteseq_n_pool_str73[sizeof("set-window-title")];
    char vteseq_n_pool_str74[sizeof("character-position-absolute")];
    char vteseq_n_pool_str75[sizeof("cursor-preceding-line")];
    char vteseq_n_pool_str76[sizeof("dec-device-status-report")];
    char vteseq_n_pool_str77[sizeof("change-highlight-background-color-st")];
    char vteseq_n_pool_str78[sizeof("change-highlight-background-color-bel")];
    char vteseq_n_pool_str79[sizeof("set-current-file-uri")];
    char vteseq_n_pool_str80[sizeof("designate-g1-line-drawing")];
    char vteseq_n_pool_str81[sizeof("reset-highlight-foreground-color")];
    char vteseq_n_pool_str83[sizeof("designate-g0-line-drawing")];
    char vteseq_n_pool_str84[sizeof("cursor-next-line")];
    char vteseq_n_pool_str85[sizeof("return-terminal-status")];
    char vteseq_n_pool_str87[sizeof("change-highlight-foreground-color-st")];
    char vteseq_n_pool_str88[sizeof("change-highlight-foreground-color-bel")];
    char vteseq_n_pool_str90[sizeof("reset-highlight-background-color")];
    char vteseq_n_pool_str91[sizeof("device-status-report")];
    char vteseq_n_pool_str92[sizeof("linux-console-cursor-attributes")];
    char vteseq_n_pool_str93[sizeof("change-cursor-background-color-st")];
    char vteseq_n_pool_str94[sizeof("change-cursor-background-color-bel")];
    char vteseq_n_pool_str95[sizeof("erase-in-display")];
    char vteseq_n_pool_str97[sizeof("send-secondary-device-attributes")];
    char vteseq_n_pool_str98[sizeof("insert-lines")];
    char vteseq_n_pool_str99[sizeof("insert-blank-characters")];
    char vteseq_n_pool_str101[sizeof("erase-characters")];
    char vteseq_n_pool_str102[sizeof("set-current-directory-uri")];
    char vteseq_n_pool_str105[sizeof("designate-g1-british")];
    char vteseq_n_pool_str106[sizeof("designate-g1-plain")];
    char vteseq_n_pool_str107[sizeof("set-current-hyperlink")];
    char vteseq_n_pool_str108[sizeof("designate-g0-british")];
    char vteseq_n_pool_str109[sizeof("designate-g0-plain")];
    char vteseq_n_pool_str112[sizeof("return-terminal-id")];
    char vteseq_n_pool_str130[sizeof("application-keypad")];
  };
static const struct vteseq_n_pool_t vteseq_n_pool_contents =
  {
    "nop",
    "bell",
    "decset",
    "set-mode",
    "form-feed",
    "reset-mode",
    "reset-color",
    "tab",
    "scroll-up",
    "tab-set",
    "cursor-up",
    "backspace",
    "soft-reset",
    "delete-characters",
    "shift-out",
    "cursor-backward",
    "full-reset",
    "restore-mode",
    "reverse-index",
    "tab-clear",
    "carriage-return",
    "cursor-position",
    "decreset",
    "reset-foreground-color",
    "change-color-st",
    "change-color-bel",
    "cursor-forward",
    "urxvt-777",
    "restore-cursor",
    "cursor-position-top-row",
    "index",
    "line-feed",
    "reset-background-color",
    "cursor-character-absolute",
    "next-line",
    "vertical-tab",
    "save-cursor",
    "change-background-color-st",
    "change-background-color-bel",
    "set-cursor-style",
    "cursor-forward-tabulation",
    "shift-in",
    "set-scrolling-region",
    "set-icon-title",
    "screen-alignment-test",
    "cursor-back-tab",
    "character-attributes",
    "change-foreground-color-st",
    "change-foreground-color-bel",
    "set-scrolling-region-to-end",
    "set-icon-and-window-title",
    "reset-cursor-background-color",
    "send-primary-device-attributes",
    "set-scrolling-region-from-start",
    "normal-keypad",
    "scroll-down",
    "delete-lines",
    "request-terminal-parameters",
    "line-position-absolute",
    "cursor-down",
    "iterm2-1337",
    "erase-in-line",
    "save-mode",
    "window-manipulation",
    "set-window-title",
    "character-position-absolute",
    "cursor-preceding-line",
    "dec-device-status-report",
    "change-highlight-background-color-st",
    "change-highlight-background-color-bel",
    "set-current-file-uri",
    "designate-g1-line-drawing",
    "reset-highlight-foreground-color",
    "designate-g0-line-drawing",
    "cursor-next-line",
    "return-terminal-status",
    "change-highlight-foreground-color-st",
    "change-highlight-foreground-color-bel",
    "reset-highlight-background-color",
    "device-status-report",
    "linux-console-cursor-attributes",
    "change-cursor-background-color-st",
    "change-cursor-background-color-bel",
    "erase-in-display",
    "send-secondary-device-attributes",
    "insert-lines",
    "insert-blank-characters",
    "erase-characters",
    "set-current-directory-uri",
    "designate-g1-british",
    "designate-g1-plain",
    "set-current-hyperlink",
    "designate-g0-british",
    "designate-g0-plain",
    "return-terminal-id",
    "application-keypad"
  };
#define vteseq_n_pool ((const char *) &vteseq_n_pool_contents)
const struct vteseq_n_struct *
vteseq_n_hash::lookup (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 96,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 37,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 130
    };

  static const unsigned char lengthtable[] =
    {
       0,  0,  0,  3,  4,  0,  6,  0,  8,  9, 10, 11,  3,  9,
       0,  0,  7,  9,  9, 10, 17,  9, 15, 10,  0, 12, 13,  9,
      15, 15,  8, 22, 15, 16, 14,  9, 14, 23,  5,  9, 22, 25,
       9, 12, 11, 26, 27, 16, 25,  8, 20, 14, 21, 15, 20, 26,
      27, 27, 25, 29, 30, 31, 13,  0, 11, 12, 27, 22, 11, 11,
      13,  9, 19, 16, 27, 21, 24, 36, 37, 20, 25, 32,  0, 25,
      16, 22,  0, 36, 37,  0, 32, 20, 31, 33, 34, 16,  0, 32,
      12, 23,  0, 16, 25,  0,  0, 20, 18, 21, 20, 18,  0,  0,
      18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0, 18
    };
  static const struct vteseq_n_struct wordlist[] =
    {
      {-1}, {-1}, {-1},
#line 23 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str3, VTE_SEQUENCE_HANDLER(vte_sequence_handler_nop)},
#line 26 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str4, VTE_SEQUENCE_HANDLER(vte_sequence_handler_bell)},
      {-1},
#line 30 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str6, VTE_SEQUENCE_HANDLER(vte_sequence_handler_decset)},
      {-1},
#line 34 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str8, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_mode)},
#line 36 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str9, VTE_SEQUENCE_HANDLER(vte_sequence_handler_form_feed)},
#line 43 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str10, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_mode)},
#line 51 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str11, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_color)},
#line 28 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str12, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab)},
#line 39 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str13, VTE_SEQUENCE_HANDLER(vte_sequence_handler_scroll_up)},
      {-1}, {-1},
#line 32 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str16, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab_set)},
#line 35 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str17, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_up)},
#line 27 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str18, VTE_SEQUENCE_HANDLER(vte_sequence_handler_backspace)},
#line 44 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str19, VTE_SEQUENCE_HANDLER(vte_sequence_handler_soft_reset)},
#line 82 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str20, VTE_SEQUENCE_HANDLER(vte_sequence_handler_delete_characters)},
#line 130 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str21, VTE_SEQUENCE_HANDLER(vte_sequence_handler_shift_out)},
#line 70 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str22, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_backward)},
#line 41 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str23, VTE_SEQUENCE_HANDLER(vte_sequence_handler_full_reset)},
      {-1},
#line 55 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str25, VTE_SEQUENCE_HANDLER(vte_sequence_handler_restore_mode)},
#line 61 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str26, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reverse_index)},
#line 40 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str27, VTE_SEQUENCE_HANDLER(vte_sequence_handler_tab_clear)},
#line 25 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str28, VTE_SEQUENCE_HANDLER(vte_sequence_handler_carriage_return)},
#line 71 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str29, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_position)},
#line 33 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str30, VTE_SEQUENCE_HANDLER(vte_sequence_handler_decreset)},
#line 136 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str31, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_foreground_color)},
#line 50 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str32, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_color_st)},
#line 49 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str33, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_color_bel)},
#line 65 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str34, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_forward)},
#line 173 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str35, VTE_SEQUENCE_HANDLER(vte_sequence_handler_urxvt_777)},
#line 67 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str36, VTE_SEQUENCE_HANDLER(vte_sequence_handler_restore_cursor)},
#line 72 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str37, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_position_top_row)},
#line 29 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str38, VTE_SEQUENCE_HANDLER(vte_sequence_handler_index)},
#line 24 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str39, VTE_SEQUENCE_HANDLER(vte_sequence_handler_line_feed)},
#line 133 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str40, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_background_color)},
#line 140 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str41, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_character_absolute)},
#line 37 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str42, VTE_SEQUENCE_HANDLER(vte_sequence_handler_next_line)},
#line 57 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str43, VTE_SEQUENCE_HANDLER(vte_sequence_handler_vertical_tab)},
#line 47 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str44, VTE_SEQUENCE_HANDLER(vte_sequence_handler_save_cursor)},
#line 132 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str45, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_background_color_st)},
#line 131 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str46, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_background_color_bel)},
#line 80 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str47, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_cursor_style)},
#line 141 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str48, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_forward_tabulation)},
#line 129 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str49, VTE_SEQUENCE_HANDLER(vte_sequence_handler_shift_in)},
#line 94 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str50, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region)},
#line 68 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str51, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_icon_title)},
#line 101 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str52, VTE_SEQUENCE_HANDLER(vte_sequence_handler_screen_alignment_test)},
#line 69 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str53, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_back_tab)},
#line 92 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str54, VTE_SEQUENCE_HANDLER(vte_sequence_handler_character_attributes)},
#line 135 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str55, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_foreground_color_st)},
#line 134 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str56, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_foreground_color_bel)},
#line 96 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str57, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region_to_end)},
#line 143 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str58, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_icon_and_window_title)},
#line 91 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str59, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_cursor_background_color)},
#line 161 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str60, VTE_SEQUENCE_HANDLER(vte_sequence_handler_send_primary_device_attributes)},
#line 95 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str61, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_scrolling_region_from_start)},
#line 60 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str62, VTE_SEQUENCE_HANDLER(vte_sequence_handler_normal_keypad)},
      {-1},
#line 48 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str64, VTE_SEQUENCE_HANDLER(vte_sequence_handler_scroll_down)},
#line 52 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str65, VTE_SEQUENCE_HANDLER(vte_sequence_handler_delete_lines)},
#line 146 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str66, VTE_SEQUENCE_HANDLER(vte_sequence_handler_request_terminal_parameters)},
#line 106 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str67, VTE_SEQUENCE_HANDLER(vte_sequence_handler_line_position_absolute)},
#line 45 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str68, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_down)},
#line 174 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str69, VTE_SEQUENCE_HANDLER(vte_sequence_handler_iterm2_1337)},
#line 58 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str70, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_in_line)},
#line 38 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str71, VTE_SEQUENCE_HANDLER(vte_sequence_handler_save_mode)},
#line 88 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str72, VTE_SEQUENCE_HANDLER(vte_sequence_handler_window_manipulation)},
#line 79 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str73, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_window_title)},
#line 145 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str74, VTE_SEQUENCE_HANDLER(vte_sequence_handler_character_position_absolute)},
#line 99 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str75, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_preceding_line)},
#line 137 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str76, VTE_SEQUENCE_HANDLER(vte_sequence_handler_dec_device_status_report)},
#line 109 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str77, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_background_color_st)},
#line 108 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str78, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_background_color_bel)},
#line 171 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str79, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_file_uri)},
#line 127 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str80, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g1_line_drawing)},
#line 113 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str81, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_highlight_foreground_color)},
      {-1},
#line 124 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str83, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g0_line_drawing)},
#line 76 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str84, VTE_SEQUENCE_HANDLER(vte_sequence_handler_cursor_next_line)},
#line 107 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str85, VTE_SEQUENCE_HANDLER(vte_sequence_handler_return_terminal_status)},
      {-1},
#line 112 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str87, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_foreground_color_st)},
#line 111 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str88, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_highlight_foreground_color_bel)},
      {-1},
#line 110 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str90, VTE_SEQUENCE_HANDLER(vte_sequence_handler_reset_highlight_background_color)},
#line 93 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str91, VTE_SEQUENCE_HANDLER(vte_sequence_handler_device_status_report)},
#line 162 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str92, VTE_SEQUENCE_HANDLER(vte_sequence_handler_linux_console_cursor_attributes)},
#line 90 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str93, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_cursor_background_color_st)},
#line 89 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str94, VTE_SEQUENCE_HANDLER(vte_sequence_handler_change_cursor_background_color_bel)},
#line 78 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str95, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_in_display)},
      {-1},
#line 163 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str97, VTE_SEQUENCE_HANDLER(vte_sequence_handler_send_secondary_device_attributes)},
#line 54 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str98, VTE_SEQUENCE_HANDLER(vte_sequence_handler_insert_lines)},
#line 115 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str99, VTE_SEQUENCE_HANDLER(vte_sequence_handler_insert_blank_characters)},
      {-1},
#line 77 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str101, VTE_SEQUENCE_HANDLER(vte_sequence_handler_erase_characters)},
#line 170 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str102, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_directory_uri)},
      {-1}, {-1},
#line 128 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str105, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g1_british)},
#line 126 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str106, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g1_plain)},
#line 172 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str107, VTE_SEQUENCE_HANDLER(vte_sequence_handler_set_current_hyperlink)},
#line 125 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str108, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g0_british)},
#line 123 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str109, VTE_SEQUENCE_HANDLER(vte_sequence_handler_designate_g0_plain)},
      {-1}, {-1},
#line 85 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str112, VTE_SEQUENCE_HANDLER(vte_sequence_handler_return_terminal_id)},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 83 "vteseq-n.gperf"
      {(int)(size_t)&((struct vteseq_n_pool_t *)0)->vteseq_n_pool_str130, VTE_SEQUENCE_HANDLER(vte_sequence_handler_application_keypad)}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            const char *s = wordlist[key].seq + vteseq_n_pool;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
