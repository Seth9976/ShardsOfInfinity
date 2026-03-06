// 函数名称: ??R<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@QBEHXZ
// 虚拟地址: 0x52ecd4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??R<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@QBEHXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = **arg1
    int32_t* esi = **arg1
    
    if (esi == 0)
        return 0xffffffff
    
    uint32_t __security_cookie_1 = __security_cookie
    char ecx_1 = __security_cookie_1.b & 0x1f
    int32_t edi
    int32_t var_1c_1 = edi
    int32_t edi_3 = ror.d(esi[1] ^ __security_cookie_1, ecx_1)
    int32_t esi_3 = ror.d(esi[2] ^ __security_cookie_1, ecx_1)
    int32_t ebx_3 = ror.d(*esi ^ __security_cookie_1, ecx_1)
    int32_t result
    
    if (edi_3 != esi_3)
    label_52eddc:
        *edi_3 = __crt_fast_encode_pointer<void (__stdcall*)(struct _RTL_CONDITION_VARIABLE*)>(*arg1[1])
        ***arg1 = __crt_fast_encode_pointer<void (__cdecl**)()>(ebx_3)
        *(**arg1 + 4) = __crt_fast_encode_pointer<void (__cdecl**)()>(edi_3 + 4)
        *(**arg1 + 8) = __crt_fast_encode_pointer<void (__cdecl**)()>(esi_3)
        result = 0
    else
        int32_t eax_2 = 0x200
        int32_t esi_5 = (esi_3 - ebx_3) s>> 2
        
        if (esi_5 u<= 0x200)
            eax_2 = esi_5
        
        int32_t edi_4 = eax_2 + esi_5
        
        if (edi_4 == 0)
            edi_4 = 0x20
        
        int32_t ecx_2
        int32_t edx_1
        
        if (edi_4 u>= esi_5)
            int32_t var_20_1 = 4
            int32_t var_24_1 = edi_4
            int32_t var_28_1 = ebx_3
            int32_t eax_3 = sub_537617()
            edx_1 = __free_base(0)
            ecx_2 = eax_3
        
        if (edi_4 u>= esi_5 && ecx_2 != 0)
        label_52ed80:
            ebx_3 = ecx_2
            esi_3 = ecx_2 + (edi_4 << 2)
            edi_3 = ecx_2 + (esi_5 << 2)
            int32_t var_20_3 = 0x20
            int32_t ecx_3 = edi_3
            int32_t __security_cookie_2 = __security_cookie
            int32_t edx_4 = not.d(sbb.d(edx_1, edx_1, esi_3 u< edi_3)) & (esi_3 - edi_3 + 3) u>> 2
            
            if (edx_4 != 0)
                int32_t eax_10 = 0
                
                do
                    eax_10 += 1
                    *ecx_3 = __security_cookie_2
                    ecx_3 += 4
                while (eax_10 != edx_4)
            
            goto label_52eddc
        
        int32_t var_20_2 = 4
        edi_4 = esi_5 + 4
        int32_t var_24_2 = edi_4
        int32_t var_28_2 = ebx_3
        int32_t eax_4 = sub_537617()
        edx_1 = __free_base(0)
        ecx_2 = eax_4
        
        if (ecx_2 != 0)
            goto label_52ed80
        
        result = 0xffffffff
    
    return result
}
