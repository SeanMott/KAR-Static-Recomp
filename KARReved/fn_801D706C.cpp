//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CF84.hpp"
#include "fn_8018CF84.hpp"
#include "fn_8000A138.hpp"
#include "fn_8000A160.hpp"
#include "fn_8000B108.hpp"
#include "fn_8018D284.hpp"



void fn_801D706C(PPC::Runtime::GCContext* context)
{
/*801D706C 001D3E6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801D7070 001D3E70*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D7074 001D3E74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D7078 001D3E78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D707C 001D3E7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D7080 001D3E80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D7084 001D3E84*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801D7088 001D3E88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801D708C 001D3E8C*/ PPC::Runtime::ASM::bl(fn_8018CF84);
/*801D7090 001D3E90*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7094 001D3E94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*801D7098 001D3E98*/ PPC::Runtime::ASM::b(.L_801D70F4);
RUNTIME_PPC_JUMP_LABEL(.L_801D709C, 0x801D709C) //this is a jump label
/*801D709C 001D3E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801D70A0 001D3EA0*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*801D70A4 001D3EA4*/ PPC::Runtime::ASM::bne(.L_801D70B4);
/*801D70A8 001D3EA8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801D70AC 001D3EAC*/ PPC::Runtime::ASM::bl(fn_8018CF84);
/*801D70B0 001D3EB0*/ PPC::Runtime::ASM::b(.L_801D70F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D70B4, 0x801D70B4) //this is a jump label
/*801D70B4 001D3EB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801D70B8 001D3EB8*/ PPC::Runtime::ASM::bl(fn_8000A138);
/*801D70BC 001D3EBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D70C0 001D3EC0*/ PPC::Runtime::ASM::beq(.L_801D70E4);
/*801D70C4 001D3EC4*/ PPC::Runtime::ASM::bl(fn_8000A160);
/*801D70C8 001D3EC8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D70CC 001D3ECC*/ PPC::Runtime::ASM::bne(.L_801D70E4);
/*801D70D0 001D3ED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801D70D4 001D3ED4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801D70D8 001D3ED8*/ PPC::Runtime::ASM::bl(fn_8000B108);
/*801D70DC 001D3EDC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D70E0 001D3EE0*/ PPC::Runtime::ASM::bne(.L_801D70F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D70E4, 0x801D70E4) //this is a jump label
/*801D70E4 001D3EE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r29));
/*801D70E8 001D3EE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r30));
/*801D70EC 001D3EEC*/ PPC::Runtime::ASM::bl(fn_8018D284);
RUNTIME_PPC_JUMP_LABEL(.L_801D70F0, 0x801D70F0) //this is a jump label
/*801D70F0 001D3EF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D70F4, 0x801D70F4) //this is a jump label
/*801D70F4 001D3EF4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801D70F8 001D3EF8*/ PPC::Runtime::ASM::bne(.L_801D709C);
/*801D70FC 001D3EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D7100 001D3F00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D7104 001D3F04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D7108 001D3F08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D710C 001D3F0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D7110 001D3F10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801D7114 001D3F14*/ PPC::Runtime::ASM::blr();
}