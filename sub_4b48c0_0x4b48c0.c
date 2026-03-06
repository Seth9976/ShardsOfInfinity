// 函数名称: sub_4b48c0
// 虚拟地址: 0x4b48c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b48c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_22c
    int32_t var_22c
    int32_t eax_1 = __security_cookie ^ &var_22c
    int32_t ebx
    int32_t var_230 = ebx
    int32_t esi
    int32_t var_234 = esi
    int32_t edi
    int32_t var_238 = edi
    int32_t ebx_1 = arg2
    int32_t edi_1 = 0
    int32_t var_214 = ebx_1
    void var_210
    void* edx = &var_210
    var_22c = 0
    int32_t eax_2 = 0
    void* var_228 = &var_210
    int32_t var_220 = 0
    
    while (true)
        int32_t* eax_8 = *(ebx_1 + (eax_2 << 2))
        int32_t ecx = 0
        int32_t* var_218_1 = eax_8
        int32_t var_224_1 = 0
        
        if (*eax_8 s> 0)
            while (true)
                int32_t* ebx_2 = eax_8[1] + (ecx << 3)
                uint32_t eax_4 = 0
                void* esi_1
                
                if (edi_1 s> 0)
                    esi_1 = edx
                    
                    do
                        if (*esi_1 == *ebx_2)
                            goto label_4b4942
                        
                        eax_4 += 1
                        esi_1 += 8
                    while (eax_4 s< edi_1)
                
                char const* const var_244_2
                int32_t var_240_2
                char const* const var_23c_1
                char* ecx_14
                
                if (edi_1 s>= 0x40)
                    var_23c_1 = "sMaterialCopyMap"
                    var_240_2 = 0x226
                    ecx_14 = "specialStackAttribMap.attributeCount < MAX_STACK_ATTRIBUTES"
                    var_244_2 = "c:\ax2017\engine\material.cpp"
                else
                    esi_1 = edx + (edi_1 << 3)
                    var_22c = edi_1 + 1
                label_4b4942:
                    int32_t ecx_2 = *ebx_2
                    
                    if (ecx_2 s< 0 || ecx_2 s>= data_5b6234)
                        var_23c_1 = "AttribTagGetField"
                        var_240_2 = 0x8b
                        var_244_2 = "c:\ax2017\engine\attribmap.cpp"
                        ecx_14 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                    else
                        eax_4 = *(data_5b6230 + (ecx_2 << 2))
                        void* ecx_3 = *(eax_4 + 0xc)
                        
                        if (ecx_3 == 0)
                            var_23c_1 = "AttribTagGetDefMap"
                            var_240_2 = 0x1fe
                            var_244_2 = "c:\ax2017\engine\attribmap.cpp"
                            ecx_14 = "pAttribField->pDefMap"
                        else
                            eax_4 = sub_48abc0(ecx_3)
                            
                            if (eax_4.b != 0)
                                var_23c_1 = "sMaterialCopyMap"
                                var_240_2 = 0x22c
                                ecx_14 = "
                                "!DefTypeIsDeepStructure(AttribTagGetDefMap(gMaterialAttribTable, "
                                "pTagSource->tag))"
                            else
                                *esi_1 = *ebx_2
                                ecx = var_224_1 + 1
                                *(esi_1 + 4) = ebx_2[1]
                                eax_8 = var_218_1
                                edx = var_228
                                edi_1 = var_22c
                                var_224_1 = ecx
                                
                                if (ecx s< *eax_8)
                                    continue
                                
                                ebx_1 = var_214
                                break
                            
                            var_244_2 = "c:\ax2017\engine\material.cpp"
                
                sub_44e4d0(eax_4, &data_5559b1, ecx_14, var_244_2, var_240_2, var_23c_1)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        
        eax_2 = var_220 - 1
        bool cond:0_1 = var_220 - 1 s>= 0
        var_220 = eax_2
        
        if (not(cond:0_1))
            break
    
    if (sub_4b8920(eax_2, &var_22c, &data_5b6224, 0x6b) == 0)
        arg1[0x1fa].b = 0
        @__security_check_cookie@4(eax_1 ^ &var_22c)
        return arg1
    
    arg1[0x1fa].b = 1
    int32_t eax_12 = (*(*data_ce19b4 + 0x4c))(&var_22c)
    arg1[0x390] = eax_12
    int32_t* eax_13 = sub_4b8b40(eax_12, &var_230, &data_5b6224, 0x5b)
    int32_t* eax_15 =
        sub_4b8b40(sub_4b45a0(eax_13, arg1, eax_13, &var_230, nullptr), &var_230, &data_5b6224, 0x5c)
    int32_t eax_17 =
        sub_4b88a0(sub_4b45a0(eax_15, &arg1[0xfc], eax_15, &var_230, 1), &var_230, &data_5b6224, 0x6a)
    int32_t edx_7 = var_230
    arg1[0x1f9] = eax_17
    
    for (int32_t i = 0; i u< 0x51; i += 1)
        int32_t ecx_8 = 0
        
        if (edx_7 s> 0)
            do
                eax_17 = var_22c
                
                if (*(eax_17 + (ecx_8 << 3)) == i)
                    void* eax_21 = &arg1[arg1[0x1f8] * 5 + 0x1fb]
                    *eax_21 = i
                    eax_17 = sub_4b46d0(eax_21, &var_230, i, eax_21)
                    edx_7 = var_230
                    
                    if (eax_17.b != 0)
                        arg1[0x1f8] += 1
                    
                    break
                
                ecx_8 += 1
            while (ecx_8 s< edx_7)
    
    int32_t var_10
    @__security_check_cookie@4(var_10 ^ &var_230)
    return eax_17
}
