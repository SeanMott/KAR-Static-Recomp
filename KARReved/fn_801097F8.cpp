//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F466C.hpp"
#include "fn_80109858.hpp"



void fn_801097F8(PPC::Runtime::GCContext* context)
{
/*801097F8 001065F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801097FC 001065FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80109800 00106600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80109804 00106604*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80109808 00106608*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010980C 0010660C*/ PPC::Runtime::ASM::li(context->r3, 0x3f);
/*80109810 00106610*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80109814 00106614*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80109818 00106618*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010981C 0010661C*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80109820 00106620*/ PPC::Runtime::ASM::bl(fn_800F466C);
/*80109824 00106624*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80109828 00106628*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010982C 0010662C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80109830 00106630*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*80109834 00106634*/ PPC::Runtime::ASM::bl(fn_80109858);
/*80109838 00106638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010983C 0010663C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80109840 00106640*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80109844 00106644*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80109848 00106648*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010984C 0010664C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80109850 00106650*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80109854 00106654*/ PPC::Runtime::ASM::blr();
}