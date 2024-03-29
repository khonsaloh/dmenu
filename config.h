
static int topbar = 1;       /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;     /* -c option; centers dmenu on screen */
static int min_width = 500;  /* minimum width when centered */
static int fuzzy = 1;        /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:pixelsize=11:antialias=true:autohint=true",
	"JoyPixels:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	/* [SchemeNorm] = { "#cccccc", "#282a36" }, */
	/* [SchemeSel] = { "#ffffff", "#924441" }, */
	[SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeSel] = { "#f8f8f2", "#6272a4" },
	/* [SchemeNorm] = { "#ebdbb2", "#282828" }, */
	/* [SchemeSel] = { "#ebdbb2", "#98971a" }, */
	/* [SchemeOut] = { "#ebdbb2", "#8ec07c" }, */
	[SchemeSelHighlight] = { "#d7d7d7", "#000000" },
	[SchemeNormHighlight] = { "#e78481", "#000000" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 15;
static unsigned int lineheight = 22;  /* -h option; minimum height of a menu line */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;  /* -bw option; to add border width */
