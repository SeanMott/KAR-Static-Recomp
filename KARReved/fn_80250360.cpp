//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"



void fn_80250360(PPC::Runtime::GCContext* context)
{
/*80250360 0024D160*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80250364 0024D164*/ PPC::Runtime::ASM::mflr(context->r0);
/*80250368 0024D168*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8025036C 0024D16C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80250370 0024D170*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80250374 0024D174*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80250378 0024D178*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025037C 0024D17C*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80250380 0024D180*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x10c);
/*80250384 0024D184*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*80250388 0024D188*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8025038C 0024D18C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10c);
/*80250390 0024D190*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80250394 0024D194*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80250398 0024D198*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8025039C 0024D19C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x10c);
/*802503A0 0024D1A0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x100);
/*802503A4 0024D1A4*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*802503A8 0024D1A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802503AC 0024D1AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802503B0 0024D1B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802503B4 0024D1B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802503B8 0024D1B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802503BC 0024D1BC*/ PPC::Runtime::ASM::blr();
}