// 函数名称: sub_4aced0
// 虚拟地址: 0x4aced0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4aced0()
{
    // 第一条实际指令: void* ecx = data_ce19c4
    void* ecx = data_ce19c4
    int32_t eax = *(ecx + 0x248)
    int32_t var_c
    char const* const var_8
    char* ecx_1
    
    if (eax s> 0)
        *(ecx + 0x248) = eax - 1
        
        if (eax != 1)
            void* ecx_4 = ecx + (eax - 1) * 0x14
            eax = *(ecx_4 + 0x108)
            
            if (eax != 2)
                if (eax == 1)
                    return sub_4ac970(*(ecx_4 + 0x10c))
                
                var_8 = "RendererPopRT"
                var_c = 0x39e
                ecx_1 = "Halt"
            else
                if (*(ecx_4 + 0x110) != 0)
                    uint32_t eax_9 = zx.d(*(ecx_4 + 0x118))
                    return sub_4ac8c0(eax_9, *(ecx_4 + 0x114), *(ecx_4 + 0x110), eax_9.b)
                
                var_8 = "RendererPopRT"
                var_c = 0x395
                ecx_1 = "rt.texColor"
        else
            if (data_cdf3fc == 5)
                return sub_4bd1a0(0)
            
            int32_t eax_2 = *(ecx + 0xec)
            *(ecx + 0x248) = 0
            
            if (eax_2 == 1)
                return sub_4ac970(*(ecx + 0xf0))
            
            eax = eax_2 - 2
            
            if (eax_2 == 2)
                uint32_t eax_4 = zx.d(*(ecx + 0x104))
                return sub_4ac8c0(eax_4, *(ecx + 0x100), *(ecx + 0xfc), eax_4.b)
            
            var_8 = "RendererRestoreMainRT"
            var_c = 0x371
            ecx_1 = "Halt"
    else
        var_8 = "RendererPopRT"
        var_c = 0x381
        ecx_1 = "gpRenderAppData->renderTargetStackDepth > 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\renderer.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
