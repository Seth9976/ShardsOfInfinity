// 函数名称: __SEH_epilog4_GS
// 虚拟地址: 0x53bf89
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__SEH_epilog4_GS(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: @__security_check_cookie@4(arg1[-7] ^ arg1)
    @__security_check_cookie@4(arg1[-7] ^ arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-4]
    *arg1
    *arg1 = __return_addr
}
