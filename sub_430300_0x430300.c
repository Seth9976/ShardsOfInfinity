// 函数名称: sub_430300
// 虚拟地址: 0x430300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_430300(int32_t arg1, void* arg2, char* arg3, int128_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) =
        __ehhandler$?_Makewloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_bc = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_24 = arg3
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    char var_28 = eax_3.b
    char var_3c = 0
    int32_t edx = arg5[0xcf]
    
    if (edx s<= 0)
        eax_3.b = 0
    else
        uint32_t eax_6 = zx.d((*arg5[0xce]).w)
        
        if (eax_6 u>= 0xc8)
            sub_44e4d0(eax_6, &data_5559b1, "idNoMimic < MAX_CARDS", 
                "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if ((*((eax_6 << 5) + arg2 + 0x14))[0xa] != 3)
            eax_3.b = 0
        else
            eax_3.b = 1
    
    if (*(arg2 + 0x2168) == 3 && arg5[0xcd] == 0)
        if (edx == 0)
        label_4303a0:
            
            if (arg5[0xd1] s> 1)
                int32_t var_c0_1 = 0x63
                char ecx_1 = var_28
                
                if (sub_452bf0(eax_3, 0, arg3) s< 0xa)
                    ecx_1 = 1
                
                var_28 = ecx_1
                var_3c = ecx_1
        else if (edx == 1 && eax_3.b != 0)
            goto label_4303a0
    
    int32_t* ecx_3 = sub_431290(data_65ac48)
    int128_t var_80
    
    if (var_28 != 0)
        int32_t var_c0_2 = data_65ac48
        int32_t var_4c = 0
        int32_t var_38 = 0xbf800000
        int32_t var_34 = 0
        int32_t var_30 = 0
        void var_b0
        int128_t* eax_9 = sub_4312d0(arg5, &var_b0, arg2, arg5, 0xffffffff, &var_4c, &var_38, 0, 0, 
            &var_34, &var_30, ecx_3, 0xa)
        var_80 = *eax_9
        int128_t var_70_1 = eax_9[1]
        int128_t var_60_1 = eax_9[2]
        char* const var_2c
        char** eax_11 = sub_42f0f0(&var_80, arg2, &var_2c, arg5[1], &var_80)
        int64_t xmm0_5 = _mm_cvtps_pd(var_38)
        char* ecx_6 = &data_5559b1
        char* eax_12 = *eax_11
        
        if (eax_12 != 0)
            ecx_6 = eax_12
        
        int32_t var_c0_4 = var_30
        int32_t var_c4_2 = var_34
        int32_t* var_cc_1
        var_cc_1.q = xmm0_5
        char* var_d0_2 = ecx_6
        ecx_3 = sub_44e260("** final action non-force:%s score:%f evals:%d cacheHits:%d")
        int32_t var_14_1 = 0
        
        if (data_cdf414 != 0)
            char* eax_13 = var_2c
            
            if (eax_13 != 0 && *eax_13 != 0)
                ecx_3 = &var_2c
                char* eax_14 = sub_44f000(ecx_3)
                int32_t temp0_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp0_1 == 1)
                    ecx_3 = sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_2c = &data_5559b1
        
        int32_t var_14_2 = 0xffffffff
    
    int32_t var_c0_5 = data_65ac48
    int32_t var_50 = 0
    int32_t var_48 = 0xbf800000
    int32_t var_44 = 0
    int32_t var_40 = 0
    int128_t* eax_15 = sub_4312d0(arg5, &var_80, arg2, arg5, 0xffffffff, &var_50, &var_48, 0, var_3c, 
        &var_44, &var_40, ecx_3, 0xa)
    *arg4 = *eax_15
    arg4[1] = eax_15[1]
    arg4[2] = eax_15[2]
    
    if (var_28 != 0)
        char** eax_16 = sub_42f0f0(eax_15, arg2, &var_24, arg5[1], arg4)
        int64_t xmm0_10 = _mm_cvtps_pd(var_48)
        char* ecx_11 = &data_5559b1
        char* eax_17 = *eax_16
        
        if (eax_17 != 0)
            ecx_11 = eax_17
        
        int32_t var_c0_7 = var_40
        int32_t var_c4_4 = var_44
        int32_t* var_cc_2
        var_cc_2.q = xmm0_10
        char* var_d0_4 = ecx_11
        sub_44e260("** final action:%s score:%f evals:%d cacheHits:%d")
        int32_t var_14_3 = 1
        
        if (data_cdf414 != 0)
            char* eax_18 = var_24
            
            if (eax_18 != 0 && *eax_18 != 0)
                char* eax_19 = sub_44f000(&var_24)
                int32_t temp1_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
