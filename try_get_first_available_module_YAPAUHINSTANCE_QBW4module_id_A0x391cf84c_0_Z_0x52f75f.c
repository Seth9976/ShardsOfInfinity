// 函数名称: ?try_get_first_available_module@@YAPAUHINSTANCE__@@QBW4module_id@?A0x391cf84c@@0@Z
// 虚拟地址: 0x52f75f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HMODULE?try_get_first_available_module@@YAPAUHINSTANCE__@@QBW4module_id@?A0x391cf84c@@0@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    
    for (int32_t* i = arg1; i != arg2; i = &i[1])
        int32_t ebx_1 = *i
        HMODULE result = *((ebx_1 << 2) + &data_65a688)
        
        if (result == 0)
            PWSTR lpLibFileName = (&data_54e530)[ebx_1]
            result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)
            
            if (result != 0)
            label_52f7fd:
                int32_t temp0_2 = *((ebx_1 << 2) + &data_65a688)
                *((ebx_1 << 2) + &data_65a688) = result
                
                if (temp0_2 != 0)
                    FreeLibrary(result)
                
                goto label_52f80a
            
            if (GetLastError() != ERROR_INVALID_PARAMETER)
                result = nullptr
            else if (_wcsncmp(lpLibFileName, u"api-ms-", 7) == 0)
                result = nullptr
            else if (_wcsncmp(lpLibFileName, u"ext-ms-", 7) == 0)
                result = nullptr
            else
                result = LoadLibraryExW(lpLibFileName, result, result)
            
            if (result != 0)
                goto label_52f7fd
            
            *((ebx_1 << 2) + &data_65a688)
            *((ebx_1 << 2) + &data_65a688) = 0xffffffff
        else if (result != 0xffffffff)
        label_52f80a:
            
            if (result != 0)
                return result
    
    return nullptr
}
