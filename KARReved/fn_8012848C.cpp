//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8000A9E4.hpp"
#include "fn_80128A68.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"



void fn_8012848C(PPC::Runtime::GCContext* context)
{
/*8012848C 0012528C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80128490 00125290*/ PPC::Runtime::ASM::mflr(context->r0);
/*80128494 00125294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80128498 00125298*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012849C 0012529C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801284A0 001252A0*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801284A4 001252A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801284A8 001252A8*/ PPC::Runtime::ASM::bl(fn_8000A9E4);
/*801284AC 001252AC*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*801284B0 001252B0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801284B4 001252B4*/ PPC::Runtime::ASM::bne(.L_801284C0);
/*801284B8 001252B8*/ PPC::Runtime::ASM::bl(fn_80128A68);
/*801284BC 001252BC*/ PPC::Runtime::ASM::b(.L_801284E4);
RUNTIME_PPC_JUMP_LABEL(.L_801284C0, 0x801284C0) //this is a jump label
/*801284C0 001252C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801284C4 001252C4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*801284C8 001252C8*/ PPC::Runtime::ASM::beq(.L_801284E4);
/*801284CC 001252CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801284D0 001252D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801284D4 001252D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801284D8 001252D8*/ PPC::Runtime::ASM::beq(.L_801284E4);
/*801284DC 001252DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801284E0 001252E0*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
RUNTIME_PPC_JUMP_LABEL(.L_801284E4, 0x801284E4) //this is a jump label
/*801284E4 001252E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801284E8 001252E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801284EC 001252EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801284F0 001252F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801284F4 001252F4*/ PPC::Runtime::ASM::blr();
}