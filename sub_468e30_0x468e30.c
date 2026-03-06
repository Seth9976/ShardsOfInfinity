// 函数名称: sub_468e30
// 虚拟地址: 0x468e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_468e30(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542990
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = arg1
    int32_t* result_1 = result
    int32_t ecx = 0
    int32_t var_20 = 0
    
    if (*result s> 0)
        int32_t edx_1 = data_5b1d7c
        
        while (true)
            int32_t eax_3 = result[1]
            int32_t* esi_1 = eax_3 + (ecx << 3)
            int32_t ecx_1 = *esi_1
            
            if (ecx_1 s< 0 || ecx_1 s>= edx_1)
                sub_44e4d0(eax_3, &data_5559b1, 
                    "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                    "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            int32_t eax_6 = *(*(data_5b1d78 + (ecx_1 << 2)) + 0xc)
            
            if (eax_6 == 0)
                sub_44e4d0(eax_6, &data_5559b1, "pAttribField->pDefMap", 
                    "c:\ax2017\engine\attribmap.cpp", 0x1fe, "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (eax_6 != data_dff714)
                if (ecx_1 s< 0 || ecx_1 s>= edx_1)
                    sub_44e4d0(eax_6, &data_5559b1, 
                        "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                        "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (eax_6 == data_dff67c)
                    int32_t* eax_10 = esi_1[1]
                    int32_t ecx_4 = 0
                    int32_t* var_1c_1 = eax_10
                    int32_t var_18_1 = 0
                    
                    if (eax_10[1] s> 0)
                        int32_t* esi_4 = 4
                        int32_t* var_14_1 = 4
                        
                        while (true)
                            int32_t eax_19 = *eax_10
                            int32_t ebx_1 = 0
                            
                            if (*(esi_4 + eax_19) s> 0)
                                while (true)
                                    int32_t eax_11 = *(esi_4 + eax_19 + 4)
                                    int32_t ecx_5 = *(eax_11 + (ebx_1 << 3))
                                    
                                    if (ecx_5 s< 0 || ecx_5 s>= edx_1)
                                        sub_44e4d0(eax_11, &data_5559b1, 
                                            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                                            "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_44e680()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    int32_t eax_14 = *(*(data_5b1d78 + (ecx_5 << 2)) + 0xc)
                                    
                                    if (eax_14 == 0)
                                        sub_44e4d0(eax_14, &data_5559b1, "pAttribField->pDefMap", 
                                            "c:\ax2017\engine\attribmap.cpp", 0x1fe, 
                                            "AttribTagGetDefMap")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    if (eax_14 == data_dff714)
                                        void* edi_3 = *(eax_11 + (ebx_1 << 3) + 4)
                                        int32_t eax_15 = *(edi_3 + 4)
                                        
                                        if (eax_15 != 0)
                                            uint32_t ecx_6 = zx.d(eax_15.w)
                                            
                                            if (ecx_6 u< data_5c99c0)
                                                void* esi_6 = ecx_6 * 0x234 + data_5c99bc
                                                
                                                if (*(esi_6 + 0x230) == eax_15)
                                                    int32_t var_8_3 = 1
                                                    `eh vector vbase constructor iterator'(
                                                        esi_6 + 0x14, 4, 4, sub_44f380)
                                                    int32_t var_8_4 = 0xffffffff
                                                    int32_t ecx_7 = data_5c99c8
                                                    data_5c99c8 = zx.d(*(esi_6 + 0x230))
                                                    *(esi_6 + 0x230) = ecx_7
                                                    data_5c99cc -= 1
                                                
                                                esi_4 = var_14_1
                                        
                                        *(edi_3 + 4) = 0
                                        edx_1 = data_5b1d7c
                                    
                                    ebx_1 += 1
                                    eax_19 = *var_1c_1
                                    
                                    if (ebx_1 s< *(esi_4 + eax_19))
                                        continue
                                    
                                    ecx_4 = var_18_1
                                    break
                            
                            eax_10 = var_1c_1
                            ecx_4 += 1
                            esi_4 = &esi_4[3]
                            var_18_1 = ecx_4
                            var_14_1 = esi_4
                            
                            if (ecx_4 s>= eax_10[1])
                                break
            else
                void* edi_1 = esi_1[1]
                int32_t eax_7 = *(edi_1 + 4)
                
                if (eax_7 != 0)
                    uint32_t ecx_2 = zx.d(eax_7.w)
                    
                    if (ecx_2 u< data_5c99c0)
                        void* esi_3 = ecx_2 * 0x234 + data_5c99bc
                        
                        if (*(esi_3 + 0x230) == eax_7)
                            int32_t var_8_1 = 0
                            `eh vector vbase constructor iterator'(esi_3 + 0x14, 4, 4, sub_44f380)
                            int32_t var_8_2 = 0xffffffff
                            int32_t ecx_3 = data_5c99c8
                            data_5c99c8 = zx.d(*(esi_3 + 0x230))
                            *(esi_3 + 0x230) = ecx_3
                            data_5c99cc -= 1
                
                *(edi_1 + 4) = 0
                edx_1 = data_5b1d7c
            
            result = result_1
            ecx = var_20 + 1
            var_20 = ecx
            
            if (ecx s>= *result)
                break
            
            continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
