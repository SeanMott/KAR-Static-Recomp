//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80162278(PPC::Runtime::GCContext* context)
{
/*80162278 0015F078*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8016227C 0015F07C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80162280 0015F080*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x18);
/*80162284 0015F084*/ PPC::Runtime::ASM::bgt(.L_801622E0);
/*80162288 0015F088*/ PPC::Runtime::ASM::lis(context->r3, jumptable_804AC3C4 @ Get_MemoryOffset_HighBit);
/*8016228C 0015F08C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80162290 0015F090*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_804AC3C4 @ Get_MemoryOffset_LowBit);
/*80162294 0015F094*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80162298 0015F098*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8016229C 0015F09C*/ PPC::Runtime::ASM::bctr();
/*801622A0 0015F0A0*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*801622A4 0015F0A4*/ PPC::Runtime::ASM::blr();
/*801622A8 0015F0A8*/ PPC::Runtime::ASM::li(context->r3, 0x12);
/*801622AC 0015F0AC*/ PPC::Runtime::ASM::blr();
/*801622B0 0015F0B0*/ PPC::Runtime::ASM::li(context->r3, 0x11);
/*801622B4 0015F0B4*/ PPC::Runtime::ASM::blr();
/*801622B8 0015F0B8*/ PPC::Runtime::ASM::li(context->r3, 0x15);
/*801622BC 0015F0BC*/ PPC::Runtime::ASM::blr();
/*801622C0 0015F0C0*/ PPC::Runtime::ASM::li(context->r3, 0x17);
/*801622C4 0015F0C4*/ PPC::Runtime::ASM::blr();
/*801622C8 0015F0C8*/ PPC::Runtime::ASM::li(context->r3, 0x13);
/*801622CC 0015F0CC*/ PPC::Runtime::ASM::blr();
/*801622D0 0015F0D0*/ PPC::Runtime::ASM::li(context->r3, 0x19);
/*801622D4 0015F0D4*/ PPC::Runtime::ASM::blr();
/*801622D8 0015F0D8*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*801622DC 0015F0DC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801622E0, 0x801622E0) //this is a jump label
/*801622E0 0015F0E0*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*801622E4 0015F0E4*/ PPC::Runtime::ASM::blr();
}