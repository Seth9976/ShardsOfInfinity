// 函数名称: sub_4b6620
// 虚拟地址: 0x4b6620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_4b6620(int32_t arg1, void* arg2, void* arg3, int64_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = *(arg3 + 0x2c)
    void var_64
    int32_t eax_4
    int64_t xmm0
    
    if (eax_2 != 0)
        if (*(eax_2 + 0x80) s<= 0)
            sub_44e4d0(eax_2, &data_5559b1, "index >= 0 && index < mSize", "c:\ax2017\engine\xarray.h", 
                0xb5, "XArray<struct Mat4>::operator []")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int64_t* eax_5 = sub_4e0e60(eax_2, *(eax_2 + 0x7c), arg5 * 0x2c + *(arg2 + 0x14), &var_64)
        xmm0 = *eax_5
        eax_4 = eax_5[1].d
    else
        if (*(arg2 + 8) != 4)
            sub_44e4d0(eax_2, &data_5559b1, 
                "defSubMesh.vertexFormat == VERTEX_FORMAT_POS_NORM_COL_TEX", 
                "c:\ax2017\engine\structure.cpp", 0x42b, "sStructureGetAnimatedVertexPosition")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_3 = *(arg2 + 0x14)
        int32_t ecx = arg5 * 9
        xmm0 = *(eax_3 + (ecx << 2))
        eax_4 = *(eax_3 + (ecx << 2) + 8)
    
    int64_t var_14 = xmm0
    int64_t var_40 = *(arg3 + 8)
    int128_t xmm0_2 = *(arg3 + 0x14)
    int32_t var_c = eax_4
    int32_t var_38 = *(arg3 + 0x10)
    int128_t var_34 = (*(arg3 + 0x24)).o
    int128_t var_24 = xmm0_2
    int64_t* eax_8 = sub_49fd50(&var_64, &var_14, &var_34, &var_64)
    int32_t ecx_4 = eax_8[1].d
    *arg4 = *eax_8
    arg4[1].d = ecx_4
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
