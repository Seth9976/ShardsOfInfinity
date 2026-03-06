// 函数名称: sub_4ae2c0
// 虚拟地址: 0x4ae2c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4ae2c0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5446e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = arg2
    void* var_14
    int32_t* var_40 = &var_14
    float var_18 = 0f
    int32_t* result_1
    sub_42ce10(&result_1, arg1, 0x12)
    int32_t var_8_1 = 0
    void* edi = var_14
    
    if (*(edi + 0x14) != 0)
        void* ecx_1
        ecx_1.b = *esi
        int32_t* var_20_1 = *(edi + 0x18)
        
        while (ecx_1.b != 0)
            int32_t* eax_3
            
            if (ecx_1.b u>= 0x80)
                eax_3.b = ecx_1.b
                eax_3.b &= 0xe0
                
                if (eax_3.b != 0xc0)
                    eax_3.b = ecx_1.b
                    eax_3.b &= 0xf0
                    
                    if (eax_3.b != 0xe0)
                        ecx_1.b &= 0xf8
                        
                        if (ecx_1.b != 0xf0)
                            sub_44e4d0(eax_3, &data_5559b1, "!Xutf8_is_invalid_lead_char(str)", 
                                "c:\ax2017\engine\xutf8.cpp", 0x212, "Xutf8_peek_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
            
            char* var_1c = esi
            uint32_t i_1 = sub_4afed0(&var_1c)
            char edx = *esi
            uint32_t i = i_1
            var_1c = esi
            
            if (edx u>= 0x80 && (edx & 0xe0) != 0xc0)
                i_1.b = edx
                i_1.b &= 0xf0
                
                if (i_1.b != 0xe0 && (edx & 0xf8) != 0xf0)
                    sub_44e4d0(i_1, &data_5559b1, "!Xutf8_is_invalid_lead_char(str)", 
                        "c:\ax2017\engine\xutf8.cpp", 0x218, "Xutf8_next")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            sub_4afed0(&var_1c)
            esi = var_1c
            char ecx_5 = *esi
            
            if (ecx_5 u>= 0x80)
                uint32_t eax_4
                eax_4.b = ecx_5
                eax_4.b &= 0xe0
                
                if (eax_4.b != 0xc0)
                    eax_4.b = ecx_5
                    eax_4.b &= 0xf0
                    
                    if (eax_4.b != 0xe0 && (ecx_5 & 0xf8) != 0xf0)
                        sub_44e4d0(eax_4, &data_5559b1, "!Xutf8_is_invalid_lead_char(str)", 
                            "c:\ax2017\engine\xutf8.cpp", 0x212, "Xutf8_peek_next")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
            
            var_1c = esi
            uint32_t eax_5 = sub_4afed0(&var_1c)
            void* edi_1 = var_14
            eax_3, ecx_1 = sub_4ad6f0(eax_5, var_20_1, edi_1, i)
            
            if (eax_3 != 0)
                var_1c = eax_3[7]
                
                if (eax_5 != 0)
                    int32_t edx_2 = eax_3[8]
                    
                    if (edx_2 != 0xffffffff)
                        int32_t edi_2 = *(edi_1 + 0x1c)
                        
                        if (edx_2 s< edi_2)
                            eax_3 = *(var_14 + 0x20) + edx_2 * 0xc
                            
                            while (*eax_3 == i)
                                if (eax_3[1] == eax_5)
                                    var_1c = &var_1c[eax_3[2]]
                                    break
                                
                                edx_2 += 1
                                eax_3 = &eax_3[3]
                                
                                if (edx_2 s>= edi_2)
                                    break
                        
                        edi_1 = var_14
                
                bool cond:0_1 = *esi == 0
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_1c)) + var_18
                var_18 = xmm1_2
                
                if (not(cond:0_1))
                    var_18 = *(edi_1 + 0x10) + xmm1_2
            
            ecx_1.b = *esi
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
