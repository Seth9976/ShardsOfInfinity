// 函数名称: sub_4e0680
// 虚拟地址: 0x4e0680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4e0680(int32_t arg1, char* arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    
    if (arg4 == 0)
        sub_4e0590(arg3)
    else
        sub_4e05f0(arg3)
    
    int32_t var_14 = *arg3
    uint32_t eax = _fwrite(0x59a284, 1, 1)
    
    if (eax == 1)
        uint32_t result = sub_4e0460(arg3, arg2)
        arg3[2] += 1
        arg3[1] = 1
        return result
    
    sub_44e4d0(eax, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 0x29, 
        "sXmlEmit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
