// 函数名称: sub_4f4ea0
// 虚拟地址: 0x4f4ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f4ea0(int32_t* arg1)
{
    // 第一条实际指令: sub_4f4d60()
    sub_4f4d60()
    int32_t eax = DragAcceptFiles(data_ce1790, 1)
    data_ce27a0 = arg1
    data_ce37a4 = 0
    
    if (arg1[1] != 0x20)
        sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
            "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_2 = *(sub_4459f0(arg1) + 4)
    data_d63bc4 = data_5c779c
    data_d63bb0 = eax_2
    int128_t xmm0_1 = data_5c77ac
    data_d63bbc = 0x3e19999a
    data_d63bc0 = 0x43480000
    data_d63bd4 = xmm0_1
    int32_t xmm0_2 = sub_4132a0(0.52359879f)
    void* eax_3 = data_65ae00
    data_d63bb4 = xmm0_2
    data_d63bb8 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18))) / _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    data_d63bec = (*sub_4b3b30())[0x133]
    uint32_t (* eax_6)[0x4]
    char* ecx_1
    eax_6, ecx_1 = sub_4b3b30()
    ecx_1.b = 0
    data_d63bf4 = (*eax_6)[0x133]
    return sub_4fb1e0(ecx_1) __tailcall
}
