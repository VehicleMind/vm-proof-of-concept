/*_
 * Copyright 2010 Scyphus Solutions Co. Ltd.  All rights reserved.
 *
 * Authors:
 *      Hirochika Asai
 */

#ifndef _URL_PARSER_H_INCLUDED
#define _URL_PARSER_H_INCLUDED

/*
 * URL storage
 */
struct parsed_url {
    char *scheme;               /* mandatory */
    char *host;                 /* mandatory */
    char *port;                 /* optional */
    char *path;                 /* optional */
    char *query;                /* optional */
    char *fragment;             /* optional */
    char *username;             /* optional */
    char *password;             /* optional */
};

#ifdef __cplusplus
extern "C" {
#endif

    /*
     * Declaration of function prototypes
     */
    struct parsed_url * parse_url(const char *);
    void parsed_url_free(struct parsed_url *);

#ifdef __cplusplus
}
#endif

#endif