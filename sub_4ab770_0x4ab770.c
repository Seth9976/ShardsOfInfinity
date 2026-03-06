// 函数名称: sub_4ab770
// 虚拟地址: 0x4ab770
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4ab770()
{
    // 第一条实际指令: if (data_cdf3e9 != 0)
    if (data_cdf3e9 != 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "!gDraw3DData.submittingRenderItems", "c:\ax2017\engine\vr.cpp", 
            0x190, "VRDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    (*(*data_ce19b4 + 0xa4))(0)
    void* esi = data_cdf428
    
    if (esi != 0)
        esi = *(esi + 0x1c) u>> 0xe & 1
    
    if ((*(*data_ce19c8 + 0x18))() != 0)
        data_ce1ac8 = 1
        sub_4aac60()
        (*(*data_ce19b4 + 0x94))()
        sub_4aaf40(0, esi)
        sub_4ab080()
        
        if (esi != 1)
            sub_4aaf40(1, esi)
            sub_4ab080()
        
        int32_t* ecx_3 = data_ce19b4
        data_ce1ac8 = 0
        (*(*ecx_3 + 0x98))()
    
    (*(*data_ce19b4 + 0xa8))(0)
    (*(*data_ce19b4 + 0xa4))(1)
    int32_t var_c
    int32_t var_8
    int32_t edx_3
    
    if (*(data_65ae00 + 0x1c) == 0 || data_ce19bf == 0)
        int32_t eax_12 = data_ce19ec
        edx_3 = *data_ce19c8
        
        if (esi != 1)
            var_8 = *((eax_12 << 2) + &data_ce19d8)
            var_c = *((eax_12 << 2) + &data_ce19d4)
        else
            int32_t eax_13 = *((eax_12 << 2) + &data_ce19d4)
            var_8 = eax_13
            var_c = eax_13
    else
        int32_t eax_10 = data_ce19ec
        edx_3 = *data_ce19c8
        
        if (esi != 1)
            var_8 = *((eax_10 << 2) + &data_ce19d0)
            var_c = *((eax_10 << 2) + &data_ce19cc)
        else
            int32_t eax_11 = *((eax_10 << 2) + &data_ce19cc)
            var_8 = eax_11
            var_c = eax_11
    
    (*(edx_3 + 0x1c))(&data_ce1a30, var_c, var_8)
    (*(*data_ce19b4 + 0xa8))(1)
    int32_t eax_16 = data_ce19ec + 1
    
    if (eax_16 == 1)
        eax_16 = 0
    
    data_ce19ec = eax_16
    return sub_4bd1a0(0) __tailcall
}
