// 函数名称: sub_46a380
// 虚拟地址: 0x46a380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_46a380(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542a10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_51d5b0(&data_5cda28, arg1, 0x1018)
    data_dff690
    sub_48b5b0(**data_5cd9f8)
    char* eax_4 = sub_48bb00(**(arg1 + 0x1018), data_dff690)
    **data_5cd9f8 = eax_4
    int32_t* ecx_6 = data_5cd9f8
    
    if (ecx_6[1] != 0x22)
        sub_44e4d0(eax_4, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", "c:\ax2017\engine\ui2.cpp", 
            0x623, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* result = sub_4459f0(ecx_6)
    int32_t* result_1 = result
    int32_t ecx_7 = 0
    int32_t* result_2 = result_1
    int32_t var_18 = 0
    
    if (result_1[1] s> 0)
        int32_t* edx_2 = nullptr
        int32_t* var_1c_1 = nullptr
        
        while (true)
            result = *result_1
            int32_t edi_1 = 0
            
            if (*(edx_2 + result) s> 0)
                while (true)
                    int32_t eax_5 = *(edx_2 + result + 4)
                    int32_t ecx_8 = *(eax_5 + (edi_1 << 3))
                    
                    if (ecx_8 s< 0 || ecx_8 s>= data_5b1d7c)
                        sub_44e4d0(eax_5, &data_5559b1, 
                            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                            "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_44e680()
                            noreturn
                        
                        breakpoint
                    
                    int32_t eax_8 = *(*(data_5b1d78 + (ecx_8 << 2)) + 0xc)
                    
                    if (eax_8 == 0)
                        sub_44e4d0(eax_8, &data_5559b1, "pAttribField->pDefMap", 
                            "c:\ax2017\engine\attribmap.cpp", 0x1fe, "AttribTagGetDefMap")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    if (eax_8 == data_dff714)
                        void* ebx_2 = *(eax_5 + (edi_1 << 3) + 4)
                        int32_t eax_9 = *(ebx_2 + 4)
                        
                        if (eax_9 != 0)
                            uint32_t ecx_9 = zx.d(eax_9.w)
                            
                            if (ecx_9 u< data_5c99c0)
                                void* esi_2 = ecx_9 * 0x234 + data_5c99bc
                                
                                if (*(esi_2 + 0x230) == eax_9)
                                    int32_t var_8_1 = 0
                                    `eh vector vbase constructor iterator'(esi_2 + 0x14, 4, 4, 
                                        sub_44f380)
                                    edx_2 = var_1c_1
                                    int32_t var_8_2 = 0xffffffff
                                    int32_t ecx_10 = data_5c99c8
                                    data_5c99c8 = zx.d(*(esi_2 + 0x230))
                                    *(esi_2 + 0x230) = ecx_10
                                    data_5c99cc -= 1
                                
                                result_1 = result_2
                        
                        *(ebx_2 + 4) = 0
                    
                    result = *result_1
                    edi_1 += 1
                    
                    if (edi_1 s< *(edx_2 + result))
                        continue
                    
                    ecx_7 = var_18
                    break
            
            ecx_7 += 1
            edx_2 = &edx_2[3]
            var_18 = ecx_7
            var_1c_1 = edx_2
            
            if (ecx_7 s>= result_1[1])
                break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
