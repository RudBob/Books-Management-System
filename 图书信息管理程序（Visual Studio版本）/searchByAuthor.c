#include "searchByAuthor.h"

//根据作者查询
void searchByAuthor(Book* head) {
	system("cls");		// 清屏

	//如果链表不为空，开始查询
	if (head) {
		Book* p;//定义指针
		char author[20];//定义author用于输入查找书籍
		printf("请输入您要查找图书的作者:");
		//输入查找作者
		scanf("%s", author);
		p = head->next;
		while (p != NULL) {
			if (strcmp(p->author, author) == 0) { //判断是否找到书籍
				//为真时，输出信息
				printf("书籍信息\n");
				printf("编号\t书名\t作者\t数量\t价格\n");
				printf("%d\t%s\t%s\t%d\t%.2f\n", p->id, p->name, p->author, p->inventory, p->price);
				break;
			}
			else
				//为假时
				p = p->next;//指针后移
		}
		if (p == NULL) {	//查找到最后一个节点还未查到要的编号时，输出错误信息
			printf("未查询到该图书！\n");
		}
	}
	//如果为空
	else {
		printf("还未创建图书链表，请添加书本后再查询!\n");
	}

	//使页面停留在当前页
	printf("输入任意键返回......");
	getch();
}
