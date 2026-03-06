// 函数名称: sub_4fb7b0
// 虚拟地址: 0x4fb7b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4fb7b0(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: float var_30
    float var_30
    int32_t eax_1 = __security_cookie ^ &var_30
    float xmm3 = *arg3
    float xmm4 = arg3[2]
    
    if (not(xmm4 < xmm3))
        float xmm5_1 = arg3[1]
        float xmm6_1 = arg3[3]
        
        if (not(xmm6_1 < xmm5_1))
            float xmm2 = data_df847c
            float xmm5_3 = (xmm5_1 f- data_df8484) * xmm2
            float xmm4_2 = (xmm4 f- data_df8480) * xmm2
            float xmm6_3 = (xmm6_1 f- data_df8484) * xmm2
            var_30 = (xmm3 f- data_df8480) * xmm2
            float var_2c = xmm5_3
            float var_28 = xmm4_2
            float var_24 = xmm6_3
            *arg4 = var_30.o
            @__security_check_cookie@4(eax_1 ^ &var_30)
            return arg4
    
    sub_44e4d0(eax_1, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
        "RectTopLeft")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
