//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B8E0(PPC::Runtime::GCContext* context)
{
/*8029B8E0 002986E0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B8E4 002986E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029B8E8 002986E8*/ PPC::Runtime::ASM::beq(.L_8029B904);
/*8029B8EC 002986EC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B8F0 002986F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029B8F4 002986F4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD9D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B8F8 002986F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8029B8FC 002986FC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B900 00298700*/ PPC::Runtime::ASM::b(.L_8029B90C);
RUNTIME_PPC_JUMP_LABEL(.L_8029B904, 0x8029B904) //this is a jump label
/*8029B904 00298704*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B908 00298708*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029B90C, 0x8029B90C) //this is a jump label
/*8029B90C 0029870C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B910 00298710*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029B914 00298714*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029B918 00298718*/ PPC::Runtime::ASM::blr();
}