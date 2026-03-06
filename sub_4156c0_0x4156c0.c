// 函数名称: sub_4156c0
// 虚拟地址: 0x4156c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4156c0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    int32_t* ecx = data_65aabc
    void* eax
    
    if (ecx != 0)
        if (ecx[6] == 3)
            eax = ecx[5]
            void* edx_1 = data_65acf4
            
            if (eax != 0)
                uint32_t esi_1 = zx.d(eax.w)
                
                if (esi_1 u< *(edx_1 + 4))
                    void* esi_3 = esi_1 * 0x4c + *edx_1
                    
                    if (*(esi_3 + 0x48) == eax)
                        int32_t var_10_1 = 0xf42b4
                        sub_450c90(eax, 1, esi_3 + 0x3c)
                        eax = sub_450a70(&var_8:3, 1, esi_3 + 0x3c, &var_8:3)
                        ecx = data_65aabc
        
        if (ecx != 0)
            int32_t result = ecx[5]
            
            if (result != ecx[0x193])
                ecx[0x193] = result
                ecx[0x194] = *ecx
                result = ecx[1]
                ecx[0x195] = result
            
            ecx[0x196] = 0x40a00000
            return result
    
    sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
