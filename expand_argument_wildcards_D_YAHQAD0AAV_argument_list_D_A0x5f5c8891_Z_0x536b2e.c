// 函数名称: ??$expand_argument_wildcards@D@@YAHQAD0AAV?$argument_list@D@?A0x5f5c8891@@@Z
// 虚拟地址: 0x536b2e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$expand_argument_wildcards@D@@YAHQAD0AAV?$argument_list@D@?A0x5f5c8891@@@Z(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    char* var_8 = __security_cookie ^ &__saved_ebp
    char* i = arg2
    int32_t edi
    int32_t var_15c = edi
    char* eax_1
    
    for (; i != arg1; i = __mbsdec(arg1, i))
        eax_1.b = *i
        
        if (eax_1.b == 0x2f)
            break
        
        if (eax_1.b == 0x5c)
            break
        
        if (eax_1.b == 0x3a)
            break
    
    char edx = *i
    int32_t result
    
    if (edx != 0x3a || i == &arg1[1])
        int32_t result_1 = 0
        
        if (edx != 0x2f && edx != 0x5c)
            eax_1.b = 0
        
        if (edx == 0x2f || edx == 0x5c || edx == 0x3a)
            eax_1.b = 1
        
        uint32_t eax_2 = zx.d(eax_1.b)
        int32_t eax_3 = neg.d(eax_2)
        void var_148
        _memset(&var_148, 0, 0x140)
        HANDLE hFindFile =
            ___acrt_FindFirstFileExA(arg1, FindExInfoStandard, &var_148, FindExSearchNameMatch, 0, 0)
        int32_t* eax_6 = arg3
        int32_t result_2
        
        if (hFindFile != 0xffffffff)
            uint32_t* var_154_1 = (eax_6[1] - *eax_6) s>> 2
            bool cond:0_1
            
            do
                char var_11c
                
                if (var_11c != 0x2e)
                label_536c56:
                    result_2 = copy_and_add_argument_to_buffer<char>(&var_11c, arg1, 
                        sbb.d(eax_3, eax_3, eax_2 != 0) & (i - arg1 + 1), eax_6)
                    
                    if (result_2 != 0)
                        goto label_536bf8
                else
                    char var_11b
                    uint32_t* ecx_6
                    ecx_6.b = var_11b
                    char var_11a
                    
                    if (ecx_6.b != 0 && (ecx_6.b != 0x2e || var_11a != 0))
                        goto label_536c56
                
                cond:0_1 = ___acrt_FindNextFileA(hFindFile, &var_148) != 0
                eax_6 = arg3
            while (cond:0_1)
            int32_t edx_1 = *eax_6
            int32_t eax_10 = (eax_6[1] - edx_1) s>> 2
            
            if (var_154_1 != eax_10)
                _qsort(edx_1 + (var_154_1 << 2), eax_10 - var_154_1, 4, 
                    <lambda_0dd5bdc19d053301b5cd8d3a41e3b3be>::<helper_func_cdecl>)
        else
            result_2 = copy_and_add_argument_to_buffer<char>(arg1, 0, nullptr, eax_6)
        label_536bf8:
            result_1 = result_2
        
        if (hFindFile != 0xffffffff)
            FindClose(hFindFile)
        
        result = result_1
    else
        result = copy_and_add_argument_to_buffer<char>(arg1, 0, nullptr, arg3)
    
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return result
}
