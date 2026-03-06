// 函数名称: ?try_get_first_available_module@@YAPAUHINSTANCE__@@QBW4module_id@?A0x5c520fe1@@0@Z
// 虚拟地址: 0x51f3c2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HMODULE?try_get_first_available_module@@YAPAUHINSTANCE__@@QBW4module_id@?A0x5c520fe1@@0@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    for (int32_t* i = arg1; i != arg2; i = &i[1])
        int32_t ebx_1 = *i
        HMODULE result = *((ebx_1 << 2) + &data_65a35c)
        
        if (result == 0)
            PWSTR lpLibFileName = (&data_54c6b0)[ebx_1]
            result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)
            
            if (result != 0)
            label_51f45e:
                int32_t temp0_2 = *((ebx_1 << 2) + &data_65a35c)
                *((ebx_1 << 2) + &data_65a35c) = result
                
                if (temp0_2 != 0)
                    FreeLibrary(result)
                
                goto label_51f46b
            
            if (GetLastError() != ERROR_INVALID_PARAMETER)
                result = nullptr
            else if (_wcsncmp(lpLibFileName, u"api-ms-", 7) == 0)
                result = nullptr
            else if (_wcsncmp(lpLibFileName, u"ext-ms-", 7) == 0)
                result = nullptr
            else
                result = LoadLibraryExW(lpLibFileName, result, result)
            
            if (result != 0)
                goto label_51f45e
            
            *((ebx_1 << 2) + &data_65a35c)
            *((ebx_1 << 2) + &data_65a35c) = 0xffffffff
        else if (result != 0xffffffff)
        label_51f46b:
            
            if (result != 0)
                return result
    
    return nullptr
}
