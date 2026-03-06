// 函数名称: sub_4448a0
// 虚拟地址: 0x4448a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_4448a0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = data_65ac30
    void* eax = data_65ac30
    float var_8 = 200f
    char const* const var_38
    int32_t var_34
    char const* const var_30
    char* ecx
    
    if (eax != 0)
        int32_t eax_1 = *(eax + 8)
        
        if (eax_1 == 0)
            goto label_444908
        
        float xmm0_1
        
        if (eax_1 == 1)
            xmm0_1 = 400f
        label_444903:
            var_8 = xmm0_1
        label_444908:
            float eax_4
            float edx
            eax_4, edx = sub_479140(arg1)
            float xmm0_3 = data_5b0f3c * var_8
            float xmm1_1 = *arg2 - eax_4
            float xmm2_1 = arg2[1] f- edx
            float xmm0_7 = sub_412d90(xmm1_1 * xmm1_1 + xmm2_1 * xmm2_1)
            float xmm0_8
            float xmm1_5
            float xmm2_3
            
            if (xmm0_3 <= xmm0_7)
                float xmm0_9 = 1f / xmm0_7
                xmm1_5 = eax_4 + xmm1_1 * xmm0_9 * xmm0_3
                xmm2_3 = edx
                xmm0_8 = xmm2_3 + xmm2_1 * xmm0_9 * xmm0_3
            else
                xmm1_5 = *arg2
                xmm0_8 = arg2[1]
                xmm2_3 = edx
            
            eax_4 - xmm1_5
            float var_10 = xmm1_5
            float var_c_1 = xmm0_8
            float result
            result:1.b = (eax_4 == xmm1_5 ? 1 : 0) << 6 | (is_unordered.d(eax_4, xmm1_5) ? 1 : 0) << 2
                | (eax_4 < xmm1_5 ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                xmm2_3 - xmm0_8
                result:1.b = (xmm2_3 == xmm0_8 ? 1 : 0) << 6
                    | (is_unordered.d(xmm2_3, xmm0_8) ? 1 : 0) << 2 | (xmm2_3 < xmm0_8 ? 1 : 0)
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    return result
            
            return sub_4791c0(arg1, &var_10)
        
        eax = eax_1 - 2
        
        if (eax_1 == 2)
            xmm0_1 = 2000f
            goto label_444903
        
        var_30 = "AutoScrollUpdate"
        var_34 = 0x2759
        var_38 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx = "Halt"
    else
        var_30 = "GetLocalSettings"
        var_34 = 0x23d
        var_38 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx = "gGameSettings.localSettings"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_38, var_34, var_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
