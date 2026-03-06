// 函数名称: sub_4611a0
// 虚拟地址: 0x4611a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4611a0(uint32_t* arg1, char* arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* __return_addr_1
    uint32_t* edx
    __return_addr_1, edx = __alloca_probe(0x101c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    char* result = arg2
    int32_t* ebx = arg1
    arg1 = edx
    int32_t edi = *ebx
    __return_addr = __return_addr_1
    arg2 = result
    var_4 = 0
    
    if (edi s>= 0x3e8)
        sub_44e4d0(result, &data_5559b1, "attribMap.attributeCount < 1000", "c:\ax2017\engine\ui2.cpp", 
            0xba3, "UI2MergeAttribMap")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t i = 0
    int32_t arg_c
    int32_t edi_1 = arg_c
    int32_t arg_80c[0x201]
    
    if (edi s> 0)
        do
            sub_45f550(result, i, ebx, edi_1, __return_addr_1, result, &var_4, &arg_c, &arg_80c, edx, 
                arg3)
            __return_addr_1 = __return_addr
            i += 1
            edx = arg1
            result = arg2
        while (i s< *ebx)
    
    int32_t esi = 0
    
    if (var_4 s> 0)
        do
            float xmm0_1 = arg_80c[esi]
            xmm0_1 - 1f
            bool p_1 = unimplemented  {test ah, 0x44}
            int32_t* eax_2 = (&arg_c)[esi]
            
            if (p_1)
                void* __return_addr_2 = __return_addr_1
                result = sub_460f30(esi, eax_2, arg2, edi_1, arg3, xmm0_1)
            else
                result = sub_4611a0(eax_2, arg2, edi_1, 0)
            
            __return_addr_1 = __return_addr
            esi += 1
        while (esi s< var_4)
    
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return result
}
