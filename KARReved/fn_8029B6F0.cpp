//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B6F0(PPC::Runtime::GCContext* context)
{
/*8029B6F0 002984F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B6F4 002984F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029B6F8 002984F8*/ PPC::Runtime::ASM::beq(.L_8029B710);
/*8029B6FC 002984FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029B700 00298500*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD9C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B704 00298504*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8029B708 00298508*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B70C 0029850C*/ PPC::Runtime::ASM::b(.L_8029B718);
RUNTIME_PPC_JUMP_LABEL(.L_8029B710, 0x8029B710) //this is a jump label
/*8029B710 00298510*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B714 00298514*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029B718, 0x8029B718) //this is a jump label
/*8029B718 00298518*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B71C 0029851C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029B720 00298520*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B724 00298524*/ PPC::Runtime::ASM::blr();
}