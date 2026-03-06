// 函数名称: sub_4bdf50
// 虚拟地址: 0x4bdf50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4bdf50(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544d29
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    char* esi
    int64_t xmm0
    
    if (_strncmp(0x5968c0, *(arg2 + 4), 2) == 0)
        *(arg2 + 4) += 2
        sub_4bd480(arg2)
        xmm0 = data_654ed4.q
        esi = data_654edc
    else
        xmm0 = data_e47140.q
        esi = data_e47148
    
    char* var_1c = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_4 = sub_44f000(&var_1c)
        *(eax_4 + 4) += 1
    
    int32_t var_14_1 = 2
    int32_t var_8_1 = 1
    int32_t eax_5 = xmm0.d
    bool cond:0_1
    
    if (eax_5 == 2 || eax_5 == 3 || eax_5 == 4)
        *arg1 = eax_5
        arg1[1] = xmm0:4.d
        arg1[2] = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_15 = sub_44f000(&arg1[2])
            *(eax_15 + 4) += 1
        
        int32_t var_14_4 = 3
        int32_t var_8_4 = 2
    label_4be11b:
        
        if (data_cdf414 != 0 && esi != 0)
            cond:0_1 = *esi == 0
        label_4be12b:
            
            if (not(cond:0_1))
                char* eax_16 = sub_44f000(&var_1c)
                int32_t temp1_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
    else
        void var_30
        int32_t* eax_6 = sub_4bd500(eax_5.b, arg2, &var_30, "0X")
        var_8_1.b = 3
        int64_t var_24
        var_24.d = *eax_6
        var_24:4.d = eax_6[1]
        sub_44f510(&var_1c, &eax_6[2])
        var_8_1.b = 4
        
        if (data_cdf414 != 0)
            char* var_28
            char* eax_8 = var_28
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&var_28)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
        
        var_8_1.b = 1
        int32_t eax_10 = var_24.d
        
        if (eax_10 == 2 || eax_10 == 3 || eax_10 == 4)
            esi = var_1c
            *arg1 = eax_10
            arg1[1] = var_24:4.d
            arg1[2] = esi
            
            if (esi != 0 && *esi != 0)
                char* eax_13 = sub_44f000(&arg1[2])
                *(eax_13 + 4) += 1
            
            int32_t var_14_3 = 3
            int32_t var_8_3 = 5
            goto label_4be11b
        
        sub_4bd500(eax_10.b, arg2, arg1, U"#e")
        int32_t var_14_2 = 3
        int32_t var_8_2 = 6
        
        if (data_cdf414 != 0)
            char* eax_11 = var_1c
            
            if (eax_11 != 0)
                cond:0_1 = *eax_11 == 0
                goto label_4be12b
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
