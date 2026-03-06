// 函数名称: sub_4e7870
// 虚拟地址: 0x4e7870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4e7870(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(arg1 + 0x3c))
            void* eax_3 = eax_1 * 0x24c + *(arg1 + 0x38)
            
            if (*(eax_3 + 0x248) == arg2)
                return *(eax_3 + 0x18)
    
    return 0
}
