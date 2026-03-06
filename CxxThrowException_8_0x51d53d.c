// 函数名称: __CxxThrowException@8
// 虚拟地址: 0x51d53d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void__CxxThrowException@8(int32_t* arg1, char* arg2) __noreturn
{
    // 第一条实际指令: uint32_t dwExceptionCode
    uint32_t dwExceptionCode
    __builtin_memcpy(&dwExceptionCode, 0x54c674, 0x20)
    char* edi = arg2
    
    if (edi != 0 && (*edi & 0x10) != 0)
        int32_t* ecx_2 = *arg1 - 4
        void* eax_1 = *ecx_2
        edi = *(eax_1 + 0x18)
        (*(eax_1 + 0x20))(ecx_2)
    
    int32_t* var_c = arg1
    char* var_8 = edi
    uint32_t arguments
    
    if (edi != 0 && (*edi & 8) != 0)
        arguments = 0x1994000
    
    uint32_t dwExceptionFlags
    uint32_t nNumberOfArguments
    RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
    noreturn
}
