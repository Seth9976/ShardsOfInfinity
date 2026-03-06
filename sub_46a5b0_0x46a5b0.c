// 函数名称: sub_46a5b0
// 虚拟地址: 0x46a5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46a5b0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t var_80c[0x40][0x4]
    _memset(&var_80c, 0, 0x400)
    uint32_t var_40c[0x40][0x4]
    _memset(&var_40c, 0, 0x400)
    int32_t ebx = arg1[1]
    int32_t i = 0
    int32_t esi = 0
    
    if (ebx != 0)
        void* edi_1 = *arg1
        uint32_t (* edx)[0x40][0x4] = &var_40c
        
        do
            *edx -= 1
            
            if (esi == arg2)
                int32_t result = var_80c[0][i]
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            int32_t ecx = *(edi_1 + 8)
            i += 1
            var_40c[0][i] = ecx
            edx = &var_40c[0][i]
            var_80c[0][i] = edi_1
            
            if (ecx == 0)
                while (i != 0)
                    i -= 1
                    edx = &var_40c[0][i]
                    
                    if (var_40c[0][i] != 0)
                        break
            
            esi += 1
            edi_1 += 0xc
        while (esi u< ebx)
        
        if (i != 0)
            sub_44e4d0(i, &data_5559b1, "indent == 0", "c:\ax2017\engine\ui2.cpp", 0x1b29, 
                "AttribTreeFindParent")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
