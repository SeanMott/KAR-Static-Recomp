//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80007E34(PPC::Runtime::GCContext* context)
{
/*80007E34 00004C34*/ PPC::Runtime::ASM::extsb(context->r5, context->r3);
/*80007E38 00004C38*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80007E3C 00004C3C*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 5);
/*80007E40 00004C40*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80007E44 00004C44*/ PPC::Runtime::ASM::addze(context->r0, context->r0);
/*80007E48 00004C48*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 27);
/*80007E4C 00004C4C*/ PPC::Runtime::ASM::srwi(context->r5, context->r5, 31);
/*80007E50 00004C50*/ PPC::Runtime::ASM::addi(context->r3, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80007E54 00004C54*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*80007E58 00004C58*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80007E5C 00004C5C*/ PPC::Runtime::ASM::rotlwi(context->r4, context->r4, 5);
/*80007E60 00004C60*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80007E64 00004C64*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r5);
/*80007E68 00004C68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd50, context->r3));
/*80007E6C 00004C6C*/ PPC::Runtime::ASM::slw(context->r3, context->r6, context->r4);
/*80007E70 00004C70*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r0);
/*80007E74 00004C74*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*80007E78 00004C78*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*80007E7C 00004C7C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80007E80 00004C80*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*80007E84 00004C84*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80007E88 00004C88*/ PPC::Runtime::ASM::blr();
}