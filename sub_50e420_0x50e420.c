// 函数名称: sub_50e420
// 虚拟地址: 0x50e420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_50e420(int32_t arg1, int32_t arg2, void* arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx = arg2 * arg5
    char* result = arg4
    void* var_810 = arg3
    int32_t i_1 = result s>> 1
    void* var_81c = edx
    int32_t i_2 = i_1
    
    if (i_1 s> 0)
        result = (result - 1) * edx + arg3
        char* result_1 = result
        int32_t i
        
        do
            char* result_2 = result
            void* ebx_1 = arg3
            void* esi_1 = edx
            
            if (edx != 0)
                void* edi_1
                void* temp1_1
                
                do
                    edi_1 = 0x800
                    
                    if (esi_1 u< 0x800)
                        edi_1 = esi_1
                    
                    char var_808[0x800]
                    sub_51d5b0(&var_808, ebx_1, edi_1)
                    sub_51d5b0(ebx_1, result_2, edi_1)
                    sub_51d5b0(result_2, &var_808, edi_1)
                    result_2 += edi_1
                    ebx_1 += edi_1
                    temp1_1 = esi_1
                    esi_1 -= edi_1
                while (temp1_1 != edi_1)
                result = result_1
                edx = var_81c
                arg3 = var_810
                i_1 = i_2
            
            arg3 += edx
            result -= edx
            i = i_1
            i_1 -= 1
            var_810 = arg3
            result_1 = result
            i_2 = i_1
        while (i != 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
