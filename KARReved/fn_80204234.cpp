//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80202634.hpp"
#include "fn_802025DC.hpp"
#include "fn_801FBF2C.hpp"



void fn_80204234(PPC::Runtime::GCContext* context)
{
/*80204234 00201034*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80204238 00201038*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020423C 0020103C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80204240 00201040*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80204244 00201044*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80204248 00201048*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8020424C 0020104C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80204250 00201050*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80204254 00201054*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80204258 00201058*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020425C 0020105C*/ PPC::Runtime::ASM::bl(fn_80202634);
/*80204260 00201060*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80204264 00201064*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80204268 00201068*/ PPC::Runtime::ASM::bl(fn_802025DC);
/*8020426C 0020106C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80204270 00201070*/ PPC::Runtime::ASM::bl(fn_801FBF2C);
/*80204274 00201074*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80204278 00201078*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020427C 0020107C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80204280 00201080*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80204284 00201084*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80204288 00201088*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8020428C 0020108C*/ PPC::Runtime::ASM::blr();
}