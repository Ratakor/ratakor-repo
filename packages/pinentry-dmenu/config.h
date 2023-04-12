/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by pinentry-dmenu.conf */

static unsigned int mon = -1;
static unsigned int centerwidth = 450;
static unsigned int embedded = 0;
static unsigned int lineheight = 25;
static unsigned int borderwidth = 1;
static unsigned int minpwlen = 32;
static unsigned int alphas[SchemeLast][2] = {
	/* values between 0 (transparent) and 255 (opaque) */
	/*          foreground, background */
	[SchemePrompt] = { 255, 0xe0 },
	[SchemeNormal] = { 255, 0xe0 },
	[SchemeSelect] = { 255, 0xe0 },
	[SchemeDesc]   = { 255, 0xe0 },
};

static const char *position = "center";
static const char *fonts[] = {
	"monospace:size=12"
};
static const char *prompt = NULL;
static const char *asterisk = "*";
static const char *colors[SchemeLast][2] = {
	/*                foreground, background */
	[SchemePrompt] = { "#f8f8f2", "#282a36" },
	[SchemeNormal] = { "#f8f8f2", "#282a36" },
	[SchemeSelect] = { "#f8f8f2", "#6272a4" },
	[SchemeDesc]   = { "#f8f8f2", "#282a36" },
};
