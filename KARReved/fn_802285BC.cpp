//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8021F7DC.hpp"



void fn_802285BC(PPC::Runtime::GCContext* context)
{
/*802285BC 002253BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802285C0 002253C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802285C4 002253C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802285C8 002253C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802285CC 002253CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802285D0 002253D0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802285D4 002253D4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802285D8 002253D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E29D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802285DC 002253DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802285E0 002253E0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802285E4 002253E4*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*802285E8 002253E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802285EC 002253EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*802285F0 002253F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*802285F4 002253F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802285F8 002253F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802285FC 002253FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80228600 00225400*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80228604 00225404*/ PPC::Runtime::ASM::blr();
}