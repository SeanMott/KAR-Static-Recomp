//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B728(PPC::Runtime::GCContext* context)
{
/*8029B728 00298528*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B72C 0029852C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029B730 00298530*/ PPC::Runtime::ASM::beq(.L_8029B74C);
/*8029B734 00298534*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B738 00298538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029B73C 0029853C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD9CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B740 00298540*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8029B744 00298544*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B748 00298548*/ PPC::Runtime::ASM::b(.L_8029B754);
RUNTIME_PPC_JUMP_LABEL(.L_8029B74C, 0x8029B74C) //this is a jump label
/*8029B74C 0029854C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B750 00298550*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029B754, 0x8029B754) //this is a jump label
/*8029B754 00298554*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B758 00298558*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029B75C 0029855C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B760 00298560*/ PPC::Runtime::ASM::blr();
}