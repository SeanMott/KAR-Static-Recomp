//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801C992C.hpp"



void fn_801EF278(PPC::Runtime::GCContext* context)
{
/*801EF278 001EC078*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF27C 001EC07C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF280 001EC080*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF284 001EC084*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*801EF288 001EC088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF28C 001EC08C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801EF290 001EC090*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF294 001EC094*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801EF298 001EC098*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF29C 001EC09C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EF2A0 001EC0A0*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801EF2A4 001EC0A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF2A8 001EC0A8*/ PPC::Runtime::ASM::bl(fn_801C992C);
/*801EF2AC 001EC0AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801EF2B0 001EC0B0*/ PPC::Runtime::ASM::beq(.L_801EF2BC);
/*801EF2B4 001EC0B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF2B8 001EC0B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x384, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801EF2BC, 0x801EF2BC) //this is a jump label
/*801EF2BC 001EC0BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/*801EF2C0 001EC0C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801EF2C4 001EC0C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801EF2C8 001EC0C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/*801EF2CC 001EC0CC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801EF2D0 001EC0D0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 2, 26);
/*801EF2D4 001EC0D4*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*801EF2D8 001EC0D8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 4, 26, 27);
/*801EF2DC 001EC0DC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801EF2E0 001EC0E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF2E4 001EC0E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF2E8 001EC0E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF2EC 001EC0EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF2F0 001EC0F0*/ PPC::Runtime::ASM::blr();
}