// 函数名称: sub_4ddb40
// 虚拟地址: 0x4ddb40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t __convention("regparm")sub_4ddb40(int32_t arg1, int32_t arg2, uint8_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    int32_t eax_11
    uint16_t ecx_33
    uint16_t edx_3
    
    if (arg2 - 1 u> 0x14)
        char const* const var_c_1 = "ImageRgbaToPixel"
        var_10 = 0x1a2
    else
        switch (arg2)
            case 1, 4
                *arg3 = (arg4 u>> 0x10).b
                arg3[2] = arg4.b
                uint8_t eax_1 = (arg4 u>> 0x18).b
                arg3[1] = (arg4 u>> 8).b
                arg3[3] = eax_1
                return eax_1
            case 2
                arg3[1] = (arg4 u>> 8).b
                *arg3 = arg4.b
                uint8_t eax_4 = (arg4 u>> 0x18).b
                arg3[2] = (arg4 u>> 0x10).b
                arg3[3] = eax_4
                return eax_4
            case 3
                *arg3 = (arg4 u>> 0x18).b
                arg3[1] = (arg4 u>> 0x10).b
                arg3[2] = (arg4 u>> 8).b
                arg3[3] = arg4.b
                return arg4
            case 5
                *arg3 = (arg4 u>> 0x10).b
                arg3[1] = (arg4 u>> 8).b
                arg3[2] = arg4.b
                return arg4
            case 6
                *arg3 = (arg4 u>> 8).b << 4 | (arg4 u>> 0x10).b
                arg3[1] = (arg4 u>> 0x18).b << 4 | arg4.b
                return arg4
            case 7
                eax_11 = arg4
                edx_3 = (zx.w((eax_11 u>> 0x18).b u>> 7) << 5 | zx.w(eax_11.b u>> 3)) << 5
                ecx_33 = zx.w((eax_11 u>> 8).b u>> 3)
            label_4ddc5c:
                uint16_t eax_13 = zx.w((eax_11 u>> 0x10).b u>> 3)
                *arg3 = (edx_3 | ecx_33) << 5 | eax_13
                return eax_13
            case 8
                eax_11 = arg4
                edx_3 = zx.w((eax_11 u>> 8).b u>> 3)
                ecx_33 = zx.w(eax_11.b u>> 3) << 5
                goto label_4ddc5c
            case 9
                eax_11 = arg4
                edx_3 = zx.w((eax_11 u>> 8).b u>> 2)
                ecx_33 = zx.w(eax_11.b u>> 3) << 6
                goto label_4ddc5c
            case 0xa
                uint8_t eax_20 = (arg4 u>> 0x18).b
                *arg3 = eax_20
                return eax_20
            case 0xb
                uint8_t eax_18 = (arg4 u>> 8).b
                *arg3 = (arg4 u>> 0x10).b u/ 3 + eax_18 + arg4.b
                return eax_18
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
                char const* const var_c = "ImageRgbaToPixel"
                var_10 = 0x19f
            case 0x13
                *arg3 = (arg4 u>> 0x18).b
                arg3[1] = arg4.b
                uint8_t eax_9 = (arg4 u>> 0x10).b
                arg3[2] = (arg4 u>> 8).b
                arg3[3] = eax_9
                return eax_9
            case 0x14
                *arg3 = arg4.b
                uint8_t eax_7 = (arg4 u>> 0x10).b
                arg3[1] = (arg4 u>> 8).b
                arg3[2] = eax_7
                return eax_7
    sub_44e4d0(arg1, &data_5559b1, "Halt", "c:\ax2017\engine\imageutils.cpp", var_10, 
        "ImageRgbaToPixel")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
