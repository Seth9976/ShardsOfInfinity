// 函数名称: sub_45d510
// 虚拟地址: 0x45d510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_45d510(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t var_c = arg2
    
    if (arg5 s> 0)
        void* result = arg4
        
        do
            int32_t eax = *(result + 4)
            
            if (eax == arg2 || eax == 0xffffffff)
                if (__stricmp((***result)(arg3)) == 0)
                    return result
                
                arg2 = var_c
            
            edi += 1
            result += 0x18
        while (edi s< arg5)
    
    return 0
}
