// Room: /city/shuyuan.c
// YZC 1995/12/04 

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
	��������Ժ�Ľ��ã�����������һ����Ⱦ��һλׯ���������������̫ʦ
���Ͻ�ѧ���Ǿ��ǵ�������������ˡ�������������������ѧ��ѧ����һ�Ź��ⰻ
Ȼ���鰸������������ǰ�棬���ϰ��ż��������˵���װ�鼮����������������һ
�����(shujia)�����ڶ��������ʯ�̣������Ժ��ʷ���ƾá�ֵ��һ�����Ƕ��
����ǰ��ڵ�ѧ��(xuegui)��
LONG
	);

	set("exits", ([
		"south" : __DIR__"dongdajie1",
	]));

	set("item_desc", ([
		"xuegui" : "�ս����������տ���Ŀ��ҳ��"  
			"\nͨ��ʱ���������ζ�����ʫ����" 
			"\n���������ʣ���ΰ�ʱ���ꡣ"
			"\nҹ���Խ���������Ҫ������\n\n"
			"��ѧ���ѧ��ʮ��\n",
	]));
	
	set("objects", ([
		__DIR__"npc/zhu": 1,
	]));

	setup();
}

int valid_leave(object me, string dir)
{
	me->set_temp("mark/��", 0);
	return 1;
}
