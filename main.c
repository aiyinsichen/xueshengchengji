#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct student arr[1000];
int index = 0;


int main(){

    printf("xueshengchengjiguanluxitong\n");


    while(1){
        printf("1--tianjiaxueshengchengji\n");
        printf("2--shanchuxueshengchengji\n");
        printf("3--xianshisuoyouxueshengchengji\n");
        printf("4--yewu1:suoyouyzongfenbujigedexuesheng(xiaoyu180)\n");
        printf("5--yewu2:meiyikedoubujigedexuesheng\n");
        printf("6--yewu3:xianshizongfenzuigaodexuesheng\n");
        printf("7--yewu4:xianshipingjunfenzuigao,qiemeiyoubujigekemudexuesheng\n");
        printf("8--tuichu\n");


        printf("qingxuanze:\n");

        int code;
        scanf("%d",&code);
        
        if(code == 1){
           printf("qingshuruxueshengxingming:\n");
           scanf("%s",arr[index].name);

           printf("qingshuruxueshengyuwenchengji\n");
           scanf("%d",&(arr[index].yuwen));

           printf("qingshuruxueshengshuxuechengji\n");
           scanf("%d",&(arr[index].shuxue));

           printf("qingshuruxueshengyingyuchengji\n");
           scanf("%d",&(arr[index].yingyu));

           index++;

           printf("tianjichenggong,dianjihuichejixu\n");
           char x;
           scanf("%c",&x);
           scanf("%c",&x);
        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            
        }
        if(code == 6){
            
        }
        if(code == 7){
            
        }
        if(code == 8){
            
        }
    }

    return 0;

}