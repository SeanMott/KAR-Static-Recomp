//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029C294(PPC::Runtime::GCContext* context)
{
/*8029C294 00299094*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029C298 00299098*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029C29C 0029909C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029C2A0 002990A0*/ PPC::Runtime::ASM::bne(.L_8029C2BC);
/*8029C2A4 002990A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029C2A8 002990A8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029C2AC 002990AC*/ PPC::Runtime::ASM::bne(.L_8029C2BC);
/*8029C2B0 002990B0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C2B4 002990B4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8029C2B8 002990B8*/ PPC::Runtime::ASM::bne(.L_8029C2C0);
RUNTIME_PPC_JUMP_LABEL(.L_8029C2BC, 0x8029C2BC) //this is a jump label
/*8029C2BC 002990BC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8029C2C0, 0x8029C2C0) //this is a jump label
/*8029C2C0 002990C0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8029C2C4 002990C4*/ PPC::Runtime::ASM::blr();
}