inherit ROOM;
void create()
{
        set("short", "��Թ��");
        set("long", @LONG
������̴ľ�㰸������ȼ�ż����㣬������̴����������������õ��ˣ���Ը��
������Թһ�ʹ�����������������������Ϊ����������ˣ����������Ķ���ԹԹ��
ֻ����������£��ˣΣţţ̣���
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"jhuang",
]));
	set("no_fight",1);
	set("no_magic",1);
	set("NONPC",1);
        setup();
}

void init()
{
	add_action("do_kneel", "kneel");
}

int do_kneel()
{
	this_player()->remove_all_killer();
	message_vision("$N���ڵأ�����������ǰ���еĳ�ң�\n",this_player());
	return 1;

}