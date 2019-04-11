#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int BLKSIZE = 4096,NBLK = 2047,FNSIZE = 128,LBSIZE = 4096,ESIZE = 256,GBSIZE = 256,NBRA = 5,KSIZE = 9,CBRA = 1,CCHR = 2,CDOT = 4,CCL = 6,NCCL = 8,CDOL = 10,CEOF = 11,CKET = 12,CBACK = 14,CCIRC = 15,STAR = 01,READ = 0, WRITE = 1;
long lseek(int, long, int);
int open(char *, int);
int creat(char *, int);
int read(int, char *, int);
int write(int, char *, int);
int close(int);
int fork(void);
int wait(int *);
int unlink(char *);
char *mktemp(char *);
char *getblock(unsigned int atl, int iof);
char *m_getline(unsigned int tl);
char *place(char *sp, char *l1, char *l2);
void add(int i);
int advance(char *lp, char *ep);
int append(int (*f)(void), unsigned int *a);
int backref(int i, char *lp);
void blkio(int b, char *buf, int (*iofcn)(int, char *, int));
int cclass(char *set, int c, int af);
void commands(void);
void compile(int eof);
void error(char *s);
int execute(unsigned int *addr);
void exfile(void);
void filename(void);
void gdelete(void);
int getchr(void);
int getcopy(void);
int getfile(void);
int getnum(void);
void global(int k);
void init(void);
void newline(void);
void nonzero(void);
void onhup(int n);
void onintr(int n);
void print(void);
void putchr(int ac);
void putfile(void);
int putline(void);
void quit(int n);
void rdelete(unsigned int *ad1, unsigned int *ad2);
void setwide(void);
void setnoaddr(void);
void squeeze(int i);
typedef void (*SIG_TYP)(int);
