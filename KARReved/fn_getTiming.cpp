//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_getTiming(PPC::Runtime::GCContext* context)
{
/*803DDA14 003DA814*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1a);
/*803DDA18 003DA818*/ PPC::Runtime::ASM::lis(context->r4, lbl_804FC540 @ Get_MemoryOffset_HighBit);
/*803DDA1C 003DA81C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804FC540 @ Get_MemoryOffset_LowBit);
/*803DDA20 003DA820*/ PPC::Runtime::ASM::bgt(.L_803DDAAC);
/*803DDA24 003DA824*/ PPC::Runtime::ASM::lis(context->r4, jumptable_804FC734 @ Get_MemoryOffset_HighBit);
/*803DDA28 003DA828*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_804FC734 @ Get_MemoryOffset_LowBit);
/*803DDA2C 003DA82C*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*803DDA30 003DA830*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803DDA34 003DA834*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803DDA38 003DA838*/ PPC::Runtime::ASM::bctr();
/*803DDA3C 003DA83C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x44);
/*803DDA40 003DA840*/ PPC::Runtime::ASM::blr();
/*803DDA44 003DA844*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x6a);
/*803DDA48 003DA848*/ PPC::Runtime::ASM::blr();
/*803DDA4C 003DA84C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x90);
/*803DDA50 003DA850*/ PPC::Runtime::ASM::blr();
/*803DDA54 003DA854*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xb6);
/*803DDA58 003DA858*/ PPC::Runtime::ASM::blr();
/*803DDA5C 003DA85C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x44);
/*803DDA60 003DA860*/ PPC::Runtime::ASM::blr();
/*803DDA64 003DA864*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x6a);
/*803DDA68 003DA868*/ PPC::Runtime::ASM::blr();
/*803DDA6C 003DA86C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xdc);
/*803DDA70 003DA870*/ PPC::Runtime::ASM::blr();
/*803DDA74 003DA874*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x102);
/*803DDA78 003DA878*/ PPC::Runtime::ASM::blr();
/*803DDA7C 003DA87C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x128);
/*803DDA80 003DA880*/ PPC::Runtime::ASM::blr();
/*803DDA84 003DA884*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x14e);
/*803DDA88 003DA888*/ PPC::Runtime::ASM::blr();
/*803DDA8C 003DA88C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x90);
/*803DDA90 003DA890*/ PPC::Runtime::ASM::blr();
/*803DDA94 003DA894*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xb6);
/*803DDA98 003DA898*/ PPC::Runtime::ASM::blr();
/*803DDA9C 003DA89C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x174);
/*803DDAA0 003DA8A0*/ PPC::Runtime::ASM::blr();
/*803DDAA4 003DA8A4*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x19a);
/*803DDAA8 003DA8A8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803DDAAC, 0x803DDAAC) //this is a jump label
/*803DDAAC 003DA8AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DDAB0 003DA8B0*/ PPC::Runtime::ASM::blr();
}