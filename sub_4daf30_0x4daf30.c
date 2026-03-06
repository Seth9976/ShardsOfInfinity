// 函数名称: sub_4daf30
// 虚拟地址: 0x4daf30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4daf30(int32_t arg1, void* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = arg2
    void* var_d8 = ebx
    int32_t var_d4 = 0
    (*__glewGetProgramiv)(arg3, 0x8b86, &var_d4)
    int32_t ecx = var_d4
    *(arg4 + 0x100) = 0
    *(ebx + 0xc) = 0
    int32_t edi_1 = ecx * 0xc
    uint32_t (* esi_1)[0x4]
    
    if (edi_1 != 0)
        esi_1 = sub_45cd70(edi_1)
        _memset(esi_1, 0, edi_1)
        ecx = var_d4
    else
        esi_1 = nullptr
    
    int32_t result = 0
    *(ebx + 0x10) = esi_1
    int32_t var_e0 = 0
    int32_t result_1 = 0
    
    if (ecx s> 0)
        do
            int32_t var_dc = 0
            int32_t var_ec = 0
            char var_d0[0x63]
            (*__glewGetActiveUniform)(arg3, result, 0x64, 0, &var_dc, &var_ec, &var_d0)
            int32_t eax_6 = 0
            char i
            
            do
                i = var_d0[eax_6]
                eax_6 += 1
                void var_6d
                *(&var_6d + eax_6) = i
            while (i != 0)
            void var_6c
            void* eax_7 = _strchr(&var_6c, 0x5b)
            
            if (eax_7 != 0)
                *eax_7 = 0
            
            int32_t i_1 = 0
            
            if (data_5b622c s> 0)
                int32_t edi_2 = 0
                
                do
                    void* ebx_1 = data_5b6228
                    uint32_t eax_8 = __stricmp(*(ebx_1 + edi_2 + 4), &var_6c)
                    
                    if (eax_8 == 0)
                        int32_t edx = *(ebx_1 + edi_2)
                        
                        if (edx == 0xffffffff)
                            goto label_4db079
                        
                        int32_t var_104_5
                        char const* const var_100_7
                        char* ecx_7
                        
                        if (edx s< 0 || edx s>= data_5b6234)
                            var_100_7 = "AttribTagGetField"
                            var_104_5 = 0x8b
                            ecx_7 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                        label_4db19d:
                            sub_44e4d0(eax_8, &data_5559b1, ecx_7, "c:\ax2017\engine\attribmap.cpp", 
                                var_104_5, var_100_7)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        eax_8 = *(data_5b6230 + (edx << 2))
                        void* edi_3 = *(eax_8 + 0xc)
                        
                        if (edi_3 == 0)
                            var_100_7 = "AttribTagGetDefMap"
                            var_104_5 = 0x1fe
                            ecx_7 = "pAttribField->pDefMap"
                            goto label_4db19d
                        
                        ebx = var_d8
                        int32_t ecx_4 = *(ebx + 0xc) * 3
                        int32_t eax_12 = *(ebx + 0x10)
                        *(eax_12 + (ecx_4 << 2) + 8) = edx
                        int32_t* esi_2 = eax_12 + (ecx_4 << 2)
                        esi_2[1] = var_dc
                        
                        if (*(edi_3 + 0x10) == 0xf)
                            esi_2[1] = var_e0
                            var_e0 += 1
                        
                        *esi_2 = (*__glewGetUniformLocation)(arg3, &var_d0)
                        *(ebx + 0xc) += 1
                        int32_t ecx_6 = esi_2[1] + *esi_2
                        int32_t eax_18 = *(arg4 + 0x100)
                        
                        if (eax_18 s<= ecx_6)
                            eax_18 = ecx_6
                        
                        *(arg4 + 0x100) = eax_18
                        goto label_4db096
                    
                    i_1 += 1
                    edi_2 += 0x3c
                while (i_1 s< data_5b622c)
                
            label_4db079:
                ebx = var_d8
            
            void* var_100_4 = &var_6c
            sub_44e260("Unknown shader constant '%s'")
        label_4db096:
            result = result_1 + 1
            result_1 = result
        while (result s< var_d4)
    
    if (*(ebx + 0xc) == 0)
        result = *(ebx + 0x10)
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        *(ebx + 0x10) = 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
