//program to keep track of your books in a library using pointer
#include <stdio.h>

struct book
{
	char title[100];
	char author[100];
	char subject[100];
	int book_id;
};

int main()
{
	struct book b1, b2;
	struct book *b1p, *b2p;

	b1p = &b1;
	b2p = &b2;

	printf("Enter the book details details in the order of title, author, subject, book_id\n");
	scanf("%[^\n]", b1p->title);
	scanf(" %[^\n]", b1p->author);
	scanf(" %[^\n]", b1p->subject);
	scanf("%d", &b1p->book_id);
	
	printf("Enter the book details details in the order of title, author, subject, book_id\n");
	scanf(" %[^\n]", b2p->title);
	scanf(" %[^\n]", b2p->author);
	scanf(" %[^\n]", b2p->subject);
	scanf("%d", &b2p->book_id);

	printf("Book details are\n");
	printf("Book-1:\n Title:%s\nAuthor:%s\nSubject:%s\nBook Id:%d\n",b1p->title, b1p->author, b1p->subject, b1p->book_id);
	printf("Book-2:\n Title:%s\nAuthor:%s\nSubject:%s\nBook Id:%d\n",b2p->title, b2p->author, b2p->subject, b2p->book_id);
}