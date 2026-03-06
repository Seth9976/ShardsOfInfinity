// 函数名称: sub_4dd8c0
// 虚拟地址: 0x4dd8c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4dd8c0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: char* result = arg1
    char* result = arg1
    int32_t var_18
    int32_t eax
    char eax_2
    char eax_9
    
    if (arg2 - 1 u> 0x14)
        char const* const var_14_1 = "ImagePixelToRgba"
        var_18 = 0x13d
    else
        switch (arg2)
            case 1
                result.b = arg1[2]
                eax_2 = *arg1
            label_4dd8e1:
                result:2.b = eax_2
                result:1.b = arg1[1]
                result:3.b = arg1[3]
                return result
            case 2
                result.b = *arg1
                eax_2 = arg1[2]
                goto label_4dd8e1
            case 3
                return *arg1
            case 4, 5
                result.b = arg1[2]
                eax_9 = *arg1
            label_4dd919:
                result:2.b = eax_9
                result:1.b = arg1[1]
                result:3.b = 0xff
                return result
            case 6
                uint32_t ebx = zx.d(arg1[1])
                uint32_t edx_1 = zx.d(*arg1)
                arg1.b = ebx.b
                arg1.b &= 0xf
                uint8_t ebx_1 = (ebx u>> 4).b
                eax.b = arg1.b
                eax.b <<= 4
                eax.b |= arg1.b
                arg1.b = edx_1.b
                result.b = eax.b
                arg1.b &= 0xf
                eax.b = arg1.b
                uint8_t edx_2 = (edx_1 u>> 4).b
                eax.b <<= 4
                eax.b |= arg1.b
                result:2.b = eax.b
                eax.b = edx_2
                eax.b <<= 4
                eax.b |= edx_2
                result:1.b = eax.b
                eax.b = ebx_1
                eax.b <<= 4
                eax.b |= ebx_1
                result:3.b = eax.b
                return result
            case 7
                uint32_t esi = zx.d(*arg1)
                int32_t ebx_3 = esi & 0x1f
                int32_t ecx_2 = esi u>> 0xa & 0x1f
                int32_t edx_5 = esi u>> 5 & 0x1f
                uint8_t eax_20 = (ecx_2 u>> 2).b
                ecx_2.b <<= 3
                result.b = eax_20 | ecx_2.b
                uint8_t eax_22 = (ebx_3 u>> 2).b
                ebx_3.b <<= 3
                result:2.b = eax_22 | ebx_3.b
                uint8_t eax_24 = (edx_5 u>> 2).b
                edx_5.b <<= 3
                result:1.b = eax_24 | edx_5.b
                result:3.b = (esi.w s>= 0) - 1
                return result
            case 8
                uint32_t ebx_4 = zx.d(*arg1)
                result:3.b = 0xff
                int32_t ecx_5 = ebx_4 u>> 0xa & 0x1f
                int32_t ebx_5 = ebx_4 & 0x1f
                uint8_t eax_27 = (ecx_5 u>> 2).b
                int32_t edx_8 = ebx_4 u>> 5 & 0x1f
                ecx_5.b <<= 3
                result.b = eax_27 | ecx_5.b
                uint8_t eax_29 = (ebx_5 u>> 2).b
                ebx_5.b <<= 3
                result:2.b = eax_29 | ebx_5.b
                uint8_t eax_31 = (edx_8 u>> 2).b
                edx_8.b <<= 3
                result:1.b = eax_31 | edx_8.b
                return result
            case 9
                uint32_t edx_9 = zx.d(*arg1)
                result:3.b = 0xff
                uint32_t ecx_7 = edx_9 u>> 0xb
                uint8_t eax_34 = (ecx_7 u>> 2).b
                int32_t edx_10 = edx_9 & 0x1f
                ecx_7.b <<= 3
                int32_t ebx_8 = edx_9 u>> 5 & 0x2f
                result.b = eax_34 | ecx_7.b
                uint8_t eax_36 = (edx_10 u>> 2).b
                edx_10.b <<= 3
                result:2.b = eax_36 | edx_10.b
                uint8_t eax_38 = (ebx_8 u>> 4).b
                ebx_8.b <<= 2
                result:1.b = eax_38 | ebx_8.b
                return result
            case 0xa
                return 0xffffff
            case 0xb, 0x14
                result.b = *arg1
                eax_9 = arg1[2]
                goto label_4dd919
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
                char const* const var_14 = "ImagePixelToRgba"
                var_18 = 0x13a
            case 0x13
                result.b = arg1[1]
                result:2.b = arg1[3]
                result:1.b = arg1[2]
                result:3.b = *arg1
                return result
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\imageutils.cpp", var_18, "ImagePixelToRgba")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
