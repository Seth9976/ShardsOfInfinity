// 函数名称: sub_414c50
// 虚拟地址: 0x414c50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_414c50(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax = *(arg2 + 4)
    int32_t eax = *(arg2 + 4)
    
    if (*(arg1 + 4) != 0)
        if (eax != 0)
            int32_t eax_1
            eax_1.b = *(arg1 + 8) == *(arg2 + 8)
            return eax_1
    else if (eax == 0)
        eax.b = 1
        return eax
    
    eax.b = 0
    return eax
}
