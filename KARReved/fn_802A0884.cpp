//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802A0884(PPC::Runtime::GCContext* context)
{
/*802A0884 0029D684*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802A0888 0029D688*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*802A088C 0029D68C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A0890 0029D690*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*802A0894 0029D694*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*802A0898 0029D698*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802A089C 0029D69C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*802A08A0 0029D6A0*/ PPC::Runtime::ASM::ble(.L_802A08C4);
RUNTIME_PPC_JUMP_LABEL(.L_802A08A4, 0x802A08A4) //this is a jump label
/*802A08A4 0029D6A4*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r4);
/*802A08A8 0029D6A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802A08AC 0029D6AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802A08B0 0029D6B0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802A08B4 0029D6B4*/ PPC::Runtime::ASM::blt(.L_802A08C4);
/*802A08B8 0029D6B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*802A08BC 0029D6BC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*802A08C0 0029D6C0*/ PPC::Runtime::ASM::bdnz(.L_802A08A4);
RUNTIME_PPC_JUMP_LABEL(.L_802A08C4, 0x802A08C4) //this is a jump label
/*802A08C4 0029D6C4*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
/*802A08C8 0029D6C8*/ PPC::Runtime::ASM::blr();
}