// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// created by snowcat.c 10/21/1997
// room: /d/qujing/chechi/jieshi8.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

ӵ���ĳ��ٹ����У�����שʯ�̳ɡ��������У��־�����������
Ŀ��Ͼ���������в����������شҴ��߹���ż����ЩС����;��
�߽б�����ʲô��

LONG);

  set("exits", ([
        "west"         : __DIR__"xitai",
        "south"        : __DIR__"yanhua",
        "north"        : __DIR__"jieshi6",
      ]));

  set("objects", ([
        __DIR__"npc/people" : 2,
  ]));

  set("outdoors","/d/qujing/chechi");
  setup();
}
