// 函数名称: sub_4ea8c0
// 虚拟地址: 0x4ea8c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4ea8c0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (arg2 == 1)
        int32_t* eax_1 = *(arg1 + 0xc)
        int32_t result
        int32_t edx_1
        result, edx_1 = (*(*eax_1 + 0x20))(eax_1, 0, 0)
        
        if (result == 0x887a0005 || result == 0x887a0007)
            sub_4e9800(result, edx_1, arg1, result)
            noreturn
        
        if (result s>= 0)
            return result
        
        int32_t result_1 = result
        sub_44e4d0(sub_44e450("DX11 Error: %x\n"), &data_5559b1, "Halt", 
            "c:\ax2017\engine\windows\windowsdx11.cpp", 0xe9, "Dx11CheckHResult")
    else
        sub_44e4d0(eax, &data_5559b1, "monitor == MONITOR_MAIN", 
            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x866, "Dx11GraphicsInterface::APIPresent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
