// 
// 

inherit NPC;
int give_qin();
void create()
{
        set_name("�ƺ�", ({ "yunhai" }) );
        set("gender", "����" );
        set("class", "bonze");
	set("title","�˹��������ֱ���ʦ");
        set("age", random(40)+20);
        set("cor", 24);
        set("cps", 29);
        set("int", 25);
        set("long", "�����˹��������������������ֱ���ʦ\n");
        set("combat_exp", 6000000);
        set("attitude", "friendly");
        set("max_force", 500);
        set("force", 500);
        set("force_factor", 5);
        set("chat_chance", 1);
        set("chat_msg", ({
                "�ƺ�˵�����������������\n",
        }) );
        set("inquiry", ([
		"��������" : (: give_qin :),
		"femen" : (: give_qin :),
	]));
        setup();
        carry_object(__DIR__"obj/monk_cloth")->wear();
        carry_object(__DIR__"obj/shoe2")->wear();
}
int accept_fight(object me)
{
        command("say �����ӷ�ƶɮ�书��΢��ʩ����Ҫ��������Ц��\n");
        return 0;
}

int give_qin()
{
        object obj;
if( !query("given"))
        {
command("say �Ұﲻ����ܶ࣬���Ҳ��������˭����������������ȥ�ɣ�\n");
obj = new(__DIR__"obj/shoe2");
command("give shoes to "+this_player()->query("id"));
set("given",1);
        }
else
command("say ��Ҳ�ﲻ���㣡\n");
        return 1;
}

void reset()
{
delete("given");
}
