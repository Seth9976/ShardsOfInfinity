// 函数名称: sub_50ec00
// 虚拟地址: 0x50ec00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_50ec00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< 0)
    if (arg2 s< 0)
        *(arg1 + 0xa8) = *(arg1 + 0xac)
        return 
    
    if (*(arg1 + 0x10) != 0)
        int32_t esi_1 = *(arg1 + 0xac)
        int32_t eax = esi_1 - *(arg1 + 0xa8)
        
        if (eax s< arg2)
            *(arg1 + 0xa8) = esi_1
            (*(arg1 + 0x14))(*(arg1 + 0x1c), arg2 - eax)
            return 
    
    *(arg1 + 0xa8) += arg2
}
