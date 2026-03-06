// 函数名称: sub_4b0080
// 虚拟地址: 0x4b0080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_4b0080(int32_t arg1, int32_t arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: int32_t eax = *arg3
    int32_t eax = *arg3
    
    if (eax == 2)
        int32_t* ecx_2 = arg3[0x1d]
        
        if (ecx_2 != 0)
            void var_18
            float xmm0_3[0x4] = *sub_486000(&var_18, arg2, ecx_2, &var_18)
            float xmm3_2 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0xaa) f- xmm0_3
            float xmm2_6 = (_mm_shuffle_ps(xmm0_3, xmm0_3, 0xff) - _mm_shuffle_ps(xmm0_3, xmm0_3, 0x55))
                * 0.00100000005f
            *arg4 = _mm_unpacklo_ps(xmm3_2 * 0.00100000005f, 0)
            arg4[1].d = xmm2_6
            return arg4
    else if (eax == 3)
        int32_t* ecx = arg3[0x16]
        
        if (ecx[1] == 2)
            void* eax_5 = *sub_4459f0(ecx)
            float xmm0_2 = *(eax_5 + 0x34) f- *(eax_5 + 0x28)
            *arg4 =
                _mm_unpacklo_ps(*(eax_5 + 0x2c) f- *(eax_5 + 0x20), *(eax_5 + 0x30) f- *(eax_5 + 0x24))
            arg4[1].d = xmm0_2
            return arg4
        
        sub_44e4d0(eax - 3, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "c:\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *arg4 = 0x3f8000003f800000
    arg4[1].d = 0x3f800000
    return arg4
}
