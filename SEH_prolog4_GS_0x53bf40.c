// 函数名称: __SEH_prolog4_GS
// 虚拟地址: 0x53bf40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void__SEH_prolog4_GS(int32_t arg1 @ esi, int32_t arg2 @ edi, void* arg3)
{
    // 第一条实际指令: int32_t (* var_4)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    int32_t (* var_4)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t arg_8
    int32_t eax = arg_8
    int32_t ebp
    arg_8 = ebp
    void* esp = &ExceptionList - eax
    int32_t entry_ebx
    *(esp - 4) = entry_ebx
    *(esp - 8) = arg1
    *(esp - 0xc) = arg2
    uint32_t __security_cookie_1 = __security_cookie
    int32_t eax_1 = __security_cookie_1 ^ &arg_8
    int32_t var_14 = eax_1
    *(esp - 0x10) = eax_1
    void* var_10 = esp - 0x10
    *(esp - 0x14) = __return_addr
    void* __return_addr_1 = arg3 ^ __security_cookie_1
    arg3 = 0xfffffffe
    __return_addr = __return_addr_1
    fsbase->NtTib.ExceptionList = &ExceptionList
}
