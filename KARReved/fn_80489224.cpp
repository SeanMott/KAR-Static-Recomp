//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "memset.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80489224(PPC::Runtime::GCContext* context)
{
/*80489224 00486024*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80489228 00486028*/ PPC::Runtime::ASM::mflr(context->r0);
/*8048922C 0048602C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80489230 00486030*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80489234 00486034*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80489238 00486038*/ PPC::Runtime::ASM::lis(context->r4, lbl_805CCA40 @ Get_MemoryOffset_HighBit);
/*8048923C 0048603C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80489240 00486040*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_805CCA40 @ Get_MemoryOffset_LowBit);
/*80489244 00486044*/ PPC::Runtime::ASM::li(context->r5, 0x60);
/*80489248 00486048*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8048924C 0048604C*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*80489250 00486050*/ PPC::Runtime::ASM::bl(memset);
/*80489254 00486054*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80489258 00486058*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8048925C 0048605C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80489260 00486060*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80489264 00486064*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80489268 00486068*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8048926C 0048606C*/ PPC::Runtime::ASM::blr();
}