inherit ITEM;

#include <ansi.h>

void create()
{
	set_name(HIB"һƿ����ɫ�Ŀ���"NOR,({ "cola" }) );
	set("long", "����һƿֻ����Void �ż��ĵ��Ľ�Ʒ���ڿ�ʹ���̲�ס��
����һ��(drink)��\n");
	set("unit", "ƿ");
	set("base_weight", 200);
}

void init()
{
	if( this_player()==environment() )
		add_action("do_drink", "drink");
}

int do_drink(string arg)
{
	object ob;

	if( !arg || arg != "cola") 
		return notify_fail("��Ҫ����ô��? \n");

	message_vision( MAG
 	"$N���˿ڿ���,���������,�ƺ���ζ����.....\n"+HIR
 	"$N����¶������ı���....\n" NOR,this_player()  
 	); //end_message_vision
	message_vision(WHT"��ƿ���ֱ�$N�����ˣ�$N����һ����˵Ҳ��ֵؾͲ����ˡ�
				\n"NOR,this_player() );

    	
    	this_player()->set("water",this_player()->max_water_capacity());
	destruct(this_object());
	
	return 1;
}