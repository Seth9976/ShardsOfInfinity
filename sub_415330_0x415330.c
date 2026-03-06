// 函数名称: sub_415330
// 虚拟地址: 0x415330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_415330(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* esi = data_65aabc
    int32_t ebx
    ebx.b = arg2
    ebx:1.b = arg1.b
    
    if (esi == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_1 = *(esi + 0x14)
    void* edx = data_65acf4
    
    if (eax_1 != 0)
        uint32_t ecx = zx.d(eax_1.w)
        
        if (ecx u< *(edx + 4))
            int128_t* ecx_2 = ecx * 0x4c + *edx
            
            if (*(ecx_2 + 0x48) == eax_1)
                sub_450480(ecx_2)
    
    *(esi + 0x18) = 0
    void* result = sub_412ab0(esi + 0x444)
    
    if (ebx:1.b == 0)
        return result
    
    return ___std_atomic_wait_indirect@24(ebx.b)
}
