// sheshen.c

inherit ROOM;

void create()
{
        set("short", "������");
	set("long", @LONG
����һ�μ�խ���յ�ɽ�£������������ƣ�����Ԩ���޵ס��粻С��
��һʧ�����ȥ��ֻ������ͷ���Ҳ�����
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
	  "eastdown" : __DIR__"canglong",
	]));
	
	set("objects",([
		__DIR__"npc/referee" : 1,
	]));

        set("no_clean_up", 0);
        set("outdoors", "xx" );

        setup();
        replace_program(ROOM);
}
 