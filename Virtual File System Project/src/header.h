#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<io.h>

#define MAXINODE 50 
#define READ 1
#define WRITE 2


#define MAXFILESIZE 2048

#define REGULAR 1
#define SPECIAL 2

#define START 0
#define CURRENT 1
#define END 2

typedef struct superblock
{
	int TotalInodes;
	int FreeInode; 
}SUPERBLOCK, *PSUPERBLOCK;

typedef struct inode 
{
	char FileName[50];
	int InodeNumber;
	int FileSize;
	int FileActualSize;
	int FileType;
	char *Buffer;
	int LinkCount;
	int ReferenceCount;
	int permission; // 1	23
	struct inode *next; 
}INODE,*PINODE,**PPINODE; 

typedef struct filetable 
{
	int readoffset;
	int writeoffset;
	int count;
	int mode; // 1 2	3
	PINODE ptrinode; 
}FILETABLE,*PFILETABLE; 

typedef struct ufdt 
{
	PFILETABLE ptrfiletable; 
}UFDT;

extern UFDT UFDTArr[50];
extern SUPERBLOCK SUPERBLOCKobj;

void man(char *);
void DisplayHelp();

int GetFDFromName(char *);
PINODE Get_Inode(char * );
void CreateDILB();
void InitialiseSuperBlock();
int CreateFile(char *,int );
int rm_File(char * );
int ReadFile(int , char *, int );
int WriteFile(int , char *, int );
int OpenFile(char *, int );
void CloseFileByName(int );
int CloseFileByName(char *);
void CloseAllFile();

int LseekFile(int , int , int );
void ls_file();
int fstat_file(int );
int stat_file(char *);
int truncate_File(char *);


