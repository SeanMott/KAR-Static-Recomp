//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BF84(PPC::Runtime::GCContext* context)
{
/*8029BF84 00298D84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BF88 00298D88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029BF8C 00298D8C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BF90 00298D90*/ PPC::Runtime::ASM::bne(.L_8029BFAC);
/*8029BF94 00298D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BF98 00298D98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BF9C 00298D9C*/ PPC::Runtime::ASM::bne(.L_8029BFAC);
/*8029BFA0 00298DA0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BFA4 00298DA4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8029BFA8 00298DA8*/ PPC::Runtime::ASM::bne(.L_8029BFB0);
RUNTIME_PPC_JUMP_LABEL(.L_8029BFAC, 0x8029BFAC) //this is a jump label
/*8029BFAC 00298DAC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8029BFB0, 0x8029BFB0) //this is a jump label
/*8029BFB0 00298DB0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8029BFB4 00298DB4*/ PPC::Runtime::ASM::blr();
}