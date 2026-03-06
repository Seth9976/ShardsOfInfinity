// 函数名称: sub_4338d0
// 虚拟地址: 0x4338d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4338d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    void* eax
    char const* const ecx
    
    if (*arg1 == 0)
        if (data_5bcca8 == arg1[0x159])
            return 0x2e18
        
        if (arg1[0x13c] != 0)
            int32_t eax_20 = arg1[0x28]
            int32_t ecx_2
            
            if (eax_20 != 1 || arg1[0x29] != 8)
                ecx_2 = arg1[0x5c]
            
            if ((eax_20 == 1 && arg1[0x29] == 8) || (ecx_2 == 1 && arg1[0x5d] == 8))
                int32_t xmm1_1 = arg1[0x13f]
                
                if (not(0.5f f<= xmm1_1) && arg1[0x5d] == 8)
                    return 0x2eb8
                
                if (not(xmm1_1 f<= 0.5f) && arg1[0x5d] != 8)
                    return 0x2eb8
                
                return 0x2eb9
            
            if ((eax_20 == 1 && arg1[0x29] == 7) || (ecx_2 == 1 && arg1[0x5d] == 7))
                return 0x2cf8
            
            if ((eax_20 != 1 || arg1[0x29] != 0x14) && (ecx_2 != 1 || arg1[0x5d] != 0x14)
                    && (eax_20 != 1 || arg1[0x29] != 0x15) && (ecx_2 != 1 || arg1[0x5d] != 0x15))
                int32_t edi_1 = arg1[0x5d]
                int32_t esi_1 = arg1[0x29]
                char eax_25 = sub_433840(arg1)
                
                if (edi_1 == esi_1)
                    if (eax_25 != 0)
                        return 0x2b90
                    
                    int32_t eax_27 = arg1[0x5d]
                    
                    if (eax_27 == 0x12)
                        return 0x2bc2
                    
                    if (eax_27 == 0x16)
                        return 0x2c8a
                    
                    return 0x2b5c
                
                if (eax_25 != 0)
                    if (arg1[0x13c] != 0)
                        if (arg1[0x28] == 1 && arg1[0x29] == 0x16)
                            return 0x2c58
                        
                        if (arg1[0x5c] == 1 && arg1[0x5d] == 0x16)
                            return 0x2c58
                    
                    return 0x2b91
                
                int32_t ecx_5 = arg1[0x5d]
                
                if (ecx_5 != 0x12)
                    int32_t eax_33 = arg1[0x29]
                    
                    if (eax_33 != 0x12)
                        if (ecx_5 == 0x16 || eax_33 == 0x16)
                            return 0x2c8b
                        
                        if ((ecx_5 == 0x13 || eax_33 == 0x13) && data_5bcaf0 != 0)
                            return 0x2cee
                        
                        return 0x2c4d
                
                return 0x2bc3
            
            eax = sub_433840(arg1)
            
            if (eax.b != 0)
                return 0x2c4e
            
            char const* const var_10_2 = "CardGetLayer"
            var_14 = 0x4ca
            ecx = "IsOpponentCard(gfx)"
        else
            int32_t eax_2 = arg1[0x42]
            
            if (eax_2 == 0)
                return 0x2e18
            
            if (eax_2 == 1 && arg1[0x43] == 8)
                return 0x2eb9
            
            if (sub_4338b0(arg1, 7) != 0)
                return 0x2cf7
            
            if (sub_433840(arg1) != 0)
                if (sub_4338b0(arg1, 0x16) != 0)
                    return 0x2c57
                
                if (sub_4338b0(arg1, 0x13) == 0)
                    return 0x2b8f
                
                return 0x2ced
            
            if (sub_4338b0(arg1, 0x13) != 0)
                return 0x2ced
            
            if (sub_4338b0(arg1, 0x16) != 0)
                return 0x2c89
            
            if (sub_4338b0(arg1, 0x12) != 0)
                if (arg1[0x155] f> 0f)
                    return 0x2c5a
                
                return 0x2bc1
            
            if (sub_4338b0(arg1, 0x11) != 0)
                if (arg1[0x155] f> 0f)
                    return 0x2c59
                
                return 0x2b5d
            
            if (sub_4338b0(arg1, 6) != 0)
                if (not(arg1[0x155] f<= 0f))
                    return 0x2c50
                
                return 0x2b5c
            
            eax = sub_4338b0(arg1, 1)
            
            if (eax.b != 0)
                return 0x2b5c
            
            char const* const var_10_1 = "CardGetLayer"
            var_14 = 0x4b1
            ecx = "Halt"
    else
        char const* const var_10 = "CardGetLayer"
        var_14 = 0x45a
        ecx = "gfx.type == SHGFX_CARD"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_14, 
        "CardGetLayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
