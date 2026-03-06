// 函数名称: sub_4824d0
// 虚拟地址: 0x4824d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4824d0(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = data_cdf428
    void* ecx = data_cdf428
    char result
    
    if (*(arg1 + 0x5a) == 0)
    label_482527:
        
        if (arg1[0xa] != 0)
            float xmm4_1 = arg1[0xd]
            float xmm2_1 = arg1[0xe]
            float xmm3_4 = (*(ecx + 0x28) f- arg1[0xb] - 0f) / (arg1[0xc] f- 0f)
            
            if (not(0 f>= xmm3_4))
                if (xmm3_4 < 1f)
                    xmm4_1 = sub_4145f0(1, xmm3_4, xmm4_1, xmm2_1)
                else
                    xmm4_1 = xmm2_1
            
            arg1[0xf] = xmm4_1
        
        void* eax_4
        float xmm0_7
        eax_4, xmm0_7 = sub_481fd0(arg1)
        float xmm1_2 = arg1[0x12]
        xmm1_2 - xmm0_7
        eax_4:1.b = (xmm1_2 == xmm0_7 ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, xmm0_7) ? 1 : 0) << 2
            | (xmm1_2 < xmm0_7 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            int32_t* ecx_3 = data_cdf444
            arg1[0x12] = xmm0_7
            int32_t* var_8_2 = ecx_3
            (*(*ecx_3 + 0x1c))(arg1, xmm0_7)
        
        (*(*data_cdf444 + 0x18))(arg1)
        result = (*(*data_cdf444 + 0x10))(arg1)
        
        if (result != 0)
            *(arg1 + 0x5a) = 0
            return sub_481d10(arg1) __tailcall
    else
        int32_t eax_1 = arg1[0xa]
        
        if (eax_1 == 0 || *(ecx + 0x28) f- arg1[0xb] f< arg1[0xc])
            goto label_482527
        
        if (eax_1 != 1)
            if (eax_1 == 2)
                arg1[0xf] = arg1[0xe]
                arg1[0xa] = 0
                goto label_482527
            
            sub_44e4d0(eax_1, &data_5559b1, "Halt", "c:\ax2017\engine\sound.cpp", 0x28b, 
                "SoundUpdateInstance")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = (*(*data_cdf444 + 0x24))(arg1)
        *(arg1 + 0x5a) = 0
    
    return result
}
