// 函数名称: __getdrive
// 虚拟地址: 0x534bd6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__getdrive()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_218 = edi
    int32_t result_1 = 0
    void buffer
    _memset(&buffer, 0, 0x20a)
    uint32_t eax_2 = GetCurrentDirectoryW(0x105, &buffer)
    int32_t result
    
    if (eax_2 u> 0x104)
        wchar16* lpBuffer = __calloc_base(eax_2 + 1, 2)
        uint32_t eax_3
        
        if (lpBuffer != 0)
            eax_3 = GetCurrentDirectoryW(eax_2 + 1, lpBuffer)
        
        if (lpBuffer != 0 && eax_3 != 0)
            result_1 = get_drive_number_from_path(lpBuffer)
        else
            *__errno() = 0xc
        
        __free_base(lpBuffer)
        result = result_1
    else
        result = get_drive_number_from_path(&buffer)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
