// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
 // ji.c ������
 // created 7-4-97 pickle

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
    string targetname, fabaoname;
    object obj, *inv, target, obj2,old_env, fabao;
    int i, amount;
    mixed no_get;

    if( !wizardp(me) && environment(me)->query("no_magic") )
   return notify_fail("�����ֹ��������\n");
    if( !arg ) return notify_fail("��Ҫ������������\n");

    // Check if correct format is followed
    if( sscanf(arg, "%s on %s", fabaoname, targetname)>2 )
   return notify_fail("ָ���ʽ : ji <��������> [on <Ŀ��>]\n");

    // Check if both a fabao and a target is specified.
    // if so, then check 1. whether the player own's the fabao,
    // and 2. check whether the target is in the same environment.
    if( sscanf(arg, "%s on %s", fabaoname, targetname)==2 )
    {
   fabao=present(fabaoname, me);
   if(!fabao) return notify_fail("��û�� "+fabaoname+" ����������\n");
   target = present(targetname, environment(me));
   if (me->is_busy() && !fabao->query("no_busy"))
       return notify_fail("����һ��������û����ɣ���Ͼ������������\n");
   if(!target) return notify_fail("����û�� " + targetname + "��\n");
   return fabao->ji(targetname);
   
}
    fabao=present(arg, me);
    if(!fabao) return notify_fail("��û��" + arg +"����������\n");
    if (me->is_busy() && !fabao->query("no_busy"))
   return notify_fail("����һ��������û����ɣ���Ͼ������������\n");

    return fabao->ji();
}
int help(object me)
{
    write(@HELP
ָ���ʽ : ji <��������> [on <Ŀ��>]

���ָ����������һ�����

HELP
        );
          return 1;
      }