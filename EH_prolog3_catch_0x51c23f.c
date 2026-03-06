// 函数名称: __EH_prolog3_catch
// 虚拟地址: 0x51c23f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void__EH_prolog3_catch(int32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t var_4 = eax
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t arg_4
    void* esp = &ExceptionList - arg_4
    int32_t entry_ebx
    *(esp - 4) = entry_ebx
    *(esp - 8) = arg1
    *(esp - 0xc) = arg2
    int32_t ebp
    arg_4 = ebp
    *(esp - 0x10) = __security_cookie ^ &arg_4
    void* var_c = esp - 0x10
    *(esp - 0x14) = __return_addr
    __return_addr = 0xffffffff
    fsbase->NtTib.ExceptionList = &ExceptionList
}
