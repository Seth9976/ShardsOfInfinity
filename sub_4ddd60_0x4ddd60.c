// 函数名称: sub_4ddd60
// 虚拟地址: 0x4ddd60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4ddd60(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edx = arg1[1]
    int32_t edx = arg1[1]
    int32_t edi = arg1[2]
    int32_t esi = arg2[3]
    
    if (edi s>= arg2[2])
        edi = arg2[2]
    
    int32_t eax = arg2[4]
    
    if (edx s>= arg2[1])
        edx = arg2[1]
    
    int32_t var_44_1
    char const* const ecx
    int32_t edx_1
    char* esi_1
    void* edi_1
    
    if (esi s>= 0)
        esi_1 = *arg1
        edi_1 = *arg2
        edx_1 = arg1[4]
    label_4dddf4:
        char* var_10_1 = esi_1
        void* var_14_1 = edi_1
        int32_t* eax_5
        
        if (edx_1 == eax)
        label_4dde51:
            int32_t i_1 = sub_4dd7a0(edi, edx_1)
            void* ecx_3 = sub_4dd730(edx, arg1[4])
            eax_5 = arg1
            void* var_30 = ecx_3
            
            if (eax_5[3] == ecx_3 && arg2[3] == ecx_3)
                return sub_51d5b0(*arg2, *eax_5, ecx_3 * i_1)
            
            int32_t edx_4 = neg.d(ecx_3)
            
            if (eax_5[3] == edx_4 && arg2[3] == edx_4)
                return sub_51d5b0(*arg2, *eax_5, ecx_3 * i_1)
            
            if (i_1 s> 0)
                int32_t i
                
                do
                    sub_51d5b0(edi_1, esi_1, ecx_3)
                    eax_5 = arg1
                    edi_1 += arg2[3]
                    ecx_3 = var_30
                    esi_1 = &esi_1[eax_5[3]]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            return eax_5
        
        bool cond:2_1
        
        if (edx_1 != 0xa)
            if (edx_1 == 0xb)
                cond:2_1 = eax == 0xa
                goto label_4dde06
            
            if (edx_1 == 1)
                cond:2_1 = eax == 4
                goto label_4dde06
            
            if (edx_1 == 4)
                if (eax != 1)
                    goto label_4dde08
                
                goto label_4dde51
            
            if (edx_1 s< 0xd || (edx_1 s> 0x12 && edx_1 != 0x15))
                goto label_4dde08
            
            char const* const var_40_4 = "ImageBufferCopyToNewFormat"
            var_44_1 = 0x1f2
            ecx = "!TextureFormatIsCompressed(pSourceSpec->format)"
        else
            cond:2_1 = eax == 0xb
        label_4dde06:
            
            if (cond:2_1)
                goto label_4dde51
            
        label_4dde08:
            
            if (eax s< 0xd || (eax s> 0x12 && eax != 0x15))
                int32_t eax_7 = sub_4dd620(edx_1)
                eax_5 = sub_4dd620(arg2[4])
                int32_t ecx_7 = 0
                int32_t var_20_1 = 0
                
                if (edi s<= 0)
                    return eax_5
                
                int32_t* eax_8 = arg1
                int32_t edx_5 = edx
                
                do
                    char* var_24_1 = esi_1
                    void* var_28_1 = edi_1
                    int32_t var_1c_1 = 0
                    
                    if (edx_5 s> 0)
                        bool cond:3_1
                        
                        do
                            char* eax_9 = sub_4dd8c0(esi_1, eax_8[4])
                            sub_4ddb40(eax_9, arg2[4], edi_1, eax_9)
                            edi_1 += eax_5
                            esi_1 = &esi_1[eax_7]
                            cond:3_1 = var_1c_1 + 1 s< edx
                            var_1c_1 += 1
                            eax_8 = arg1
                        while (cond:3_1)
                        esi_1 = var_10_1
                        edi_1 = var_14_1
                        ecx_7 = var_20_1
                        edx_5 = edx
                    
                    esi_1 = &esi_1[eax_8[3]]
                    ecx_7 += 1
                    edi_1 += arg2[3]
                    var_10_1 = esi_1
                    var_14_1 = edi_1
                    var_20_1 = ecx_7
                while (ecx_7 s< edi)
                
                return eax_8
            
            char const* const var_40_7 = "ImageBufferCopyToNewFormat"
            var_44_1 = 0x1f3
            ecx = "!TextureFormatIsCompressed(pDestSpec->format)"
    else if (eax s< 0xd || (eax s> 0x12 && eax != 0x15))
        edx_1 = arg1[4]
        
        if (edx_1 s< 0xd || (edx_1 s> 0x12 && edx_1 != 0x15))
            eax = arg2[4]
            edi_1 = (edi - 1) * esi + *arg2
            esi_1 = arg1[3] * (edi - 1) + *arg1
            goto label_4dddf4
        
        char const* const var_40_2 = "ImageBufferCopyToNewFormat"
        var_44_1 = 0x1b8
        ecx = "!TextureFormatIsCompressed(pSourceSpec->format)"
    else
        char const* const var_40_1 = "ImageBufferCopyToNewFormat"
        var_44_1 = 0x1b7
        ecx = "!TextureFormatIsCompressed(pDestSpec->format)"
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\imageutils.cpp", var_44_1, 
        "ImageBufferCopyToNewFormat")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
