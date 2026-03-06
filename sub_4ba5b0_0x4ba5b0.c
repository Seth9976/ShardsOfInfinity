// 函数名称: sub_4ba5b0
// 虚拟地址: 0x4ba5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4ba5b0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_544b70
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_8c = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = arg1[5]
    
    if (arg1[3] != 0)
        void* edi_1 = edi * 0x2c
        __alloca_probe_16(edi_1)
        int32_t* var_2c_1 = &var_8c
        int32_t* edi_2 = var_2c_1
        _memset(edi_2, 0, edi_1)
        sub_4b92a0(arg1)
        sub_4b9ff0(arg1, edi_2)
        sub_4ba150(arg1, edi_2)
        int32_t* i_1
        int32_t* var_90_2 = &i_1
        int32_t* var_34
        sub_42ce10(&var_34, *arg1, 2)
        int32_t var_14_1 = 0
        float* ecx_5
        ecx_5.b = 0
        char var_25_1 = 0
        void** edx_4 = *i_1
        int32_t* i = nullptr
        void** var_38 = edx_4
        i_1 = nullptr
        
        if (arg1[0xc4] s> 0)
            void* edi_3 = &arg1[0x2d]
            
            do
                if (*(edi_3 - 4) != 0)
                    var_25_1 = 1
                    
                    if (arg1[5] s<= 0)
                        sub_44e4d0(i, &data_5559b1, "index >= 0 && index < mSize", 
                            "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct Mat4>::operator []")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t var_90_3 = arg1[4]
                    ecx_5 = sub_4baa50(edi_3 + 0x120, edi_3 + 0x104, ecx_5, edi_3 + 0x120, edi_3, 
                        *(edi_3 + 0x100), edx_4[3], var_2c_1)
                    i = i_1
                    edx_4 = var_38
                
                i += 1
                edi_3 += 0x130
                i_1 = i
            while (i s< arg1[0xc4])
            
            edi_2 = var_2c_1
            ecx_5.b = var_25_1
        
        int32_t var_14_2 = 0xffffffff
        int32_t* eax_7 = var_34
        
        if (eax_7 != 0)
            eax_7[7] -= 1
            var_34 = nullptr
        
        if (ecx_5.b != 0)
            sub_4ba150(arg1, edi_2)
        
        void*** var_90_4 = &var_38
        int32_t* result_1
        sub_42ce10(&result_1, *arg1, 2)
        int32_t var_14_3 = 1
        bool cond:2_1 = arg1[5] s<= 0
        void* edx_7 = *var_38
        void* var_3c_1 = edx_7
        int32_t* i_2 = *(edx_7 + 8)
        i_1 = i_2
        
        if (cond:2_1)
            sub_44e4d0(i_2, &data_5559b1, "index >= 0 && index < mSize", "c:\ax2017\engine\xarray.h", 
                0xb5, "XArray<struct Mat4>::operator []")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t edi_4 = 0
        var_38 = arg1[4]
        
        if (i_2 s> 0)
            void* ecx_9 = nullptr
            int32_t var_2c_2 = 0
            var_34 = nullptr
            
            while (true)
                if (ecx_9 s< 0 || edi_4 s>= arg1[0x20])
                    sub_44e4d0(i_2, &data_5559b1, "index >= 0 && index < mSize", 
                        "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct Mat4>::operator []")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_44e680()
                        noreturn
                    
                    breakpoint
                
                *(edx_7 + 0xc)
                void var_80
                int128_t* eax_10 = sub_45c570(&var_80)
                edi_4 += 1
                ecx_9 = &var_34[0x34]
                int128_t xmm0_1 = *eax_10
                var_34 = ecx_9
                int128_t xmm1_1 = eax_10[1]
                int128_t xmm2_1 = eax_10[2]
                int128_t xmm3_1 = eax_10[3]
                i_2 = arg1[0x1f] + var_2c_2
                var_2c_2 += 0x40
                edx_7 = var_3c_1
                *i_2 = xmm0_1
                *(i_2 + 0x10) = xmm1_1
                *(i_2 + 0x20) = xmm2_1
                *(i_2 + 0x30) = xmm3_1
                
                if (edi_4 s>= i_1)
                    break
                
                continue
        
        result = result_1
        
        if (result != 0)
            result[7] -= 1
    else
        int32_t ecx = 0
        
        if (edi s> 0)
            int32_t edx_1 = 0
            
            while (true)
                if (edx_1 s< 0 || ecx s>= arg1[0x20])
                    sub_44e4d0(result, &data_5559b1, "index >= 0 && index < mSize", 
                        "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct Mat4>::operator []")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_44e680()
                        noreturn
                    
                    breakpoint
                
                ecx += 1
                result = arg1[0x1f] + edx_1
                edx_1 += 0x40
                __builtin_memcpy(result, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                        3f", 
                    0x40)
                
                if (ecx s>= edi)
                    break
                
                continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
