// 
// 

inherit ROOM;
void create()
{
        set("short", "ɽ�ȿ�");
        set("long", @LONG
����Խ��Խ�ӣ���ֱ���ڿ��ȣ�������ɽ�ȣ������ѱ��һ�ɺ�¯��
Ҫ�������ǵ���ꡣ����ǰ�棬ɽ���л�Ȼ���ʣ�Ⱥ��ϱ��䣬����һ
Ƭ������
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"flower",
  "north" : __DIR__"flower2",
]));

        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}