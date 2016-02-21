// seller.c

inherit NPC;

void create()
{
	set_name("�󱸱�", ({ "guard" }) );
	set("gender", "����" );
	set("age", 28);
	set("long",
		"�����ķ�������������������ɱ���ǲ����ܵ����ˡ�\n");
	set("combat_exp", 50000);
	set("attitude", "friendly");
	setup();
	
	carry_object( __DIR__"obj/blade")->wield();
}

int accept_object(object who,object ob)
{
	object obj1,obj2;



	who=this_player();
	
	if ( ob->value()==30000 ) {
		if ( this_player()->query_temp("Get_seal") ) {
			command("say ���Ѿ������˰���");
			command("say ��ô��Ǯ�����Ҿ�û����:P");
			return 1;
		}

		obj1=new(__DIR__"obj/fake_seal");
		if ( obj1->violate_unique() ) {
			command("say .......");
			command("say �����ˣ�������һ����.. seal �������ˡ�");
			command("say �ⶫ�����û�ȥ�ɡ�");
			destruct(obj1);
			return 0;
		}

		command("say �������������ˣ�һ�۾Ϳ���������");
		command("say ���ӡ���Ϳ���Ǯ�ķ��Ϻ��㽻����");
		obj1=new(__DIR__"obj/fake_seal");
		obj1->move(who);
        this_player()->set_temp("Get_seal", 1);
		return 1;
	}
	
	if ( !query_temp("check") ) {
		if ( ((string)ob->name() == "ӡ��") && 
		     who->query_temp("����/kick") ) {
			command("say �ðɣ���Ȼ���㷢���ˣ�ֻ�������ˡ�");
			command("say �����������ȥ��");
			obj2=new(__DIR__"obj/seal");
			obj2->move(who);
			who->delete_temp("����/kick");
			set_temp("check", 1);
			return 1;
		} else {
			command("say ����������ʲô���Ҳ�Ҫ�����û�ȥ�ɡ�");
			return 0;
		}
	} 
	command("say �����Ǯ�Ļ�������û���ˡ�");
	command("say �����Ķ����Ҷ���Ҫ�������������ˡ�");
	return 0;
}
			
	