// 定义一个结构体来表示一个学生
#include<stdio.h>
struct Student {
    char *name;      // 学生姓名
    int score;       // 学生成绩
    struct Student *next; // 指向下一个学生的指针，可以用来链接多个学生
   
};
void printinfo(struct Student A)
{

}

// 初始化一个学生
struct Student createStudent(char *name, int score) {
    struct Student stu;
    stu.name = name;
    stu.score = score;
    stu.next = NULL;
    return stu;
}
 
// 打印学生信息
//void printStudent(struct Student stu) {
  //  printf("Name: %s, Score: %d\n", stu.name, stu.score);
//}
 
int main() {
    struct Student stu0 = createStudent("Alice", 90);
    struct Student stu1=createStudent("SSS",44);
    stu0.next=&stu1;
    

    getinfo((stu0.next));
    return 0;
}
