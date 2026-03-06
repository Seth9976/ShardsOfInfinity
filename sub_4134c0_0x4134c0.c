// 函数名称: sub_4134c0
// 虚拟地址: 0x4134c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4134c0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x618) == 0xffffffff)
    if (*(arg1 + 0x618) == 0xffffffff)
        void* eax
        eax.b = 0
        return eax
    
    *arg2 = 0
    int32_t ecx = 0
    int32_t esi = *(arg1 + 0x618)
    
    if (esi s> 0)
        *arg2 = 2
        ecx = 2
        esi = *(arg1 + 0x618)
    
    if (esi s< *(arg1 + 0x400) - 1)
        *arg2 = ecx | 4
    
    int32_t eax_2
    eax_2.b = 1
    return eax_2
}
