/* user and group to drop privileges to */
static const char *user  = "sestowner";
static const char *group = "sestowner";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#002b36",   /* after initialization */
	[INPUT] =  "#268bd2",   /* during input */
	[FAILED] = "#cb4b16",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

