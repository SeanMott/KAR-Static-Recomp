//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000B024.hpp"
#include "fn_8000A138.hpp"
#include "fn_8000A160.hpp"
#include "fn_8000B108.hpp"
#include "fn_80192788.hpp"
#include "fn_8018D284.hpp"



void fn_801D6FD0(PPC::Runtime::GCContext* context)
{
/*801D6FD0 001D3DD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D6FD4 001D3DD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D6FD8 001D3DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D6FDC 001D3DDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D6FE0 001D3DE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D6FE4 001D3DE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801D6FE8 001D3DE8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D6FEC 001D3DEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*801D6FF0 001D3DF0*/ PPC::Runtime::ASM::b(.L_801D704C);
RUNTIME_PPC_JUMP_LABEL(.L_801D6FF4, 0x801D6FF4) //this is a jump label
/*801D6FF4 001D3DF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801D6FF8 001D3DF8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801D6FFC 001D3DFC*/ PPC::Runtime::ASM::bl(fn_8000B024);
/*801D7000 001D3E00*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7004 001D3E04*/ PPC::Runtime::ASM::bne(.L_801D7048);
/*801D7008 001D3E08*/ PPC::Runtime::ASM::bl(fn_8000A138);
/*801D700C 001D3E0C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7010 001D3E10*/ PPC::Runtime::ASM::beq(.L_801D7034);
/*801D7014 001D3E14*/ PPC::Runtime::ASM::bl(fn_8000A160);
/*801D7018 001D3E18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D701C 001D3E1C*/ PPC::Runtime::ASM::bne(.L_801D7034);
/*801D7020 001D3E20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801D7024 001D3E24*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801D7028 001D3E28*/ PPC::Runtime::ASM::bl(fn_8000B108);
/*801D702C 001D3E2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7030 001D3E30*/ PPC::Runtime::ASM::bne(.L_801D7048);
RUNTIME_PPC_JUMP_LABEL(.L_801D7034, 0x801D7034) //this is a jump label
/*801D7034 001D3E34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D7038 001D3E38*/ PPC::Runtime::ASM::bl(fn_80192788);
/*801D703C 001D3E3C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801D7040 001D3E40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r30));
/*801D7044 001D3E44*/ PPC::Runtime::ASM::bl(fn_8018D284);
RUNTIME_PPC_JUMP_LABEL(.L_801D7048, 0x801D7048) //this is a jump label
/*801D7048 001D3E48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D704C, 0x801D704C) //this is a jump label
/*801D704C 001D3E4C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801D7050 001D3E50*/ PPC::Runtime::ASM::bne(.L_801D6FF4);
/*801D7054 001D3E54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D7058 001D3E58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D705C 001D3E5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D7060 001D3E60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D7064 001D3E64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D7068 001D3E68*/ PPC::Runtime::ASM::blr();
}