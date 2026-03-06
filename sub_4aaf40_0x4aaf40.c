// 函数名称: sub_4aaf40
// 虚拟地址: 0x4aaf40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4aaf40(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *((arg1 << 2) + &data_ce1a04)
    int32_t eax = *((arg1 << 2) + &data_ce1a04)
    data_ce1a2c = eax
    
    if (arg2 == 1)
        data_ce1a2c = 0x3e8
    else if (eax != 0 && eax != 0x3e8)
        if (eax != 1)
            sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\vr.cpp", 0x10d, 
                "VRSetRenderTargetForEye")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (sub_4aac20() == 0)
            int32_t var_10_1 = arg1
            return sub_4ac9f0(*((data_ce19ec << 2) + &data_ce19d8), data_ce19e0)
        
        int32_t ecx_1 = data_ce19ec
        int32_t var_10 = ecx_1
        return sub_4ac9f0(*((ecx_1 << 2) + &data_ce19d0), *((ecx_1 << 2) + &data_ce19e8))
    
    void* eax_2
    
    if (*(data_65ae00 + 0x1c) != 0 && data_ce19bf == 0)
        eax_2 = data_cdf428
    
    int32_t ecx
    int32_t edx
    
    if (*(data_65ae00 + 0x1c) != 0
            && (data_ce19bf != 0 || eax_2 == 0 || ((*(eax_2 + 0x1c) u>> 0xd).b & 1) == 0))
        int32_t eax_5 = data_ce19ec
        edx = *((eax_5 << 2) + &data_ce19e4)
        ecx = *((eax_5 << 2) + &data_ce19cc)
    else
        edx = data_ce19dc
        ecx = *((data_ce19ec << 2) + &data_ce19d4)
    
    void* eax_10 = data_ce19c4
    *(eax_10 + 0x248) = 0
    *(eax_10 + 0xec) = 2
    *(eax_10 + 0xfc) = ecx
    *(eax_10 + 0x100) = edx
    *(eax_10 + 0x104) = 1
    return sub_4ac8c0(eax_10, edx, ecx, 1)
}
