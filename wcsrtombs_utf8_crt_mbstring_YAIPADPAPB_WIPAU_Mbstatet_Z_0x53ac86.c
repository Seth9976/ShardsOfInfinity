// 函数名称: ?__wcsrtombs_utf8@__crt_mbstring@@YAIPADPAPB_WIPAU_Mbstatet@@@Z
// 虚拟地址: 0x53ac86
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?__wcsrtombs_utf8@__crt_mbstring@@YAIPADPAPB_WIPAU_Mbstatet@@@Z(void* arg1, int32_t* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ecx = arg1
    void* ebx = arg4
    void* var_20 = ebx
    int32_t edi
    int32_t var_30 = edi
    int16_t* edi_1 = *arg2
    void* result
    int16_t* var_14
    void var_10
    int32_t edx
    
    if (ecx == 0)
        void* esi_2 = nullptr
        
        while (true)
            result, ecx, edx = __crt_mbstring::__c16rtomb_utf8(&var_10, edx, ecx, &var_10, *edi_1, ebx)
            
            if (result == 0xffffffff)
                break
            
            if (result != 0 && *(&var_14:3 + result) == 0)
                result = result - 1 + esi_2
                break
            
            esi_2 += result
            edi_1 = &edi_1[1]
    else
        void* eax_3 = arg3
        void* esi = ecx
        var_14 = edi_1
        
        while (true)
            void* var_18_1
            void* ecx_1
            
            if (eax_3 u>= 4)
                ecx_1 = esi
                var_18_1 = esi
            else
                ecx_1 = &var_10
                var_18_1 = &var_10
            
            uint32_t eax_4 = zx.d(*edi_1)
            void* eax_5
            eax_5, edx = __crt_mbstring::__c16rtomb_utf8(eax_4, edx, ecx_1, ecx_1, eax_4.w, ebx)
            
            if (eax_5 == 0xffffffff)
                result = 0xffffffff
                *arg2 = var_14
                break
            
            int16_t* eax_8
            
            if (var_18_1 != esi)
                if (arg3 u< eax_5)
                    eax_8 = var_14
                label_53ad33:
                    *arg2 = eax_8
                    result = esi - ecx
                    break
                    break
                
                edx = sub_51d5b0(esi, var_18_1, eax_5)
            
            if (eax_5 != 0)
                void* ecx_2 = eax_5 + esi
                
                if (*(ecx_2 - 1) == 0)
                    eax_8 = nullptr
                    esi = ecx_2 - 1
                    goto label_53ad33
            
            edi_1 = &edi_1[1]
            
            if (eax_5 != 0)
                var_14 = edi_1
            
            eax_3 = arg3 - eax_5
            esi += eax_5
            ebx = var_20
            arg3 = eax_3
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
