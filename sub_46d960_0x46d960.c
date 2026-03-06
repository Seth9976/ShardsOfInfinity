// 函数名称: sub_46d960
// 虚拟地址: 0x46d960
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_46d960(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t eax_2 = *(arg3 + 0x69c) - 1
    int32_t ecx
    int32_t edx
    char const (** esi)[0x8]
    
    switch (eax_2)
        case 0
            ecx = 0x38
            esi = &data_5b2260
            edx = 0xe
            goto label_46da00
        case 1
            ecx = 0x3c
            esi = &data_5b1ff0
            edx = 0xf
            goto label_46da00
        case 2
            ecx = 0x3c
            esi = &data_5b2430
            edx = 0xf
            goto label_46da00
        case 4
            ecx = 0x60
            esi = &data_5b20e0
            edx = 0x18
            goto label_46da00
        case 5
            ecx = 0x1c
            esi = &data_5b1f80
            edx = 7
            goto label_46da00
        case 6
            ecx = 0x28
            esi = &data_5b1e90
            edx = 0xa
        label_46da00:
            __builtin_memcpy(arg2, esi, ecx << 2)
            
            if (arg4 != 0)
                *arg4 = edx
            
            void* esi_2 = *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x20c)
            
            if (esi_2 == 0)
            label_46da93:
                *(arg2 + edx * 0x10) = data_5b1f30.o
                return edx + 1
            
            int32_t i_1 = *(esi_2 + 8)
            
            if (i_1 s>= 3)
                i_1 = 3
            else
                if (i_1 == 0)
                    goto label_46da93
                
                if (i_1 s<= 0)
                    return edx
            
            int32_t edx_1 = i_1 * 5 + edx
            void* ecx_3 = (edx << 4) + arg2
            int32_t i
            
            do
                ecx_3 += 0x50
                *(ecx_3 - 0x50) = data_5b1f30.o
                *(ecx_3 - 0x40) = data_5b1f40.o
                *(ecx_3 - 0x30) = data_5b1f50.o
                *(ecx_3 - 0x20) = data_5b1f60.o
                *(ecx_3 - 0x10) = data_5b1f70.o
                i = i_1
                i_1 -= 1
            while (i != 1)
            return edx_1
        case 7
            ecx = 0x1c
            esi = &data_5b2340
            edx = 7
            goto label_46da00
        case 8
            ecx = 0x20
            esi = &data_5b23b0
            edx = 8
            goto label_46da00
    
    sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x201d, "GetPropDefs")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
