//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8041B4E4(PPC::Runtime::GCContext* context)
{
/*8041B4E4 004182E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041B4E8 004182E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041B4EC 004182EC*/ PPC::Runtime::ASM::beq(.L_8041B4FC);
/*8041B4F0 004182F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8041B4F4 004182F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041B4F8 004182F8*/ PPC::Runtime::ASM::b(.L_8041B504);
RUNTIME_PPC_JUMP_LABEL(.L_8041B4FC, 0x8041B4FC) //this is a jump label
/*8041B4FC 004182FC*/ PPC::Runtime::ASM::lwz(context->r0, AllZeros_31 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B500 00418300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8041B504, 0x8041B504) //this is a jump label
/*8041B504 00418304*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041B508 00418308*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041B50C 0041830C*/ PPC::Runtime::ASM::blr();
}