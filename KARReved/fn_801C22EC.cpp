//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801A0300.hpp"



void fn_801C22EC(PPC::Runtime::GCContext* context)
{
/*801C22EC 001BF0EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C22F0 001BF0F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C22F4 001BF0F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1920 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C22F8 001BF0F8*/ PPC::Runtime::ASM::li(context->r4, 0x29);
/*801C22FC 001BF0FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2300 001BF100*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801C2304 001BF104*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E1924 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2308 001BF108*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C230C 001BF10C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2310 001BF110*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C2314 001BF114*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C2318 001BF118*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C231C 001BF11C*/ PPC::Runtime::ASM::bl(fn_801A0300);
/*801C2320 001BF120*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2324 001BF124*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2328 001BF128*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C232C 001BF12C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C2330 001BF130*/ PPC::Runtime::ASM::blr();
}