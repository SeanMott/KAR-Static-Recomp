//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205884.hpp"
#include "fn_80209104.hpp"
#include "fn_80205A60.hpp"
#include "fn_802064B0.hpp"
#include "fn_8020A664.hpp"



void fn_802069E8(PPC::Runtime::GCContext* context)
{
/*802069E8 002037E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802069EC 002037EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802069F0 002037F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802069F4 002037F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802069F8 002037F8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*802069FC 002037FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80206A00 00203800*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80206A04 00203804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*80206A08 00203808*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80206A0C 0020380C*/ PPC::Runtime::ASM::bne(.L_80206A1C);
/*80206A10 00203810*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80206A14 00203814*/ PPC::Runtime::ASM::bl(fn_80205884);
/*80206A18 00203818*/ PPC::Runtime::ASM::b(.L_80206A4C);
RUNTIME_PPC_JUMP_LABEL(.L_80206A1C, 0x80206A1C) //this is a jump label
/*80206A1C 0020381C*/ PPC::Runtime::ASM::bl(fn_80209104);
/*80206A20 00203820*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80206A24 00203824*/ PPC::Runtime::ASM::beq(.L_80206A2C);
/*80206A28 00203828*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80206A2C, 0x80206A2C) //this is a jump label
/*80206A2C 0020382C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80206A30 00203830*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80206A34 00203834*/ PPC::Runtime::ASM::bl(fn_80205A60);
/*80206A38 00203838*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80206A3C 0020383C*/ PPC::Runtime::ASM::bl(fn_802064B0);
/*80206A40 00203840*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80206A44 00203844*/ PPC::Runtime::ASM::beq(.L_80206A4C);
/*80206A48 00203848*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80206A4C, 0x80206A4C) //this is a jump label
/*80206A4C 0020384C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80206A50 00203850*/ PPC::Runtime::ASM::beq(.L_80206A64);
/*80206A54 00203854*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80206A58 00203858*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80206A5C 0020385C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r30));
/*80206A60 00203860*/ PPC::Runtime::ASM::bl(fn_8020A664);
RUNTIME_PPC_JUMP_LABEL(.L_80206A64, 0x80206A64) //this is a jump label
/*80206A64 00203864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80206A68 00203868*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80206A6C 0020386C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80206A70 00203870*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80206A74 00203874*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80206A78 00203878*/ PPC::Runtime::ASM::blr();
}