// 函数名称: sub_44f000
// 虚拟地址: 0x44f000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_44f000(int32_t* arg1)
{
    // 第一条实际指令: char* result = *arg1
    char* result = *arg1
    int32_t var_8
    char const* const ecx
    
    if (result == 0 || *result == 0)
        char const* const var_4_1 = "XStringMagicDataStructFromCharPtr"
        var_8 = 0x1c
        ecx = "!str->IsEmpty()"
    else
        result = &result[0xfffffff0]
        
        if (*result == 0xfafafafa)
            return result
        
        char const* const var_4 = "XStringMagicDataStructFromCharPtr"
        var_8 = 0x20
        ecx = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\xstring.cpp", var_8, 
        "XStringMagicDataStructFromCharPtr")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
