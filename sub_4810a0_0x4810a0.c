// 函数名称: sub_4810a0
// 虚拟地址: 0x4810a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4810a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    char const* const ecx
    
    if (arg4 - 0x1f s< 7)
        if (arg4 - 0x1f s>= 0)
            void* const ecx_1 = 0x3e
            
            if (arg2 != 0)
                ecx_1 = 0x45
            
            int32_t result
            result.b = arg5
            (ecx_1 + arg4 - 0x1f)[arg3] = result.b
            return result
        
        char const* const var_10_1 = "ButtonSourceCacheSetHand"
        var_14 = 0x1ef
        ecx = "idx >= 0"
    else
        char const* const var_10 = "ButtonSourceCacheSetHand"
        var_14 = 0x1ee
        ecx = "idx < NUM_BUTTONSOURCES_HANDED"
    
    sub_44e4d0(arg4 - 0x1f, &data_5559b1, ecx, "c:\ax2017\engine\controller.cpp", var_14, 
        "ButtonSourceCacheSetHand")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
