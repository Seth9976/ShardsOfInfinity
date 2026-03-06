// 函数名称: _ValidateLocalCookies
// 虚拟地址: 0x51ce40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_ValidateLocalCookies(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax != 0xfffffffe)
        @__security_check_cookie@4((arg1[1] + arg2) ^ *(eax + arg2))
    
    return @__security_check_cookie@4((arg1[3] + arg2) ^ *(arg1[2] + arg2)) __tailcall
}
