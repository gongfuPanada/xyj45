//mac's qiyan.c
#include <room.h>

inherit ROOM;

void create()
{
  set("short","���̾ŵ�");
  set("long",@LONG
һ�����Ʒ���������ʯ�����ɽ���ϣ������ĸ����֣����̾ŵ㡣
ɽ������ս������³��������ĵ��̡��Ӵ˸��ӿ��Կ���Զ�����ϳ���
���ϵĴ��̼�ɽ���¡��������ε�˴��ɽׯ����ɽ�Ĺ����Լ��˳ǵ���
�������ݴ˿ɼ�һ�ߡ�
LONG
  );
  set("exits",([
         "westdown":__DIR__"tanghuai.c",
         "eastup"  :__DIR__"fudi.c"
               ]));
        set("objects", ([
                __DIR__"npc/monk" : 1,
       ]) );
        set("outdoors", "qianfo");
  setup();
  replace_program(ROOM);
}