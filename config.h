/* user and group to drop privileges to */
static const char *user  = "sestowner";
static const char *group = "sestowner";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#002600",   /* during input */
	[FAILED] = "#4C0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

