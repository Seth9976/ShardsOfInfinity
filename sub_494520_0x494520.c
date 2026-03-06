// 函数名称: sub_494520
// 虚拟地址: 0x494520
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_494520(int32_t arg1, int32_t* arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_c = 0
    int32_t var_c = 0
    int64_t var_14 = 0
    sub_48c200(arg4)
    int32_t eax = _fopen(arg4, "wb")
    var_14.d = eax
    
    if (eax == 0)
        char* var_24_2 = arg4
        sub_44e260("DefXML: failed to open file %s")
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    
    char* esi_1 = *arg2
    var_14:4.d = 0
    int32_t var_c_1 = 0
    sub_4e05f0(&var_14)
    int32_t var_24 = var_14.d
    uint32_t eax_1 = _fwrite(0x59a284, 1, 1)
    
    if (eax_1 != 1)
        sub_44e4d0(eax_1, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 0x29, 
            "sXmlEmit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_4e0460(&var_14, esi_1)
    int32_t var_c_2 = var_c_1 + 1
    var_14:4.d = 1
    sub_4e0700(sub_494410(arg3, &var_14), *arg2, &var_14, 1)
    sub_4e05f0(&var_14)
    _fclose(var_14.d)
    int32_t eax_3
    eax_3.b = 1
    return eax_3
}
