// 函数名称: __lseeki64_nolock
// 虚拟地址: 0x5337ca
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__lseeki64_nolock(int32_t arg1, int32_t arg2, int32_t arg3, enum SET_FILE_POINTER_MOVE_METHOD arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    return common_lseek_nolock<int64_t>(eax, edx, ecx, arg1, arg2, arg3, arg4)
}
