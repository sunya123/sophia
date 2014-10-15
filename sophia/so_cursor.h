#ifndef SO_CURSOR_H_
#define SO_CURSOR_H_

/*
 * sophia database
 * sphia.org
 *
 * Copyright (c) Dmitry Simonenko
 * BSD License
*/

typedef struct socursor socursor;

struct socursor {
	soobj o;
	int ready;
	srorder order;
	smtx t;
	sov v;
	soobj *key;
	sodb *db;
} srpacked;

soobj *so_cursornew(sodb*, va_list);

#endif
