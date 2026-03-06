// 函数名称: sub_51cb38
// 虚拟地址: 0x51cb38
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __stdcallsub_51cb38(int32_t arg1, EXCEPTION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    RtlUnwind(arg1, &data_51cb62, arg2, nullptr)
    uint32_t result = arg2->ExceptionFlags & 0xfffffffd
    arg2->ExceptionFlags = result
    ExceptionList->Next = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
