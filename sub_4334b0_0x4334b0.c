// 函数名称: sub_4334b0
// 虚拟地址: 0x4334b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4334b0(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_541e00
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_10c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_65ae00
    int32_t var_a8 = 0
    int32_t var_a4 = 0
    int32_t var_98 = 0
    uint128_t xmm2 = zx.o(*(eax_3 + 0x18))
    int32_t xmm1_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t var_94 = 0
    int32_t xmm2_1 = _mm_cvtepi32_ps(xmm2)
    int32_t var_a0 = xmm1_1
    int32_t var_9c = xmm2_1
    int32_t var_90 = xmm1_1
    int32_t var_8c = xmm2_1
    void var_100
    int32_t edx
    int128_t* eax_5 = sub_433310(&var_100, edx, arg1, &var_100)
    bool cond:0 = *(arg1 + 0x24) != 5
    int128_t var_80 = *eax_5
    int128_t var_70 = eax_5[1]
    int128_t var_60 = eax_5[2]
    int128_t var_50 = eax_5[3]
    int32_t var_30 = eax_5[5].d
    int32_t eax_7 = 0x2de7
    
    if (cond:0)
        eax_7 = 0x2c8f
    
    int128_t var_40 = eax_5[4]
    sub_462b10(&var_a8, arg1 + 0x530, "token", data_dfd034, &var_a8, &var_98, eax_7, nullptr, 0)
    sub_469ac0(*(arg1 + 0x530), &var_80)
    
    if (data_e48168 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e48168)
        
        if (data_e48168 == 0xffffffff)
            int32_t eax_11 = data_cdf41c
            data_e48174 = eax_11
            data_e48170 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48180 = "token_money"
            data_e4817c = data_cdf418
            data_e4819c = eax_11 + 2
            data_e481b0 = eax_11 + 3
            data_e481c4 = eax_11 + 4
            data_e481d8 = eax_11 + 5
            data_e48184 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48194 = "token_power"
            data_e48188 = eax_11 + 1
            data_e48190 = &data_e48170
            data_e48198 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e481a8 = "token_mastery"
            data_e481a4 = &data_e48184
            data_e481ac = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e481bc = "token_health"
            data_e481b8 = &data_e48198
            data_e481c0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e481d0 = "token_shields"
            data_e481cc = &data_e481ac
            data_e481d4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e481e4 = "token_health_lost"
            data_cdf41c = eax_11 + 6
            data_e481e0 = &data_e481c0
            data_cdf418 = &data_e481d4
            __Init_thread_footer(&data_e48168)
    
    int32_t var_110_1 = 0xffffffff
    sub_469930(*(arg1 + 0x530))
    
    if (*(arg1 + 0x24) != 5)
        int32_t var_110_3 = *(arg1 + 0x30)
        char* const var_84
        sub_44f980(&var_84, &data_5828f8)
        int32_t var_14_3 = 2
        sub_469cf0(&var_84, &data_5c2f70, *(arg1 + 0x530), &var_84, 0xffffffff)
        int32_t var_14_4 = 3
        
        if (data_cdf414 != 0)
            char* eax_26 = var_84
            
            if (eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_44f000(&var_84)
                int32_t temp0_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
                    var_84 = &data_5559b1
    else
        int32_t var_110_2 = neg.d(*(arg1 + 0x30))
        char* var_88
        sub_44f980(&var_88, &data_5828f8)
        int32_t var_14_1 = 0
        sub_469cf0(&var_88, &data_5c2f70, *(arg1 + 0x530), &var_88, 0xffffffff)
        int32_t var_14_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_23 = var_88
            
            if (eax_23 != 0 && *eax_23 != 0)
                char* eax_24 = sub_44f000(&var_88)
                int32_t temp1_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_24, *(eax_24 + 0xc) + 0x10)
    
    int32_t var_14_5 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_466e80(*(arg1 + 0x530), data_5b0f3c)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
