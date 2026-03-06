// 函数名称: @__security_check_cookie@4
// 虚拟地址: 0x51b610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall@__security_check_cookie@4(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != __security_cookie)
    if (arg1 != __security_cookie)
        noreturn ___report_gsfailure() __tailcall
}
