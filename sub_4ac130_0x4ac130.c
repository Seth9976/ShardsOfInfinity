// 函数名称: sub_4ac130
// 虚拟地址: 0x4ac130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4ac130()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5445b4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_74 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_cdf428
    
    if (esi == 0)
        sub_44e4d0(result, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (not(*(esi + 0x30) f<= 0))
        if (data_e49c60 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e49c60)
            
            if (data_e49c60 == 0xffffffff)
                int32_t var_8_1 = 0
                data_e49c64 = sub_48d5b0("sys/DebugFont.font", 0x12)
                __Init_thread_footer(&data_e49c60)
        
        char* var_14 = &data_5559b1
        int32_t var_8_2 = 1
        float xmm0_1 = *(esi + 0x30)
        int32_t ecx_2 = *(data_65ae04 + 0x14)
        float xmm0_2
        
        if (0f <= xmm0_1)
            xmm0_2 = xmm0_1 + 0.5f
        else
            xmm0_2 = xmm0_1 - 0.5f
        
        int32_t eax_7 = int.d(xmm0_2)
        
        if (ecx_2 s> 1)
            int32_t var_78_3 = ecx_2
            int32_t var_7c_1 = eax_7
            var_8_2.b = 4
            char* var_1c
            sub_44f510(&var_14, sub_44f980(&var_1c, "%d stall %d"))
            var_8_2.b = 5
            
            if (data_cdf414 != 0)
                char* eax_12 = var_1c
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_44f000(&var_1c)
                    int32_t temp0_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_1c = &data_5559b1
        else
            int32_t var_78_1 = eax_7
            var_8_2.b = 2
            char* const var_18
            sub_44f510(&var_14, sub_44f980(&var_18, &data_5828f8))
            var_8_2.b = 3
            
            if (data_cdf414 != 0)
                char* eax_9 = var_18
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_44f000(&var_18)
                    int32_t temp1_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_18 = &data_5559b1
        
        var_8_2.b = 1
        char* edi_1 = var_14
        char* ebx_1 = &data_5559b1
        int32_t var_40 = 0x3f800000
        int32_t var_34_1 = 0
        
        if (edi_1 != 0)
            ebx_1 = edi_1
        
        int32_t var_28_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_30_1 = 0x3f800000
        int32_t var_24_1 = 0
        int32_t var_38_1 = 0x40400000
        int32_t var_2c_1 = 0
        int32_t var_20_1 = 0x3f800000
        void var_64
        void* var_7c_2 = &var_64
        result = sub_4aded0(sub_412bf0(&var_40, &data_57251c, &var_64, &var_40), &var_64, ebx_1, 
            data_e49c64, 0xffffffff, 0xffffffff, 1)
        int32_t var_8_3 = 6
        
        if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
            result = sub_44f000(&var_14)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_45d050(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
