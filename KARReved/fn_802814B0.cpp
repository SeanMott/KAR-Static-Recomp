//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802814B0(PPC::Runtime::GCContext* context)
{
/*802814B0 0027E2B0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*802814B4 0027E2B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802814B8 0027E2B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x10);
/* 802814BC 0027E2BC  4D 81 00 20 */ bgtlr
/*802814C0 0027E2C0*/ PPC::Runtime::ASM::lis(context->r4, jumptable_804BB168 @ Get_MemoryOffset_HighBit);
/*802814C4 0027E2C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802814C8 0027E2C8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_804BB168 @ Get_MemoryOffset_LowBit);
/*802814CC 0027E2CC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*802814D0 0027E2D0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802814D4 0027E2D4*/ PPC::Runtime::ASM::bctr();
/*802814D8 0027E2D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802814DC 0027E2DC*/ PPC::Runtime::ASM::blr();
/*802814E0 0027E2E0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802814E4 0027E2E4*/ PPC::Runtime::ASM::blr();
/*802814E8 0027E2E8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*802814EC 0027E2EC*/ PPC::Runtime::ASM::blr();
/*802814F0 0027E2F0*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*802814F4 0027E2F4*/ PPC::Runtime::ASM::blr();
/*802814F8 0027E2F8*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*802814FC 0027E2FC*/ PPC::Runtime::ASM::blr();
/*80281500 0027E300*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80281504 0027E304*/ PPC::Runtime::ASM::blr();
/*80281508 0027E308*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8028150C 0027E30C*/ PPC::Runtime::ASM::blr();
/*80281510 0027E310*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*80281514 0027E314*/ PPC::Runtime::ASM::blr();
/*80281518 0027E318*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*8028151C 0027E31C*/ PPC::Runtime::ASM::blr();
/*80281520 0027E320*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*80281524 0027E324*/ PPC::Runtime::ASM::blr();
/*80281528 0027E328*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*8028152C 0027E32C*/ PPC::Runtime::ASM::blr();
/*80281530 0027E330*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*80281534 0027E334*/ PPC::Runtime::ASM::blr();
/*80281538 0027E338*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8028153C 0027E33C*/ PPC::Runtime::ASM::blr();
/*80281540 0027E340*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*80281544 0027E344*/ PPC::Runtime::ASM::blr();
/*80281548 0027E348*/ PPC::Runtime::ASM::li(context->r3, 0xe);
/*8028154C 0027E34C*/ PPC::Runtime::ASM::blr();
/*80281550 0027E350*/ PPC::Runtime::ASM::li(context->r3, 0xf);
/*80281554 0027E354*/ PPC::Runtime::ASM::blr();
/*80281558 0027E358*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*8028155C 0027E35C*/ PPC::Runtime::ASM::blr();
}