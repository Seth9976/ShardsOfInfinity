// 函数名称: sub_483010
// 虚拟地址: 0x483010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_483010(int32_t arg1, void* arg2, char** arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    void* esi_1 = arg2
    char** edx = arg3
    int32_t edi
    int32_t var_28 = edi
    int32_t* esp_1 = &var_28
    void* var_18 = esi_1
    char** var_1c = edx
    uint32_t result = *(esi_1 + 0x10) - 1
    
    if (result u> 0x10 && *(esi_1 + 8) != 0)
        int32_t edi_1 = 0
        
        while (true)
            int32_t edi_2 = edi_1 + 1
            int32_t* esi_2 = *(esi_1 + 4) + edi_1 * 0x3c
            void* ecx_3 = esi_2[3]
            
            if (edi_2 s>= *(esp_1[4] + 8))
                edi_2 = 0xffffffff
            
            esp_1[7] = edi_2
            int32_t edi_3 = *(ecx_3 + 0x10)
            
            if (edi_3 == 0xf)
                result = *esi_2
                void* ecx_4 = *(result + edx)
                
                if (ecx_4 == 0)
                    goto label_483203
                
                int32_t edx_3 = *(arg5 + 4) + *arg5 + result
                char* eax_3 = *(ecx_4 + 0x20)
                char* const ecx_5 = &data_5559b1
                *(esp_1 - 4) = arg5
                
                if (eax_3 != 0)
                    ecx_5 = eax_3
                
                result = sub_482b20(eax_3, edx_3, ecx_5)
                goto label_4831ff
            
            result = sub_48abc0(ecx_3)
            
            if (result.b == 0)
                goto label_4831ff
            
            if (edi_3 == 5)
                void* eax_4 = esi_2[4]
                char** edi_4 = esp_1[3]
                *(esp_1 - 4) = arg5
                *(esp_1 - 8) = *(eax_4 + edi_4)
                *(esp_1 - 0xc) = arg4
                result = sub_482d50(eax_4, esi_2, edi_4)
                edx = edi_4
                goto label_483203
            
            if (edi_3 == 0x11)
                sub_482d10()
                noreturn
            
            if (edi_3 != 6)
                if (edi_3 == 8)
                    int32_t edx_6 = *esi_2
                    int32_t ecx_9 = esp_1[3]
                    *(esp_1 - 4) = arg5
                    *(esp_1 - 8) = esi_2
                    result = sub_482bd0(result, edx_6, ecx_9)
                    esp_1 = esp_1
                    goto label_4831ff
                
                if (edi_3 == 0xb)
                    int32_t eax_6 = *esi_2
                    char** edi_6 = esp_1[3]
                    *(esp_1 - 4) = arg5
                    int32_t ecx_10
                    ecx_10.b = *(edi_6 + eax_6) != 0
                    *(esp_1 - 8) = ecx_10
                    *(esp_1 - 0xc) = 0
                    result = sub_482d50(eax_6, esi_2, edi_6)
                    edx = edi_6
                    goto label_483203
                
                if (edi_3 == 9)
                    int32_t ecx_12 = esp_1[3]
                    *(esp_1 - 4) = arg5
                    *(esp_1 - 8) = arg4
                    result = sub_482e80(result, esi_2, ecx_12)
                    esp_1 = esp_1
                    goto label_4831ff
                
                char const* const ecx_17
                void* esp_21
                
                if (edi_3 == 0xc)
                    int32_t* eax_7 = *esi_2
                    char* const ecx_13 = &data_5559b1
                    char** edi_7 = esp_1[3]
                    bool cond:2_1 = (esi_2[0xa].b & 0x10) == 0
                    int32_t edx_9 = *(arg5 + 4)
                    *(esp_1 - 4) = arg5
                    
                    if (cond:2_1)
                        ecx_13 = *(eax_7 + edi_7)
                    
                    sub_482b20(eax_7, edx_9 + *arg5 + eax_7, ecx_13)
                    char* ecx_14 = *(edi_7 + *esi_2)
                    result = esi_2[4]
                    int32_t esi_3 = *(edi_7 + result)
                    
                    if (ecx_14 == 0)
                        *(esp_1 - 4) = "DefBinSerializeHashedName"
                        *(esp_1 - 8) = 0x250
                        esp_21 = esp_1 - 8
                        ecx_17 = "pString"
                        goto label_48324d
                    
                    result = sub_4950a0(ecx_14, 0)
                    
                    if (result != esi_3)
                        *(esp_1 - 4) = "DefBinSerializeHashedName"
                        *(esp_1 - 8) = 0x251
                        esp_21 = esp_1 - 8
                        ecx_17 = "strcrc32(pString) == hash"
                        goto label_48324d
                    
                    edx = edi_7
                    goto label_483203
                
                result = *(esi_2[3] + 0x10) - 1
                
                if (result u<= 0x10)
                    *(esp_1 - 4) = "DefBinSerializeBlock"
                    *(esp_1 - 8) = 0x28e
                    esp_21 = esp_1 - 8
                    ecx_17 = "!DefTypeIsBuiltIn(pField->pDefMap)"
                label_48324d:
                    *(esp_21 - 4) = "c:\ax2017\engine\defbin.cpp"
                    sub_44e4d0(result, &data_5559b1, ecx_17)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t eax_10 = *esi_2
                esp_1[5] = esp_1[3] + eax_10
                int32_t edx_14 = *(arg5 + 4)
                esp_1[6] = edx_14
                *(arg5 + 4) = eax_10 + edx_14
                int32_t eax_12 = arg4
                
                if (arg4 == 0 && (edi_3 == 0x13 || edi_3 == 0x14))
                    eax_12 = esi_2[7]
                
                *(esp_1 - 4) = arg5
                esp_1[5]
                *(esp_1 - 8) = eax_12
                sub_483010()
                void* esp_10 = esp_1
                result = *(esp_10 + 0x20)
                *(arg5 + 4) = result
                esp_1 = esp_10 + 8
                goto label_4831ff
            
            int32_t edi_5 = *(arg5 + 4)
            int32_t ecx_7 = *esi_2
            int32_t edx_5 = esi_2[7]
            *(esp_1 - 4) = arg5
            *(esp_1 - 8) = 0
            int32_t eax_5 = ecx_7 + edi_5
            int32_t ecx_8 = ecx_7 + esp_1[3]
            *(esp_1 - 0xc) = esi_2
            *(arg5 + 4) = eax_5
            result = sub_482c00(eax_5, edx_5, ecx_8)
            *(arg5 + 4) = edi_5
        label_4831ff:
            edx = esp_1[3]
        label_483203:
            edi_1 = esp_1[7]
            
            if (edi_1 == 0xffffffff)
                break
            
            esi_1 = esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return result
}
