//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CF84.hpp"
#include "fn_800F8248.hpp"
#include "fn_8018D284.hpp"



void fn_801D72A4(PPC::Runtime::GCContext* context)
{
/*801D72A4 001D40A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D72A8 001D40A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D72AC 001D40AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D72B0 001D40B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D72B4 001D40B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D72B8 001D40B8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801D72BC 001D40BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801D72C0 001D40C0*/ PPC::Runtime::ASM::bl(fn_8018CF84);
/*801D72C4 001D40C4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D72C8 001D40C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*801D72CC 001D40CC*/ PPC::Runtime::ASM::b(.L_801D72E8);
RUNTIME_PPC_JUMP_LABEL(.L_801D72D0, 0x801D72D0) //this is a jump label
/*801D72D0 001D40D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D72D4 001D40D4*/ PPC::Runtime::ASM::bl(fn_800F8248);
/*801D72D8 001D40D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801D72DC 001D40DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r30));
/*801D72E0 001D40E0*/ PPC::Runtime::ASM::bl(fn_8018D284);
/*801D72E4 001D40E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D72E8, 0x801D72E8) //this is a jump label
/*801D72E8 001D40E8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801D72EC 001D40EC*/ PPC::Runtime::ASM::bne(.L_801D72D0);
/*801D72F0 001D40F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D72F4 001D40F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D72F8 001D40F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D72FC 001D40FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D7300 001D4100*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D7304 001D4104*/ PPC::Runtime::ASM::blr();
}