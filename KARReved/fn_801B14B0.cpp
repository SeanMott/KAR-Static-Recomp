//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801B15E8.hpp"
#include "fn_801B15C8.hpp"
#include "fn_801B15E8.hpp"
#include "fn_801B15C8.hpp"



void fn_801B14B0(PPC::Runtime::GCContext* context)
{
/*801B14B0 001AE2B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B14B4 001AE2B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B14B8 001AE2B8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E14F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B14BC 001AE2BC*/ PPC::Runtime::ASM::li(context->r4, 0x5a);
/*801B14C0 001AE2C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B14C4 001AE2C4*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B14C8 001AE2C8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B14CC 001AE2CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E14FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B14D0 001AE2D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B14D4 001AE2D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B14D8 001AE2D8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B14DC 001AE2DC*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B14E0 001AE2E0*/ PPC::Runtime::ASM::lis(context->r4, fn_801B15E8 @ Get_MemoryOffset_HighBit);
/*801B14E4 001AE2E4*/ PPC::Runtime::ASM::lis(context->r3, fn_801B15C8 @ Get_MemoryOffset_HighBit);
/*801B14E8 001AE2E8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801B15E8 @ Get_MemoryOffset_LowBit);
/*801B14EC 001AE2EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801B14F0 001AE2F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801B15C8 @ Get_MemoryOffset_LowBit);
/*801B14F4 001AE2F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r31));
/*801B14F8 001AE2F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B14FC 001AE2FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1500 001AE300*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B1504 001AE304*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B1508 001AE308*/ PPC::Runtime::ASM::blr();
}