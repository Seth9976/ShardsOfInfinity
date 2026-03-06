// 函数名称: sub_463570
// 虚拟地址: 0x463570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct InputHitResult::UI2HitResult::VTable** __convention("regparm")sub_463570(int32_t arg1, int32_t arg2, struct InputHitResult::UI2HitResult::VTable** arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        *arg3 = &UI2HitResult::`vftable'{for `InputHitResult'}
        arg3[1] = data_5c7c20
        arg3[2] = data_5c7c24
        arg3[3] = data_5c7c28
        arg3[4] = data_5c7c2c
        return arg3
    
    uint32_t eax_5 = zx.d(arg2.w)
    
    if (eax_5 u< data_5c99a4)
        eax_5 = data_5c99a0 + eax_5 * 0x1008
        
        if (*(eax_5 + 0x1004) == arg2)
            sub_462f60(eax_5, eax_5, arg3, 0xff, arg4, 0)
            return arg3
    
    sub_44e4d0(eax_5, &data_5559b1, "DataArrayTryToGet(id) != NULL", "c:\ax2017\engine\dataarray.h", 
        0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
