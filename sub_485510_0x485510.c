// 函数名称: sub_485510
// 虚拟地址: 0x485510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_485510(int32_t arg1, int128_t* arg2, int32_t* arg3, int128_t* arg4, int128_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    float var_14
    *arg4 = *sub_4850b0(&var_14, arg3 + 0x40, arg2, &var_14, arg3 + 0x20, arg3 + 0x30, *arg5)
    float xmm7 = *arg4
    float xmm0_2 = *(arg4 + 8)
    
    if (not(xmm0_2 < xmm7))
        float xmm6_1 = *(arg4 + 4)
        float xmm5_1 = *(arg4 + 0xc)
        
        if (not(xmm5_1 < xmm6_1))
            float xmm2 = *arg3
            float xmm4 = __maxss_xmmss_memss(0, arg3[3])
            float xmm0_4 = arg3[1]
            float var_c = xmm2 + xmm0_2 * xmm4
            float xmm3_3 = arg3[4] f+ 1f
            float xmm4_2 = arg3[5] f+ 1f
            float var_8 = xmm0_4 + xmm5_1 * xmm4
            float xmm1_2 = arg3[6]
            float var_10 = xmm0_4 + xmm6_1 * xmm4
            var_14 = xmm2 + xmm7 * xmm4
            float xmm2_2 = arg3[7]
            *arg4 = var_14.o
            var_14 = (*arg4 - xmm1_2) * xmm3_3 + xmm1_2
            float var_10_1 = (*(arg4 + 4) - xmm2_2) * xmm4_2 + xmm2_2
            float var_c_1 = (*(arg4 + 8) - xmm1_2) * xmm3_3 + xmm1_2
            float var_8_1 = (*(arg4 + 0xc) - xmm2_2) * xmm4_2 + xmm2_2
            *arg4 = var_14.o
            return arg4
    
    int128_t var_34_1
    var_34_1:0xc.d = "RectTopLeft"
    var_34_1:8.d = 0x127
    var_34_1:4.d = "c:\ax2017\engine\rect.cpp"
    sub_44e4d0(arg4, &data_5559b1, "RectIsNormalized(r)")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
