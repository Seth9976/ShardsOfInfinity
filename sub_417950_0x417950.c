// 函数名称: sub_417950
// 虚拟地址: 0x417950
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_417950()
{
    // 第一条实际指令: int32_t* esi = data_65aabc
    int32_t* esi = data_65aabc
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    void* eax
    char* ecx_1
    
    if (esi != 0)
        float xmm1_1 = data_5b0f3c
        float xmm0_2 = xmm1_1 * 1000f
        float xmm0_3
        
        if (0 f<= xmm0_2)
            xmm0_3 = xmm0_2 + 0.5f
        else
            xmm0_3 = xmm0_2 - 0.5f
        
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(int.d(xmm0_3))
        int32_t temp0_1 = *esi
        *esi += eax_2
        eax = esi[6]
        esi[1] = adc.d(esi[1], edx_1, temp0_1 + eax_2 u< temp0_1)
        
        if (eax u> 3)
            var_14 = "ClientNetworkUpdate"
            var_18 = 0x171
            ecx_1 = "Halt"
            var_1c = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        else
            switch (eax)
                case nullptr, 3
                    void* eax_3
                    int32_t ecx_4
                    eax_3, ecx_4 = sub_42aaa0(*(data_65ac38 + 0xb24))
                    
                    if (*(eax_3 + 0x244) != 0)
                        goto label_417a9f
                    
                    if (esi[6] == 3 && esi[5] == esi[0x193])
                        int32_t ecx_5 = *esi
                        bool c_2 = ecx_5 u< esi[0x194]
                        int32_t eax_4 = esi[1]
                        int32_t temp4_1 = esi[0x195]
                        bool s_1 = sbb.d(eax_4, temp4_1, c_2) s< 0
                        bool o_1 = unimplemented  {sbb eax, dword [esi+0x654]}
                        void* var_8_1 = sbb.d(eax_4, temp4_1, c_2)
                        
                        if (not(s_1) && ((sbb.d(eax_4, temp4_1, c_2) != 0 && s_1 == o_1)
                                || ecx_5 - esi[0x194] u> 0x3a98))
                            ecx_4.b = 1
                            sub_415330(ecx_4, 1)
                            xmm1_1 = data_5b0f3c
                    
                    float xmm0_6 = _mm_max_ss(esi[0x196] f- xmm1_1, 0)
                    xmm0_6 f- 0
                    esi[0x196] = xmm0_6
                    eax_3:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
                        | (xmm0_6 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        goto label_417a9f
                    
                    int32_t eax_5 = esi[6]
                    
                    if (eax_5 != 0)
                        if (eax_5 == 3)
                            ecx_4.b = data_5bb244.d == 0x11
                            sub_4156c0(ecx_4)
                        
                        goto label_417a9f
                    
                    eax = esi[7]
                    
                    if (eax u<= 6)
                        switch (eax)
                            case nullptr, 1, 2
                                sub_415240()
                                esi[0x196] = 0x3f800000
                            case 4, 5, 6
                                sub_415240()
                                esi[0x196] = 0x41700000
                        
                        goto label_417a9f
                    
                    var_14 = "ClientKeepConnected"
                    var_18 = 0x15a
                    ecx_1 = "Halt"
                    var_1c = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                case 1, 2
                label_417a9f:
                    sub_4170d0(esi)
                    eax = data_65aabc
                    
                    if (eax == 0)
                        goto label_417961
                    
                    int32_t ecx_7
                    
                    if (*(eax + 0x434) == 2)
                        ecx_7 = *sub_41ad20()
                    else
                        ecx_7 = 0
                    
                    int32_t var_14_1 = ___std_fs_get_file_attributes_by_handle@8(ecx_7)
                    sub_41b220()
                    sub_428e90()
                    uint32_t result = sub_437c10()
                    esi[0x197].b = 0
                    return result
    else
    label_417961:
        var_14 = "GetClient"
        var_18 = 0x74
        var_1c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
