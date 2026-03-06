// 函数名称: sub_46fc70
// 虚拟地址: 0x46fc70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_46fc70(int32_t arg1, uint32_t* arg2, char* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: char* var_c = arg3
    char* var_c = arg3
    uint32_t result = sub_46ae50(arg3, &var_c)
    
    if (result != 0)
        result = __stricmp(var_c, arg5)
        
        if (result == 0)
            uint32_t eax = *arg2
            int32_t i = 0
            *(arg4 + (eax << 2)) = arg3
            result = eax + 1
            *arg2 = result
            
            if (*(arg3 + 0x7f4) s> 0)
                do
                    sub_462970(arg3, i)
                    result = sub_46fc70(arg4, 0x400, arg5)
                    i += 1
                while (i s< *(arg3 + 0x7f4))
    
    return result
}
