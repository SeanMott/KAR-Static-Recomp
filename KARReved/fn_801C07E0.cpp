//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_80195F28.hpp"
#include "fn_801C07BC.hpp"
#include "fn_801C07BC.hpp"



void fn_801C07E0(PPC::Runtime::GCContext* context)
{
/*801C07E0 001BD5E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C07E4 001BD5E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C07E8 001BD5E8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801C07EC 001BD5EC*/ PPC::Runtime::ASM::li(context->r4, 0x2d);
/*801C07F0 001BD5F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C07F4 001BD5F4*/ PPC::Runtime::ASM::li(context->r5, 0x6c);
/*801C07F8 001BD5F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C07FC 001BD5FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C0800 001BD600*/ PPC::Runtime::ASM::ble(.L_801C0808);
/*801C0804 001BD604*/ PPC::Runtime::ASM::li(context->r5, 0x6e);
RUNTIME_PPC_JUMP_LABEL(.L_801C0808, 0x801C0808) //this is a jump label
/*801C0808 001BD608*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E18D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C080C 001BD60C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C0810 001BD610*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E18DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C0814 001BD614*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C0818 001BD618*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C081C 001BD61C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801C0820 001BD620*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0824 001BD624*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801C0828 001BD628*/ PPC::Runtime::ASM::bl(fn_80195F28);
/*801C082C 001BD62C*/ PPC::Runtime::ASM::lis(context->r3, fn_801C07BC @ Get_MemoryOffset_HighBit);
/*801C0830 001BD630*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801C07BC @ Get_MemoryOffset_LowBit);
/*801C0834 001BD634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r31));
/*801C0838 001BD638*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C083C 001BD63C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0840 001BD640*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0844 001BD644*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0848 001BD648*/ PPC::Runtime::ASM::blr();
}