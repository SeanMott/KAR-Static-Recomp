//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"
#include "fn_8021229C.hpp"
#include "fn_8021229C.hpp"
#include "fn_801FECD4.hpp"
#include "fn_801FECF8.hpp"



void fn_80212484(PPC::Runtime::GCContext* context)
{
/*80212484 0020F284*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80212488 0020F288*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021248C 0020F28C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212490 0020F290*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212494 0020F294*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80212498 0020F298*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*8021249C 0020F29C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802124A0 0020F2A0*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*802124A4 0020F2A4*/ PPC::Runtime::ASM::lis(context->r3, fn_8021229C @ Get_MemoryOffset_HighBit);
/*802124A8 0020F2A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8021229C @ Get_MemoryOffset_LowBit);
/*802124AC 0020F2AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad4, context->r31));
/*802124B0 0020F2B0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r31));
/*802124B4 0020F2B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802124B8 0020F2B8*/ PPC::Runtime::ASM::bne(.L_802124CC);
/*802124BC 0020F2BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*802124C0 0020F2C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802124C4 0020F2C4*/ PPC::Runtime::ASM::bl(fn_801FECD4);
/*802124C8 0020F2C8*/ PPC::Runtime::ASM::b(.L_802124D8);
RUNTIME_PPC_JUMP_LABEL(.L_802124CC, 0x802124CC) //this is a jump label
/*802124CC 0020F2CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*802124D0 0020F2D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802124D4 0020F2D4*/ PPC::Runtime::ASM::bl(fn_801FECF8);
RUNTIME_PPC_JUMP_LABEL(.L_802124D8, 0x802124D8) //this is a jump label
/*802124D8 0020F2D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802124DC 0020F2DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802124E0 0020F2E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802124E4 0020F2E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802124E8 0020F2E8*/ PPC::Runtime::ASM::blr();
}