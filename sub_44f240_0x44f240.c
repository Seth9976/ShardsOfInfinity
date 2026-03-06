// 函数名称: sub_44f240
// 虚拟地址: 0x44f240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_44f240(char** arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    
    if (*esi == 0)
        *arg1 = &data_5559b1
        return 
    
    char i
    
    do
        i = *arg2
        arg2 = &arg2[1]
    while (i != 0)
    sub_44f060(arg1, arg2 - &arg2[1])
    char* ecx_2 = *arg1
    char i_1
    
    do
        i_1 = *esi
        esi = &esi[1]
        *ecx_2 = i_1
        ecx_2 = &ecx_2[1]
    while (i_1 != 0)
}
