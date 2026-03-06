// 函数名称: sub_419af0
// 虚拟地址: 0x419af0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_419af0()
{
    // 第一条实际指令: void var_88
    void var_88
    int32_t eax_1 = __security_cookie ^ &var_88
    bool cond:0 = data_cdf3e9 != 0
    int32_t result = 0xff7f7f7f
    data_65ae40 = 0xff7f7f7f
    char const* const var_9c
    int32_t var_98
    char const* const var_94
    char* ecx_13
    
    if (cond:0)
        int128_t xmm0_1 = data_571934
        __builtin_strncpy(&data_65b2e8, "333?", 4)
        data_65b2d8 = xmm0_1
        void var_80
        int128_t* eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_47e2d0(&var_80)
        int128_t var_40 = *eax_2
        int128_t var_30 = eax_2[1]
        int128_t* eax_4 = sub_45c3f0(&var_80, edx_1, &var_40, &var_80)
        int128_t xmm1_1 = eax_4[1]
        int128_t xmm2_1 = eax_4[2]
        int128_t xmm3_1 = eax_4[3]
        void* eax_5 = data_ce19c4
        *(eax_5 + 0xa0) = *eax_4
        *(eax_5 + 0xe0) = 1
        *(eax_5 + 0xb0) = xmm1_1
        *(eax_5 + 0xc0) = xmm2_1
        *(eax_5 + 0xd0) = xmm3_1
        sub_45ade0(&var_30:4)
        
        if (data_e47314 == 0)
            int32_t eax_6 = data_dfc4e8
            
            if (eax_6 == 2)
                eax_6 = 1
            
            int32_t i = 0
            data_dfc4e8 = eax_6
            
            do
                int32_t ecx_3 = *(i + &data_5bb1f0:4)
                
                if (ecx_3 != 0)
                    sub_468d10(ecx_3)
                    int32_t eax_8 = *(sub_428b70(*(i + &data_5bb1f0)) + 0x10)
                    
                    if (eax_8 != 0)
                        eax_8(*(i + &data_5bb1f0:4))
                
                int32_t ecx_5 = *(i + &data_5bb1e4:4)
                
                if (ecx_5 != 0)
                    sub_468d10(ecx_5)
                    int32_t eax_10 = *(sub_428b70(*(i + &data_5bb1e4)) + 0x10)
                    
                    if (eax_10 != 0)
                        eax_10(*(i + &data_5bb1e4:4))
                
                i += 0x20
            while (i s< 0xc0)
        
        if (data_5bcd78 != 0)
            sub_436080()
            sub_413f80(data_5c2e98)
            sub_413f80(data_5c2e9c)
        
        result = data_ce19c4
        __builtin_memcpy(result + 0xa0, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        *(result + 0x258) = 0
        sub_45ae60()
        result.b = data_cdf3e9
        
        if (result.b != 0)
            int32_t ecx_9 = data_65b35c
            int32_t i_1 = 0
            data_65b35c = 0x2de60000
            
            if (data_5c2e00 s> 0)
                void* edx_2 = data_cdf428
                
                do
                    if (edx_2 == 0)
                        var_94 = "GetGameData"
                        var_98 = 0x45
                        var_9c = "c:\ax2017\engine\game.h"
                        ecx_13 = "gpGameData"
                        goto label_419d70
                    
                    result = *((i_1 << 2) + &data_5c2dc0)
                    void* edi_1 = *(edx_2 + 0x10)
                    
                    if (result != 0)
                        uint32_t ecx_10 = zx.d(result.w)
                        
                        if (ecx_10 u< *(edi_1 + 4))
                            void* ecx_12 = ecx_10 * 0x7c + *edi_1
                            
                            if (*(ecx_12 + 0x78) == result)
                                result = sub_49ee40(ecx_12, &data_5c779c)
                                edx_2 = data_cdf428
                    
                    i_1 += 1
                while (i_1 s< data_5c2e00)
                
                result.b = data_cdf3e9
            
            if (result.b != 0)
                data_65b35c = ecx_9
                @__security_check_cookie@4(eax_1 ^ &var_88)
                return result
        
        var_94 = "Draw3DLayer"
        var_98 = 0x327
    else
        var_94 = "Draw3DAmbientLight"
        var_98 = 0x331
    
    var_9c = "c:\ax2017\engine\draw3d.cpp"
    ecx_13 = "gDraw3DData.submittingRenderItems"
    label_419d70:
    sub_44e4d0(result, &data_5559b1, ecx_13, var_9c, var_98, var_94)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
