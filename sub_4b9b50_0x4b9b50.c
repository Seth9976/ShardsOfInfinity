// 函数名称: sub_4b9b50
// 虚拟地址: 0x4b9b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4b9b50(int32_t arg1, void* arg2, int128_t* arg3, float arg4 @ xmm2, float arg5 @ xmm3, int32_t arg6)
{
    // 第一条实际指令: void var_98
    void var_98
    int32_t eax_1 = __security_cookie ^ &var_98
    arg5 - 0f
    int128_t* var_8c = arg3
    float xmm1 = arg4
    float var_78 = xmm1
    int32_t result
    result:1.b =
        (arg5 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg5, 0f) ? 1 : 0) << 2 | (arg5 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int32_t* edx = *(arg2 + 8)
        int32_t edi_1 = 0
        int32_t* var_88_1 = edx
        result = edx[1]
        int32_t result_2 = result
        
        if (result s> 0)
            result = 0
            int32_t result_1 = 0
            
            do
                void* esi_2 = edx[2] + result
                
                if (*(esi_2 + 8) != 0xffffffff)
                    void var_40
                    sub_4b95d0(&var_40, edi_1, var_88_1, xmm1, &var_40)
                    int128_t var_70 = *var_8c
                    int128_t var_60_1 = var_8c[1]
                    int32_t var_48_1 = *(var_8c + 0x28)
                    int64_t var_50_1 = var_8c[2].q
                    sub_4b9880(&var_40, &var_70, &var_40, &var_40)
                    arg5 - 1f
                    float eax_6
                    eax_6:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2
                        | (arg5 < 1f ? 1 : 0)
                    bool p_3 = unimplemented  {test ah, 0x44}
                    
                    if (p_3)
                        sub_44e4d0(eax_6, &data_5559b1, "fractionWeight == 1.0f", 
                            "c:\ax2017\engine\animation.cpp", 0x1f8, 
                            "AnimDefAccumDifferenceBonePosition")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* edx_4 = *(esi_2 + 8) * 0x2c + arg6
                    sub_4b9880(&var_40, edx_4, edx_4, &var_40)
                    xmm1 = var_78
                    arg3 = var_8c
                    result = result_1
                    edx = var_88_1
                
                edi_1 += 1
                result += 0xc
                arg3 += 0x2c
                result_1 = result
                var_8c = arg3
            while (edi_1 s< result_2)
    
    @__security_check_cookie@4(eax_1 ^ &var_98)
    return result
}
