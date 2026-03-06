// 函数名称: sub_4e0700
// 虚拟地址: 0x4e0700
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4e0700(int32_t arg1, char* arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    arg3[2] -= 1
    
    if (arg4 == 0)
        sub_4e0590(arg3)
    else
        sub_4e05f0(arg3)
    
    int32_t var_14 = *arg3
    uint32_t result = _fwrite(0x59a288, 1, 2)
    
    if (result == 2)
        sub_4e0460(arg3, arg2)
        int32_t var_14_1 = *arg3
        result = _fwrite(0x59a27c, 1, 1)
        
        if (result == 1)
            arg3[1] = 2
            return result
    
    sub_44e4d0(result, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 0x29, 
        "sXmlEmit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
