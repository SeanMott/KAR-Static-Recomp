//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"
#include "fn_EmissionManager_ResetLingerers_TakeNoParams2.hpp"



void fn_801473A8(PPC::Runtime::GCContext* context)
{
/*801473A8 001441A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801473AC 001441AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801473B0 001441B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801473B4 001441B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801473B8 001441B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801473BC 001441BC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801473C0 001441C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r3));
/*801473C4 001441C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801473C8 001441C8*/ PPC::Runtime::ASM::beq(.L_801473F4);
/*801473CC 001441CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801473D0 001441D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E04F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801473D4 001441D4*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*801473D8 001441D8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*801473DC 001441DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801473E0 001441E0*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*801473E4 001441E4*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*801473E8 001441E8*/ PPC::Runtime::ASM::bl(fn_EmissionManager_ResetLingerers_TakeNoParams2);
/*801473EC 001441EC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801473F0 001441F0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801473F4, 0x801473F4) //this is a jump label
/*801473F4 001441F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801473F8 001441F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801473FC 001441FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80147400 00144200*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80147404 00144204*/ PPC::Runtime::ASM::blr();
}