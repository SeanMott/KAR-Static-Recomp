//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80144068.hpp"



void fn_80144538(PPC::Runtime::GCContext* context)
{
/*80144538 00141338*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014453C 0014133C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80144540 00141340*/ PPC::Runtime::ASM::mr(context->r8, context->r4);
/*80144544 00141344*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80144548 00141348*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014454C 0014134C*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*80144550 00141350*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*80144554 00141354*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*80144558 00141358*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*8014455C 0014135C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80144560 00141360*/ PPC::Runtime::ASM::bl(fn_80144068);
/*80144564 00141364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80144568 00141368*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014456C 0014136C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80144570 00141370*/ PPC::Runtime::ASM::blr();
}