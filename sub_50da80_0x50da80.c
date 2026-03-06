// 函数名称: sub_50da80
// 虚拟地址: 0x50da80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50da80(int32_t arg1, void* arg2, char* arg3, int32_t arg4, char* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    char* eax_1 = sub_50d6d0(&var_8, arg7, arg6, arg2, arg4, arg5, &var_8)
    
    if (eax_1 != 0)
        int32_t* eax_2 = _fopen(arg3, "wb")
        
        if (eax_2 != 0)
            int32_t* var_14_2 = eax_2
            _fwrite(eax_1, 1, var_8)
            _fclose(eax_2)
            _free(eax_1)
            return 1
        
        _free(eax_1)
    
    return 0
}
