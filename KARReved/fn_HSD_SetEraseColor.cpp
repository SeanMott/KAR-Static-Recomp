//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_SetEraseColor(PPC::Runtime::GCContext* context)
{
/*8040F884 0040C684*/ PPC::Runtime::ASM::li(context->r7, AllZeros_29 @ Get_MemoryOffset_SDA21);
/*8040F888 0040C688*/ PPC::Runtime::ASM::stb(context->r3, AllZeros_29 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8040F88C 0040C68C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*8040F890 0040C690*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*8040F894 0040C694*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r7));
/*8040F898 0040C698*/ PPC::Runtime::ASM::blr();
}