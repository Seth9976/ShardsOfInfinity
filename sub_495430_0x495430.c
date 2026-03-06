// 函数名称: sub_495430
// 虚拟地址: 0x495430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* const __fastcallsub_495430(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* eax = data_cdf428
    
    if (eax == 0)
        sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* edx = *(eax + 0x10)
    
    if (arg1 != 0)
        uint32_t eax_2 = zx.d(arg1.w)
        
        if (eax_2 u< *(edx + 4))
            void* const result = eax_2 * 0x7c + *edx
            
            if (*(result + 0x78) != arg1)
                return nullptr
            
            return result
    
    return 0
}
