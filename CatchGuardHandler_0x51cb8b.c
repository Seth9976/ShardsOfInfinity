// 函数名称: __CatchGuardHandler
// 虚拟地址: 0x51cb8b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__CatchGuardHandler(int32_t* arg1, void** arg2, void* arg3)
{
    // 第一条实际指令: @__security_check_cookie@4(arg2[2] ^ arg2)
    @__security_check_cookie@4(arg2[2] ^ arg2)
    return __InternalCxxFrameHandler<class __FrameHandler3>(arg1, arg2[4], arg3, nullptr, arg2[3], 
        arg2[5], arg2, 0)
}
