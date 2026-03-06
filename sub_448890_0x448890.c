// 函数名称: sub_448890
// 虚拟地址: 0x448890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_448890(int32_t arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg4
    int32_t* ebx = arg4
    *ebx = 1
    ebx[1] = 0
    void* eax = sub_445af0(arg3, arg2)
    int32_t eax_1 = sub_446540(eax, 3, arg3, 7, arg2)
    int32_t eax_2 = sub_446540(eax_1, 1, arg3, 7, arg2)
    int32_t result
    int16_t edx
    result, edx = sub_446540(eax_2, 4, arg3, 7, arg2)
    edx:1.b = *(eax + 0x21)
    
    if (edx:1.b != 0 || eax_1 s> 0)
        edx.b = *(eax + 0x1f)
        
        if ((edx.b != 0 || eax_2 s> 0) && (*(eax + 0x22) != 0 || result s> 0))
            if (edx:1.b == 0)
                ebx[ebx[1] + 2] = 3
                ebx[1] += 1
                edx.b = *(eax + 0x1f)
            
            if (edx.b == 0)
                ebx[ebx[1] + 2] = 1
                ebx[1] += 1
            
            if (*(eax + 0x22) == 0)
                ebx[ebx[1] + 2] = 4
                ebx[1] += 1
            
            result.b = 1
            return result
    
    result.b = 0
    return result
}
