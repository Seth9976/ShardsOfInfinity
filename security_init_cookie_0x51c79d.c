// 函数名称: ___security_init_cookie
// 虚拟地址: 0x51c79d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___security_init_cookie()
{
    // 第一条实际指令: uint32_t __security_cookie_1 = __security_cookie
    uint32_t __security_cookie_1 = __security_cookie
    
    if (__security_cookie_1 == 0xbb40e64e || (0xffff0000 & __security_cookie_1) == 0)
        uint32_t __security_cookie_2 = ___get_entropy()
        __security_cookie_1 = __security_cookie_2
        
        if (__security_cookie_1 == 0xbb40e64e)
            __security_cookie_1 = 0xbb40e64f
        else if ((0xffff0000 & __security_cookie_1) == 0)
            __security_cookie_1 |= (__security_cookie_2 | 0x4711) << 0x10
        
        __security_cookie = __security_cookie_1
    
    data_5b0068 = not.d(__security_cookie_1)
}
