//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hwGetSampleExtraData2.hpp"
#include "fn_8005F034.hpp"



void fn_801DD29C(PPC::Runtime::GCContext* context)
{
/*801DD29C 001DA09C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801DD2A0 001DA0A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DD2A4 001DA0A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DD2A8 001DA0A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DD2AC 001DA0AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801DD2B0 001DA0B0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*801DD2B4 001DA0B4*/ PPC::Runtime::ASM::bl(fn_hwGetSampleExtraData2);
/*801DD2B8 001DA0B8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD840 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DD2BC 001DA0BC*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 4);
/*801DD2C0 001DA0C0*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*801DD2C4 001DA0C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*801DD2C8 001DA0C8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801DD2CC 001DA0CC*/ PPC::Runtime::ASM::beq(.L_801DD2E4);
/*801DD2D0 001DA0D0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x848, context->r31));
/*801DD2D4 001DA0D4*/ PPC::Runtime::ASM::li(context->r6, 0xff);
/*801DD2D8 001DA0D8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r31));
/*801DD2DC 001DA0DC*/ PPC::Runtime::ASM::bl(fn_8005F034);
/*801DD2E0 001DA0E0*/ PPC::Runtime::ASM::b(.L_801DD2E8);
RUNTIME_PPC_JUMP_LABEL(.L_801DD2E4, 0x801DD2E4) //this is a jump label
/*801DD2E4 001DA0E4*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801DD2E8, 0x801DD2E8) //this is a jump label
/*801DD2E8 001DA0E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DD2EC 001DA0EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DD2F0 001DA0F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DD2F4 001DA0F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801DD2F8 001DA0F8*/ PPC::Runtime::ASM::blr();
}