// 函数名称: ___std_atomic_wait_indirect@24
// 虚拟地址: 0x414d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcall___std_atomic_wait_indirect@24(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.b = arg1
    void* esi = data_65aabc
    
    if (esi == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gClient", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* var_20
    int32_t* var_1c
    int32_t* var_18
    int32_t* var_14
    
    if (*(esi + 0x434) == 2)
        sub_45e9a0(&data_5bb270:4)
        int64_t xmm0_1 = data_5bb264.q
        data_5bb278 = data_5bb26c
        int32_t eax_5 = data_5bb27c
        data_5bb26c = eax_5
        data_5bb270 = xmm0_1
        data_5bb268 = 0
        data_5bb264 = 0
        data_5bb27c = eax_5 + 1
        data_5bb260 = 0
        sub_45e9a0(&data_5bb250:4)
        int64_t xmm0_2 = data_5bb244
        data_5bb258 = data_5bb24c
        void* eax_8 = data_5bb25c
        data_5bb24c = eax_8
        int32_t* eax_9 = eax_8 + 1
        data_5bb250 = xmm0_2
        data_5bb244:4 = 0
        data_5bb244.d = 0
        data_5bb25c = eax_9
        data_5bb240 = 0
        
        if (ebx.b != 0)
            sub_44f240(&var_20, &data_5559b1)
            int32_t var_8_1 = 0
            sub_44f240(&var_1c, &data_5559b1)
            var_8_1.b = 1
            sub_44f240(&var_18, "You have been disconnected from the server")
            var_8_1.b = 2
            sub_44f240(&var_14, "DISCONNECTED")
            var_8_1.b = 3
            data_5bb260 = 0x1b
            sub_44f510(&data_5bb2a0, &var_14)
            sub_44f510(&data_5bb2a4, &var_18)
            sub_44f510(&data_5bb2a8, &var_1c)
            eax_9 = sub_44f510(&data_5bb2ac, &var_20)
            data_5bb2b0 = 0
            data_5bb2b4 = 0
            var_8_1.b = 4
            
            if (data_cdf414 != 0)
                eax_9 = var_14
                
                if (eax_9 != 0 && *eax_9 != 0)
                    eax_9 = sub_44f000(&var_14)
                    int32_t temp0_1 = eax_9[1]
                    eax_9[1] -= 1
                    
                    if (temp0_1 == 1)
                        eax_9 = sub_45d050(eax_9, eax_9[3] + 0x10)
            
            var_8_1.b = 5
            
            if (data_cdf414 != 0)
                eax_9 = var_18
                
                if (eax_9 != 0 && *eax_9 != 0)
                    eax_9 = sub_44f000(&var_18)
                    int32_t temp2_1 = eax_9[1]
                    eax_9[1] -= 1
                    
                    if (temp2_1 == 1)
                        eax_9 = sub_45d050(eax_9, eax_9[3] + 0x10)
            
            var_8_1.b = 6
            
            if (data_cdf414 != 0)
                eax_9 = var_1c
                
                if (eax_9 != 0 && *eax_9 != 0)
                    eax_9 = sub_44f000(&var_1c)
                    int32_t temp4_1 = eax_9[1]
                    eax_9[1] -= 1
                    
                    if (temp4_1 == 1)
                        eax_9 = sub_45d050(eax_9, eax_9[3] + 0x10)
            
            int32_t var_8_2 = 7
            
            if (data_cdf414 != 0)
                eax_9 = var_20
                
                if (eax_9 != 0 && *eax_9 != 0)
                    eax_9 = sub_44f000(&var_20)
                    int32_t temp6_1 = eax_9[1]
                    eax_9[1] -= 1
                    
                    if (temp6_1 == 1)
                        eax_9 = sub_45d050(eax_9, eax_9[3] + 0x10)
        
        *(esi + 0x42c) = 6
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    char* eax_10 = data_5bb244.d
    
    if (eax_10 == 8 || eax_10 == 6 || eax_10 == 0x11)
    label_414fda:
        sub_45e9a0(&data_5bb270:4)
        int64_t xmm0_3 = data_5bb264.q
        data_5bb278 = data_5bb26c
        int32_t eax_12 = data_5bb27c
        data_5bb26c = eax_12
        data_5bb270 = xmm0_3
        data_5bb268 = 0
        data_5bb264 = 0
        data_5bb27c = eax_12 + 1
        data_5bb260 = 0
        sub_45e9a0(&data_5bb250:4)
        int64_t xmm0_4 = data_5bb244
        data_5bb258 = data_5bb24c
        int32_t eax_15 = data_5bb25c
        data_5bb24c = eax_15
        data_5bb250 = xmm0_4
        data_5bb244:4 = 0
        data_5bb244.d = 0
        data_5bb25c = eax_15 + 1
        data_5bb240 = 0
        eax_10 = sub_417b50()
        
        if (ebx.b != 0)
            sub_44f240(&var_14, &data_5559b1)
            int32_t var_8_3 = 8
            sub_44f240(&var_18, &data_5559b1)
            var_8_3.b = 9
            sub_44f240(&var_1c, "You have been disconnected from the server")
            var_8_3.b = 0xa
            sub_44f240(&var_20, "DISCONNECTED")
            var_8_3.b = 0xb
            data_5bb260 = 0x1b
            sub_44f510(&data_5bb2a0, &var_20)
            sub_44f510(&data_5bb2a4, &var_1c)
            sub_44f510(&data_5bb2a8, &var_18)
            eax_10 = sub_44f510(&data_5bb2ac, &var_14)
            data_5bb2b0 = 0
            data_5bb2b4 = 0
            var_8_3.b = 0xc
            
            if (data_cdf414 != 0)
                eax_10 = var_20
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_20)
                    int32_t temp1_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            var_8_3.b = 0xd
            
            if (data_cdf414 != 0)
                eax_10 = var_1c
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_1c)
                    int32_t temp3_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            var_8_3.b = 0xe
            
            if (data_cdf414 != 0)
                eax_10 = var_18
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_18)
                    int32_t temp5_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            int32_t var_8_4 = 0xf
            
            if (data_cdf414 != 0)
                eax_10 = var_14
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_14)
                    int32_t temp7_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
    else if (eax_10 == 0xe && data_65ac14 != 0)
        goto label_414fda
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10
}
