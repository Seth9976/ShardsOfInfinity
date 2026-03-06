// 函数名称: sub_484600
// 虚拟地址: 0x484600
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_484600(void** arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_10
    int32_t* var_10
    char* eax = sub_482970(arg2, &var_10)
    
    if (eax.b == 0)
        return eax
    
    int32_t ebx
    ebx.b = sub_484410(eax, &var_10, arg1, arg2)
    _fclose(var_10)
    int32_t eax_2
    eax_2.b = ebx.b
    return eax_2
}
