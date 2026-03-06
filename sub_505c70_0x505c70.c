// 函数名称: sub_505c70
// 虚拟地址: 0x505c70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_505c70(WPARAM arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT eax_3
    int32_t ecx
    int32_t edx
    eax_3, ecx, edx = SendMessageA(*(data_e47264 + 0x18), 0x199, arg1, 0)
    
    if (eax_3 == 0xffffffff || eax_3 == 0)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (*(eax_3 + 0x14) != 0x63)
        data_e4a96c = *eax_3
        data_e4a970 = *(eax_3 + 4)
        char* edi_1 = *(eax_3 + 8)
        data_e4a974 = edi_1
        data_e4a978 = *(eax_3 + 0xc)
        int32_t eax_7 = *(eax_3 + 0x14)
        data_e4a980 = eax_7
        uint32_t eax_34
        
        switch (eax_7)
            case 0, 1, 2, 3, 7
                data_e4a97c = *(eax_3 + 0x10)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 4
                data_e4a97c = sub_501920(*(eax_3 + 0x10))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 5
                *(eax_3 + 0x10)
                sub_502ea0(0xe4a410)
                data_e4a97c = 0xe4a410
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 6
                uint32_t (* eax_18)[0x4]
                int32_t ecx_10
                int32_t edx_2
                eax_18, ecx_10, edx_2 = _memset(0xe4a000, 0, 0x410)
                int32_t var_28_2 = 0xe4a30c
                char* var_2c_1 = &data_e4a208
                int32_t var_30_1 = 0xe4a104
                int32_t var_34_1 = 0xe4a000
                sub_4529c0(eax_18, edx_2, ecx_10, edi_1, 
                    "Title: %256[^\r\n] Path: %256[^\r\n] Filter: %256[^\r\n] Default Extension: %3s")
                
                for (int32_t i = 0; i u< 4; i += 1)
                    int32_t eax_20 = __mbscmp(U"?", i * 0x104 + 0xe4a000)
                    
                    if (eax_20 == 0)
                        *(i * 0x104 + 0xe4a000) = eax_20.b
                    else if (i == 2)
                        char j = data_e4a208
                        char* eax_21 = &data_e4a208
                        
                        while (j != 0)
                            if (j == 9)
                                *eax_21 = 0
                            
                            j = eax_21[1]
                            eax_21 = &eax_21[1]
                
                data_e49ed4 = 0xe4a000
                data_e49ed8 = 0xe4a104
                data_e49edc = &data_e4a208
                data_e49ee0 = 0xe4a30c
                data_e4a97c = &data_e49ed4
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 8
                uint32_t eax_13 = __mbsicmp(U"T", *(eax_3 + 0x10))
                int32_t eax_14 = neg.d(eax_13)
                data_e4a97c = sbb.d(eax_14, eax_14, eax_13 != 0) + 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 9
                int32_t var_18 = 0
                int32_t var_c
                int32_t* var_28_4 = &var_c
                int32_t var_14 = 0
                int32_t var_10
                int32_t* var_2c_2 = &var_10
                var_10 = 0
                int32_t* var_30_2 = &var_14
                var_c = 0
                int32_t* var_34_2 = &var_18
                sub_4529c0(&var_18, edx, ecx, *(eax_3 + 0x10), "%hhd.%hhd.%hhd.%hhd")
                data_e4a97c = (((((var_18 << 8) + var_14) << 8) + var_10) << 8) + var_c
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 0xa
                int128_t* var_28_5 = &data_e477c8
                int128_t* var_2c_3 = &data_e477c8:6
                int128_t* var_30_3 = &data_e477c8:2
                data_e477c8 = zx.o(0)
                sub_4529c0(eax_7, edx, ecx, *(eax_3 + 0x10), "%hd/%hd/%hd")
                data_e4a97c = &data_e477c8
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return &data_e4a96c
            case 0xb
                data_e477c8 = zx.o(0)
                uint32_t (* eax_33)[0x4]
                int32_t ecx_17
                int32_t edx_3
                eax_33, ecx_17, edx_3 = _memset(0xe4aa90, 0, 0x104)
                int32_t var_28_6 = 0xe4aa90
                int128_t* var_2c_4 = &data_e477c8:0xc
                int128_t* var_30_4 = &data_e477c8:0xa
                int128_t* var_34_3 = &data_e477c8:8
                sub_4529c0(eax_33, edx_3, ecx_17, *(eax_3 + 0x10), "%hd:%hd:%hd %2s")
                eax_34 = __mbsicmp("PM", 0xe4aa90)
            label_505fbe:
                
                if (eax_34 == 0)
                    eax_34.w = data_e477c8:8.w
                    
                    if (eax_34.w != 0xc)
                        eax_34.w += 0xc
                        data_e477c8:8.w = eax_34.w
                
                data_e4a97c = &data_e477c8
            case 0xc
                data_e477c8 = zx.o(0)
                uint32_t (* eax_35)[0x4]
                int32_t ecx_18
                int32_t edx_4
                eax_35, ecx_18, edx_4 = _memset(0xe4aa90, 0, 0x104)
                int32_t var_28_7 = 0xe4aa90
                int128_t* var_2c_5 = &data_e477c8:0xc
                int128_t* var_30_5 = &data_e477c8:0xa
                int128_t* var_34_4 = &data_e477c8:8
                int128_t* var_38_2 = &data_e477c8
                int128_t* var_3c_4 = &data_e477c8:6
                int128_t* var_40_1 = &data_e477c8:2
                sub_4529c0(eax_35, edx_4, ecx_18, *(eax_3 + 0x10), "%hd/%hd/%hd %hd:%hd:%hd %2s")
                eax_34 = __mbsicmp("PM", 0xe4aa90)
                goto label_505fbe
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return &data_e4a96c
}
