// 函数名称: ??2@YAPAXI@Z
// 虚拟地址: 0x51c1b2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??2@YAPAXI@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    do
        int32_t var_8_2 = arg1
        int32_t result = _malloc()
        
        if (result != 0)
            return result
        
        i = __callnewh(arg1)
    while (i != 0)
    void var_14
    int32_t __saved_ebp
    
    if (arg1 == 0xffffffff)
        int32_t* var_8_4 = &__saved_ebp
        std::bad_exception::bad_exception(&var_14)
        __CxxThrowException@8(&var_14, 0x5ac31c)
        noreturn
    
    int32_t* var_8_3 = &__saved_ebp
    std::bad_alloc::bad_alloc(&var_14)
    __CxxThrowException@8(&var_14, 0x5ac224)
    noreturn
}
