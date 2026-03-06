// 函数名称: sub_46b9a0
// 虚拟地址: 0x46b9a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_46b9a0(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm3 = *arg3
    float xmm4 = arg3[2]
    
    if (not(xmm4 < xmm3))
        float xmm5_1 = arg3[1]
        float xmm6_1 = arg3[3]
        
        if (not(xmm6_1 < xmm5_1))
            float xmm2 = data_5cda1c
            float var_18 = (xmm5_1 f- data_5cda24) * xmm2
            float var_14 = (xmm4 f- data_5cda20) * xmm2
            float var_10 = (xmm6_1 f- data_5cda24) * xmm2
            *arg4 = ((xmm3 f- data_5cda20) * xmm2).o
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg4
    
    sub_44e4d0(eax_1, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
        "RectTopLeft")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
