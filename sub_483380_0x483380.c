// 函数名称: sub_483380
// 虚拟地址: 0x483380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_483380(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = *arg2
    int32_t* eax = *arg2
    int32_t* var_8 = eax
    
    if (eax != 0)
        void* ecx
        char eax_1 = sub_483320(eax, &var_8, ecx, arg3)
        
        if (eax_1 == 0)
            return eax_1
        
        int32_t eax_2 = arg4
        char* esi_1 = var_8
        
        if (eax_2 == 0)
            if (*esi_1 == 0)
                *arg2 = 0
                int32_t eax_3
                eax_3.b = 1
                return 1
            
            if (eax_2 == 0)
                eax_2 = sub_495050(esi_1)
        
        *arg2 = sub_48d5b0(esi_1, eax_2)
    
    eax.b = 1
    return eax
}
