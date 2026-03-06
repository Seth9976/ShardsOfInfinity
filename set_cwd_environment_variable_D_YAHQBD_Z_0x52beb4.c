// 函数名称: ??$set_cwd_environment_variable@D@@YAHQBD@Z
// 虚拟地址: 0x52beb4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")??$set_cwd_environment_variable@D@@YAHQBD@Z(char arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    arg1 = *arg4
    
    if ((arg1 != 0x5c && arg1 != 0x2f) || arg1 != arg4[1])
        var_8:1.b = _toupper(sx.d(arg1))
        var_8.b = 0x3d
        var_8:2.w = 0x3a
        
        if (___acrt_SetEnvironmentVariableA(&var_8, arg4) == 0)
            ___acrt_errno_map_os_error(GetLastError())
            return 0xffffffff
    
    return 0
}
