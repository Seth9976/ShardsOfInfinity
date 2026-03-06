// 函数名称: sub_4e3a40
// 虚拟地址: 0x4e3a40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4e3a40(int32_t arg1, int64_t* arg2, int32_t arg3, int64_t* arg4)
{
    // 第一条实际指令: if (arg3 u> 5)
    if (arg3 u> 5)
        sub_44e4d0(arg1, &data_5559b1, "Halt", "c:\ax2017\engine\iblimport.cpp", 0xf0, "FaceToDirs")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_c_1
    int32_t eax
    
    switch (arg3)
        case 0
            var_c_1 = 0x80000000
            *arg2 = _mm_unpacklo_ps(0xbf800000, 0x80000000)
        label_4e3a72:
            eax = var_c_1
            goto label_4e3a78
        case 1
            *arg2 = 0x3f800000
            eax = 0
        label_4e3a78:
            arg2[1].d = eax
            *arg4 = 0x3f80000000000000
            arg4[1].d = 0
            return 0
        case 2
            *arg2 = 0x3f80000000000000
            arg2[1].d = 0
            *arg4 = _mm_unpacklo_ps(0x80000000, 0x80000000)
            arg4[1].d = 0xbf800000
            return 0xbf800000
        case 3
            *arg2 = _mm_unpacklo_ps(0x80000000, 0xbf800000)
            arg2[1].d = 0x80000000
            *arg4 = 0
            arg4[1].d = 0x3f800000
            return 0x3f800000
        case 4
            *arg2 = 0
            eax = 0x3f800000
            goto label_4e3a78
        case 5
            var_c_1 = 0xbf800000
            *arg2 = _mm_unpacklo_ps(0x80000000, 0x80000000)
            goto label_4e3a72
}
