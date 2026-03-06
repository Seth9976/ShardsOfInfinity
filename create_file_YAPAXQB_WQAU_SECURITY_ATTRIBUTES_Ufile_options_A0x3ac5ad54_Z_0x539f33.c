// 函数名称: ?create_file@@YAPAXQB_WQAU_SECURITY_ATTRIBUTES@@Ufile_options@?A0x3ac5ad54@@@Z
// 虚拟地址: 0x539f33
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HANDLE?create_file@@YAPAXQB_WQAU_SECURITY_ATTRIBUTES@@Ufile_options@?A0x3ac5ad54@@@Z(PWSTR arg1, SECURITY_ATTRIBUTES* arg2, uint32_t arg3, enum FILE_CREATION_DISPOSITION arg4, enum FILE_SHARE_MODE arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: return CreateFileW(arg1, arg3, arg5, arg2, arg4, arg6 | arg7, nullptr)
    return CreateFileW(arg1, arg3, arg5, arg2, arg4, arg6 | arg7, nullptr)
}
