
#ifndef EC_PARSER_H
#define EC_PARSER_H


extern void parse_options(int argc, char **argv);

extern void expand_token(char *s, u_int max, void (*func)(void *t, int n), void *t );
extern int match_pattern(const char *s, const char *pattern);


#endif

/* EOF */

// vim:ts=3:expandtab

