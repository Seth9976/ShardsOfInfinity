// 函数名称: sub_435650
// 虚拟地址: 0x435650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_435650(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_541e88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_18c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_98 = &data_5bcd7c
    int32_t* i_1 = nullptr
    void* result = sub_445070(&data_5bcd7c, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i != 2)
            char var_81_2 = 0
            float xmm0_3 = sub_4355a0(&i[0x28])
            
            if (i[0x13c] != 0)
                int32_t eax_9 = i[0x76]
                
                if (eax_9 != 3)
                    var_81_2 = 0
                
                if (eax_9 == 3 || eax_9 == 2)
                    var_81_2 = 1
            
            sub_444a30(&i[0x28], data_5b0f3c)
            float xmm1_8 = data_5b0f3c
            float xmm0_5 = xmm1_8 * 5f
            int32_t eax_11
            
            if (i[0x159] == data_5bcca8)
                eax_11 = sub_434470()
                xmm1_8 = data_5b0f3c
            
            float xmm0_7
            
            if (i[0x159] != data_5bcca8 || eax_11 != 1)
                xmm0_7 = i[0x156] f- xmm0_5
            else
                xmm0_7 = xmm0_5 f+ i[0x156]
            
            i[0x156] = xmm0_7
            int32_t xmm2_1
            
            if (0f <= xmm0_7)
                xmm2_1 = _mm_min_ss(0x3f800000, xmm0_7)
            else
                xmm2_1 = (zx.o(0)).d
            
            int32_t eax_12 = i[0x159]
            i[0x156] = xmm2_1
            char var_83_1 = 0
            char var_82_1 = 0
            float xmm1_9
            
            if (eax_12 != data_5bcaec)
                int32_t ecx_10 = data_5bcca8
                
                if (eax_12 == ecx_10 || (ecx_10 == 0 && eax_12 == data_5bcc84))
                    xmm1_9 = xmm1_8 * 7.5f f+ i[0x155]
                else
                    xmm1_9 = i[0x155] f- xmm1_8 * 7.5f
                
                i[0x155] = xmm1_9
            else if (i[0x13c] != 0)
                xmm1_9 = i[0x155]
            else
                i[0x155] = 0
                xmm1_9 = (zx.o(0)).d
            
            int32_t xmm0_11
            
            if (0 f<= xmm1_9)
                xmm0_11 = _mm_min_ss(0x3f800000, xmm1_9)
            else
                xmm0_11 = (zx.o(0)).d
            
            i[0x155] = xmm0_11
            int32_t eax_13
            float xmm0_12
            eax_13, xmm0_12 = sub_4355a0(&i[0x28])
            xmm0_3 f- 0
            eax_13:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                | (xmm0_3 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            bool p_4
            
            if (not(p_2))
                xmm0_12 f- 0
                eax_13:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
                    | (xmm0_12 < 0f ? 1 : 0)
                p_4 = unimplemented  {test ah, 0x44}
            
            if (p_2 || p_4)
                if (not(xmm0_3 < 0.200000003f))
                    var_83_1 = 1
                
                if (xmm0_3 < 0.200000003f || not(0.200000003f > xmm0_12))
                    var_83_1 = 0
                
                xmm0_3 - 1f
                eax_13:1.b = (xmm0_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 1f) ? 1 : 0) << 2
                    | (xmm0_3 < 1f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                bool p_8
                
                if (not(p_6))
                    xmm0_12 - 1f
                    var_82_1 = 1
                    eax_13:1.b = (xmm0_12 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_12, 1f) ? 1 : 0) << 2 | (xmm0_12 < 1f ? 1 : 0)
                    p_8 = unimplemented  {test ah, 0x44}
                
                if (p_6 || not(p_8))
                    var_82_1 = 0
            
            char eax_14
            int32_t edx_1
            eax_14, edx_1 = sub_4333a0(i)
            
            if (eax_14 != 0)
                char ecx_13 = var_81_2
                
                if (var_82_1 != 0)
                    int32_t eax_16 = data_5bcd60 | data_5bcd64
                    
                    if (eax_16 == 0 && *i == eax_16 && ecx_13 == 0 && i[0x76] != eax_16)
                        data_dfceac
                        edx_1 = sub_482460()
                        ecx_13 = var_81_2
                
                if (var_83_1 != 0)
                    int32_t eax_18 = data_5bcd60 | data_5bcd64
                    
                    if (eax_18 == 0 && *i == eax_18 && ecx_13 == 0 && i[0x76] != eax_18)
                        data_dfceb0
                        edx_1 = sub_482460()
                
                int32_t eax_19 = *i
                
                if (eax_19 == 0)
                    sub_434ea0(arg4, i)
                    
                    if (*(i + 0x16) != 0 && i[0x13c] == 0 && i[3] == 9)
                        sub_45e9a0(&i[0x14c])
                        uint32_t eax_45 = zx.d(i[0x159].w)
                        int32_t ecx_45 = data_5bcd88
                        data_5bcd88 = eax_45
                        i[0x159] = ecx_45
                        data_5bcd8c -= 1
                        sub_43ee60(eax_45, 9, i[2], 0x13, 1)
                else if (eax_19 != 1)
                    if (eax_19 != 3)
                        sub_44e4d0(eax_19 - 3, &data_5559b1, "Halt", 
                            "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x9f6, "ShardsGfxUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    void* eax_23 = data_65ae00
                    int32_t var_c8 = 0
                    int32_t var_c4_1 = 0
                    int32_t var_b8 = 0
                    uint128_t xmm1_13 = zx.o(*(eax_23 + 0x18))
                    int32_t xmm0_14 = _mm_cvtepi32_ps(zx.o(*(eax_23 + 0x14)))
                    int32_t var_b4_1 = 0
                    int32_t xmm1_14 = _mm_cvtepi32_ps(xmm1_13)
                    int32_t var_c0_1 = xmm0_14
                    int32_t var_bc_1 = xmm1_14
                    int32_t var_b0_1 = xmm0_14
                    int32_t var_ac_1 = xmm1_14
                    void var_180
                    int128_t* eax_25 = sub_433310(&var_180, edx_1, i, &var_180)
                    int32_t var_30_1 = 0x4e21
                    uint32_t (* var_194_1)[0x4] = i[4]
                    int128_t var_80 = *eax_25
                    int128_t var_70_1 = eax_25[1]
                    int128_t var_60_1 = eax_25[2]
                    int128_t var_50_1 = eax_25[3]
                    int128_t var_40_1 = eax_25[4]
                    sub_462b10(&var_c8, &i[0x14c], "hero", data_dfcfb8, &var_c8, &var_b8, 0x4e21, 
                        var_194_1, 0)
                    sub_469ac0(i[0x14c], &var_80)
                    void* eax_27 = sub_41ad20()
                    void* eax_28 = sub_41af80(eax_27 + 8, i[7])
                    int32_t var_a4
                    int32_t* var_1a8_1 = &var_a4
                    char* var_90
                    sub_4167e0(eax_28, eax_27 + 8, &var_90, eax_28)
                    int32_t var_14_1 = 0
                    sub_441db0(var_a4)
                    sub_469cf0(&var_90, &data_5c2fd4, i[0x14c], &var_90, 0xffffffff)
                    int32_t var_1b8_1 = 0xffffffff
                    sub_469930(i[0x14c])
                    *((i[6] << 2) + "t")
                    int32_t var_190_2 = 0xffffffff
                    sub_469930(i[0x14c])
                    sub_466e80(i[0x14c], data_5b0f3c)
                    int32_t var_14_2 = 1
                    
                    if (data_cdf414 != 0)
                        char* eax_31 = var_90
                        
                        if (eax_31 != 0 && *eax_31 != 0)
                            char* eax_32 = sub_44f000(&var_90)
                            int32_t temp4_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                                var_90 = &data_5559b1
                    
                    int32_t var_14_3 = 0xffffffff
                    
                    if (i[0x13c] == 0)
                        int32_t var_190_3 = 0xffffffff
                        sub_469930(i[0x14c])
                        int32_t temp3_1 = data_5bcd64
                        
                        if (temp3_1 s<= 0 && (temp3_1 s< 0 || data_5bcd60 u<= 0))
                            int32_t* eax_33 = data_65aabc
                            
                            if (eax_33 == 0)
                                sub_44e4d0(eax_33, &data_5559b1, "gClient", 
                                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t ecx_29 = *eax_33
                            int32_t eax_34 = eax_33[1]
                            data_5bcd60 = ecx_29 + 0x7d0
                            data_5bcd64 = adc.d(eax_34, 0, ecx_29 u>= 0xfffff830)
                else if (i[0x158].b == 0)
                    sub_4334b0(i)
                    
                    if (i[0x13c] == 0)
                        void* eax_37 = sub_433c60(i[0xb])
                        int32_t ecx_35 = i[0xa]
                        
                        if (ecx_35 == 0xffffffff || ecx_35 == 5)
                            i[0x158].b = 1
                        else
                            *(eax_37 + (ecx_35 << 2)) += i[0xd]
                            int32_t ecx_36 = i[0xa]
                            *(eax_37 + (ecx_36 << 2) + 0x18) -= i[0xd]
                            int32_t eax_40 = i[0xa]
                            
                            if (eax_40 == 3)
                                int32_t eax_41 = *(eax_37 + 0xc)
                                
                                if (eax_41 s< 0)
                                    eax_41 = 0
                                else if (eax_41 s> 0x32)
                                    eax_41 = 0x32
                                
                                *(eax_37 + 0xc) = eax_41
                                eax_40 = i[0xa]
                            
                            if (eax_40 == 2)
                                eax_40 = *(eax_37 + 8)
                                
                                if (eax_40 s< 0)
                                    eax_40 = 0
                                else if (eax_40 s> 0x1e)
                                    eax_40 = 0x1e
                                
                                *(eax_37 + 8) = eax_40
                            
                            void* ecx_37 = data_65aabc
                            
                            if (ecx_37 == 0)
                                sub_44e4d0(eax_40, &data_5559b1, "gClient", 
                                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t eax_43
                            
                            if (i[0xb] != *(ecx_37 + 0x648))
                                eax_43 = i[0xa]
                            
                            if (i[0xb] == *(ecx_37 + 0x648) || eax_43 == 1 || eax_43 == 0)
                                int32_t eax_44 = i[0xa]
                                
                                if (eax_44 u> 5)
                                    sub_44e4d0(eax_44, &data_5559b1, "Halt", 
                                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x9ec, 
                                        "ShardsGfxUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                switch (eax_44)
                                    case 0
                                        sub_47b0f0(arg3, &data_5c30b0)
                                        i[0x158].b = 1
                                    case 1
                                        sub_47b0f0(arg3, &data_5c30c4)
                                        i[0x158].b = 1
                                    case 2
                                        sub_47b0f0(arg3, &data_5c30d8)
                                        i[0x158].b = 1
                                    case 3
                                        sub_47b0f0(arg3, &data_5c30ec)
                                        i[0x158].b = 1
                                    case 4
                                        sub_47b0f0(arg3, &data_5c3100)
                                        i[0x158].b = 1
                                    case 5
                                        i[0x158].b = 1
                            else
                                i[0x158].b = 1
                else
                    sub_45e9a0(&i[0x14c])
                    int32_t ecx_32 = data_5bcd88
                    data_5bcd88 = zx.d(i[0x159].w)
                    i[0x159] = ecx_32
                    data_5bcd8c -= 1
                
                void* eax_46 = sub_495430(i[0x157])
                
                if (eax_46 != 0)
                    i[0x14c]
                    void var_128
                    float xmm4_1[0x4] = *sub_47a430(&var_128, 0)
                    int32_t var_cc_1 = 0
                    float xmm2_2 = xmm4_1[0]
                    float xmm3_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
                    float xmm1_18 =
                        _mm_shuffle_ps(xmm4_1, xmm4_1, 0x55) + _mm_shuffle_ps(xmm4_1, xmm4_1, 0xff)
                    int128_t xmm0_22 = data_5724f8
                    int64_t xmm2_5 = _mm_unpacklo_ps((xmm2_2 + xmm3_2) * 0.5f, xmm1_18 * 0.5f)
                    float xmm1_20 = data_5b0f3c
                    *(eax_46 + 0x2c) = ((xmm3_2 f- xmm4_1) / 200f).o
                    int64_t var_d4_1 = xmm2_5
                    *(eax_46 + 0x3c) = xmm0_22
                    sub_49a150(eax_46, xmm1_20)
            else if (i[0x14c] != 0)
                sub_45e9a0(&i[0x14c])
        else
            sub_4366d0(&i[0xe])
            char var_81_1 = 1
            void* eax_4 = sub_495430(i[0x15])
            
            if (eax_4 != 0)
                *(eax_4 + 0x40) = _mm_unpacklo_ps(i[0x1b], i[0x1c])
                float xmm1_3 = data_5b0f3c
                var_81_1 = 0
                *(eax_4 + 0x48) = 0
                sub_49a150(eax_4, xmm1_3)
            
            int32_t j = 0
            int32_t j_1 = 0
            
            if (i[0x13] s> 0)
                void* eax_5 = &i[0x16]
                void* esi_2 = &i[0x1d]
                void* var_8c_1 = eax_5
                
                do
                    void* ecx_3 = data_cdf428
                    int32_t eax_6 = *eax_5
                    
                    if (ecx_3 == 0)
                        sub_44e4d0(eax_6, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                            "GetGameData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    if (eax_6 != 0)
                        uint32_t edi = zx.d(eax_6.w)
                        i = i_1
                        
                        if (edi u< *(*(ecx_3 + 0x10) + 4))
                            j = j_1
                            void* ecx_6 = edi * 0x7c + **(data_cdf428 + 0x10)
                            i = i_1
                            
                            if (*(ecx_6 + 0x78) == eax_6)
                                *(ecx_6 + 0x40) = _mm_unpacklo_ps(*esi_2, *(esi_2 + 4))
                                float xmm1_6 = data_5b0f3c
                                var_81_1 = 0
                                *(ecx_6 + 0x48) = 0
                                sub_49a150(ecx_6, xmm1_6)
                                j = j_1
                    
                    j += 1
                    eax_5 = var_8c_1 + 4
                    j_1 = j
                    esi_2 += 8
                    var_8c_1 = eax_5
                while (j s< i[0x13])
            
            if (var_81_1 != 0)
                int32_t ecx_7 = data_5bcd88
                data_5bcd88 = zx.d(i[0x159].w)
                i[0x159] = ecx_7
                data_5bcd8c -= 1
        
        result = sub_445070(var_98, &i_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
