//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE8C4.hpp"



void fn_801119A4(PPC::Runtime::GCContext* context)
{
/*801119A4 0010E7A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801119A8 0010E7A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801119AC 0010E7AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801119B0 0010E7B0*/ PPC::Runtime::ASM::bl(fn_800EE8C4);
/*801119B4 0010E7B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xc);
/*801119B8 0010E7B8*/ PPC::Runtime::ASM::bne(.L_801119C4);
/*801119BC 0010E7BC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD748 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801119C0 0010E7C0*/ PPC::Runtime::ASM::b(.L_801119C8);
RUNTIME_PPC_JUMP_LABEL(.L_801119C4, 0x801119C4) //this is a jump label
/*801119C4 0010E7C4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801119C8, 0x801119C8) //this is a jump label
/*801119C8 0010E7C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801119CC 0010E7CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801119D0 0010E7D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801119D4 0010E7D4*/ PPC::Runtime::ASM::blr();
}