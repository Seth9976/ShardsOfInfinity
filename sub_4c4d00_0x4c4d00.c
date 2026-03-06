// 函数名称: sub_4c4d00
// 虚拟地址: 0x4c4d00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4c4d00(int32_t* arg1)
{
    // 第一条实际指令: arg1[3] = 0
    arg1[3] = 0
    char* eax = *arg1
    
    if (eax == 0 || *eax == 0)
        arg1[1] = 0
        return eax
    
    int32_t eax_2 = *(sub_44f000(arg1) + 8)
    arg1[1] = eax_2
    return eax_2
}
