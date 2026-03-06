// 函数名称: ??$copy_and_add_argument_to_buffer@D@@YAHQBD0IAAV?$argument_list@D@?A0x5f5c8891@@@Z
// 虚拟地址: 0x536a7b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$copy_and_add_argument_to_buffer@D@@YAHQBD0IAAV?$argument_list@D@?A0x5f5c8891@@@Z(char* arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* ecx_1 = arg1
    void* edx = &ecx_1[1]
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    int32_t edi
    int32_t var_c = edi
    
    if (ecx_1 - edx + 1 u> not.d(arg3))
        return 0xc
    
    void* ebx_2 = arg3 + 1 + ecx_1 - edx + 1
    void* eax_3 = __calloc_base(ebx_2, 1)
    
    if (arg3 == 0)
    label_536ace:
        void* var_18_2 = ecx_1 - edx + 1
        char* var_1c_3 = arg1
        int32_t var_20_2 = ebx_2 - arg3
        void* var_24_2 = eax_3 + arg3
        
        if (sub_5344b7() == 0)
            int32_t result_1 =
                xfd16de3c::expand_if_necessary::operator[]::argument_list<char>::expand_if_necessary(
                arg4)
            int32_t result
            
            if (result_1 == 0)
                *arg4[1] = eax_3
                result = 0
                arg4[1] += 4
            else
                __free_base(eax_3)
                result = result_1
            
            __free_base(0)
            return result
    else
        void* var_18_1 = arg3
        int32_t var_1c_2 = arg2
        void* var_20_1 = ebx_2
        void* var_24_1 = eax_3
        
        if (sub_5344b7() == 0)
            goto label_536ace
    
    int32_t var_28
    __builtin_memset(&var_28, 0, 0x14)
    sub_52d729()
    noreturn
}
