// 函数名称: sub_484ec0
// 虚拟地址: 0x484ec0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_484ec0(int32_t arg1, uint32_t (* arg2)[0x4], int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* var_10
    int32_t* var_10
    void* ecx
    char eax = sub_482970(ecx, &var_10)
    
    if (eax == 0)
        return eax
    
    int32_t* esi = var_10
    
    if (_fseek(esi, arg3, 0) != 0)
        _fclose(esi)
        int32_t eax_2
        eax_2.b = 0
        return eax_2
    
    int32_t ebx
    ebx.b = _fread(arg2, arg4, 1, esi) == 1
    _fclose(esi)
    int32_t eax_4
    eax_4.b = ebx.b
    return eax_4
}
