//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED40.hpp"
#include "fn_801FC398.hpp"



void fn_802137F4(PPC::Runtime::GCContext* context)
{
/*802137F4 002105F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802137F8 002105F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802137FC 002105FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213800 00210600*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80213804 00210604*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80213808 00210608*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021380C 0021060C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*80213810 00210610*/ PPC::Runtime::ASM::bl(fn_801FED40);
/*80213814 00210614*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80213818 00210618*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021381C 0021061C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E259C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80213820 00210620*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*80213824 00210624*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80213828 00210628*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021382C 0021062C*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80213830 00210630*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213834 00210634*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80213838 00210638*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021383C 0021063C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80213840 00210640*/ PPC::Runtime::ASM::blr();
}